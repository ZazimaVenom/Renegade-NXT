# Renegade Spline AI 1.1.0 — Unreal Engine 5.8

A server-authoritative runtime plugin for **Renegade NXT** that lets infantry and Character Blueprint vehicles follow authored spline routes without attaching or teleporting them to the spline.

Version 1.1 adds:

- cooperative movement ownership for `RenegadeSoldierCombat` and other AI systems;
- vehicle-like locomotion for tanks, harvesters, APCs, artillery, and similar units built from `ACharacter` Blueprints rather than Wheeled or Chaos vehicle pawns.

The follower samples short look-ahead positions from a spline and sends ordinary NavMesh movement requests through the owning `AAIController`. A unit can leave its route to fight, chase, retreat, harvest, unload, or execute another task, then project its current position back onto the route and continue.

## Main features

- Works with multiple unrelated Pawn and Character Blueprints.
- Units remain independent actors; no spline attachment and no forced route transforms.
- Normal NavMesh pathfinding and obstacle detours.
- GDI, Nod, neutral, or custom integer team IDs.
- Named route groups, forward/reverse travel, open routes, and closed patrol loops.
- Lane offsets for infantry formations and vehicle convoys.
- Combat pause, delayed resume, current-position route reacquisition, and optional progress preservation.
- Named external movement claims so several AI systems can safely share one controller.
- No compile-time dependency on `RenegadeSoldierCombat`; either plugin can be updated independently.
- Actor-level Blueprint helper nodes for easy combat integration.
- Character vehicle profiles for light tracked vehicles, heavy tanks, and harvesters.
- Vehicle acceleration, braking, limited body yaw, turn slowdown, pivot turning, and lateral grip.
- Vehicle behavior applies to spline movement and to external combat `MoveTo` requests.
- Replicated route state, progress, external-claim count, drive telemetry, and vehicle state.
- Blueprint events for route progress, completion, failures, state changes, movement ownership, and drive telemetry.

# Installation and upgrade

## Upgrading from 1.0.0

1. Close Unreal Editor.
2. Back up the project or commit it to source control.
3. Replace the existing folder:

   `YourProject/Plugins/RenegadeSplineAI`

   with the new `RenegadeSplineAI` folder from this package.
4. Delete only this plugin's old `Binaries` and `Intermediate` folders if they exist.
5. Right-click `RenegadeNXT.uproject` and generate Visual Studio project files.
6. Build **RenegadeNXTEditor — Development Editor / Win64**.
7. Open the project and allow affected Blueprints to refresh and compile.

Existing 1.0.0 soldier Blueprints keep the same component and public route/combat functions. The new `External Paused` state was appended to the enum so the earlier state values remain stable.

## Fresh installation

Copy the complete `RenegadeSplineAI` folder into:

`YourProject/Plugins/RenegadeSplineAI`

Then generate project files and build the Development Editor target.

This is source code authored for UE 5.8. A final compiler test must be performed inside the local UE 5.8 project and toolchain.

# Infantry route setup

## 1. Place a route

Place `RenegadeSplinePath` in the level and edit its `RouteSpline` points.

Useful route properties:

- `Route Group`: `GDI_Main_Assault`, `Nod_Main_Assault`, `GDI_Defence`, `GDI_Harvester_Outbound`, and similar names.
- `Allowed Team Ids`: empty accepts every team; otherwise enter the project team integers.
- `Route Enabled`: temporarily disables the route without removing it.
- `Closed Loop`: enable on the spline only for continuous patrol circuits.

The spline is guidance, not navigation geometry. Keep route goals on reachable NavMesh.

## 2. Add the follower

Add `RenegadeSplineFollowerComponent` to each AI soldier Blueprint.

Recommended infantry starting values:

| Property | Starting value |
|---|---:|
| Look Ahead Distance | 500–800 cm |
| Minimum Look Ahead Distance | 150 cm |
| Acceptance Radius | 75–110 cm |
| Route End Tolerance | 100–150 cm |
| Default Combat Resume Delay | 0.5–1.0 s |
| Maximum Resume Backtrack | 400–800 cm |
| Allow Partial Paths | False |

Formation lane examples: `-140`, `-70`, `0`, `70`, `140` cm.

## 3. Start the route

At spawn or BeginPlay:

```text
Path = Find Nearest Compatible Path
    World Location = Soldier Location
    Team Id = Soldier Team Id
    Required Route Group = Desired Route Group

SplineFollower -> Start Following
    New Path = Path
    Reacquire From Current Location = true
```

A placed path can instead be assigned to `Assigned Path` with `Auto Start` enabled.

# RenegadeSoldierCombat compatibility

The plugin does not directly include or link against `RenegadeSoldierCombat`. Compatibility is provided through a stable movement-ownership contract, so the route follower and combat plugin do not continually overwrite one another's `MoveTo` requests.

## Recommended actor-level Blueprint bridge

When `RenegadeSoldierCombat` enters combat, call:

```text
Set Spline Combat Active For Actor
    Controlled Actor = Self or Controlled Pawn
    Combat Active = true
    Combat Target = Current Enemy
```

Call it **before** combat issues chase, cover, retreat, or attack movement.

When combat has fully ended:

```text
Set Spline Combat Active For Actor
    Controlled Actor = Self or Controlled Pawn
    Combat Active = false
    Combat Target = None
    Resume Delay Override = -1
```

A negative override uses `Default Combat Resume Delay`. The follower then projects the unit's **current world location** onto the assigned route and continues from there.

The actor-level helper automatically finds `RenegadeSplineFollowerComponent`, so the Blueprint node does not require a manually wired component `Target` pin.

## Direct component bridge

The existing 1.0 API remains valid:

```text
SplineFollower -> Set Combat Active(true, Enemy)
SplineFollower -> Set Combat Active(false, None, -1)
```

## Movement behavior during combat

While the `Combat` claim is active:

- route timers stop;
- the current route request is cancelled once;
- state becomes `Combat Paused`;
- combat exclusively owns controller movement;
- the assigned spline and route progress are retained;
- release resumes only when no other external system still owns movement.

If the combat target actor is destroyed and `Resume When Combat Target Destroyed` is enabled, the combat claim is released automatically. Health systems that pool or hide dead actors should explicitly call the combat-ended node.

# Compatibility with other AI plugins and logic

Use a stable named claim for any system that needs controller movement outside normal spline travel.

Examples:

- `Combat`
- `CoverSystem`
- `HarvesterTask`
- `RepairBay`
- `ScriptedSequence`
- `VehicleRecovery`

## Component API

```text
Acquire External Movement Claim
    Source Name = CoverSystem
    Stop Current Movement = true

...external system runs AI Move To or other movement...

Release External Movement Claim
    Source Name = CoverSystem
    Resume When All Claims Released = true
    Resume Delay Override = -1
```

## Actor-level API

```text
Set Spline External Movement Active For Actor
    Controlled Actor = Controlled Pawn
    External Active = true
    Source Name = HarvesterTask
```

Call the same node with `External Active = false` when that task is finished.

Claims are idempotent per name and cooperative across names. For example, releasing `Combat` does not restart the route while `RepairBay` remains active.

`External Movement Claim Count` replicates for debugging. `Get External Movement Claims` returns the authority's currently active source names.

## Unannounced external MoveTo fallback

`Auto Resume After Unexpected External Move` can recover when an older plugin interrupts the follower without acquiring a claim. It is disabled by default because explicit begin/end hand-off is safer: the follower cannot know whether an arbitrary outside movement completion really means the whole external task is over.

# Character Blueprint vehicle setup

This mode is specifically for vehicles represented by an `ACharacter` Blueprint. It does **not** require a Wheeled Vehicle Pawn, Chaos vehicle movement, wheel setup, suspension simulation, or physical vehicle drivetrain.

The Character remains NavMesh-compatible while `RenegadeCharacterVehicleComponent` changes how it accelerates, turns, and retains velocity so it behaves like a heavy vehicle rather than a strafing soldier.

## 1. Build the vehicle as a Character Blueprint

Examples:

- `BP_GDI_MediumTank_Character`
- `BP_Nod_LightTank_Character`
- `BP_GDI_Harvester_Character`
- `BP_Nod_Harvester_Character`
- APC, artillery, MRLS, mobile construction, or utility units

Use the Character capsule as the navigation/collision body. Size the capsule and the NavMesh agent settings to represent the vehicle footprint as closely as the project permits. Ensure roads, base gates, refinery approaches, and turns are wide enough for that navigation agent.

For long or unusually wide meshes, keep additional mesh collision from fighting the Character capsule. The capsule remains the authoritative movement shape.

## 2. Add both components

Add:

1. `RenegadeSplineFollowerComponent`
2. `RenegadeCharacterVehicleComponent`

The follower automatically detects the vehicle component. It then:

- uses larger vehicle-friendly route distances;
- sends non-strafing path requests;
- supplies the current spline goal as a steering hint;
- still allows NavMesh path direction to take priority during obstacle detours.

## 3. Select a vehicle profile

### Light Tracked Vehicle

Suitable for a Nod buggy-style tracked approximation, light tank, fast APC, or small combat vehicle.

- faster acceleration and speed;
- higher yaw rate;
- quick pivot turns;
- shorter look-ahead.

### Heavy Tank

Suitable for medium tanks, Mammoth-style heavy vehicles, artillery, or large APCs.

- lower acceleration;
- slower capped body yaw;
- strong braking;
- tracked pivot turning;
- larger route look-ahead.

### Harvester / Heavy Utility

Suitable for harvesters and slow logistics vehicles.

- low speed and acceleration;
- wide, slow turns;
- pivot turning disabled by default;
- largest route look-ahead and arrival tolerances.

### Custom

Preserves manually entered handling values.

## 4. Important vehicle properties

| Property | Purpose |
|---|---|
| Cruise Speed | Maximum straight-line Character speed in cm/s |
| Acceleration | How quickly the vehicle reaches requested speed |
| Braking Deceleration | How strongly it slows when path movement stops |
| Ground Friction | General CharacterMovement grip/braking feel |
| Maximum Yaw Rate | Maximum body rotation during ordinary driving |
| Turn Slowdown Start Angle | Heading error at which speed begins decreasing |
| Minimum Corner Speed | Lowest ordinary turn speed |
| Allow Pivot Turn | Lets tracked units rotate almost in place |
| Pivot Turn Start Angle | Severe heading error needed for pivot mode |
| Pivot Yaw Rate | Body rotation rate during pivot mode |
| Pivot Maximum Speed | Maximum translation while pivoting |
| Allow Reverse Motion | Allows backwards body velocity; off makes it turn first |
| Lateral Grip | Removes sideways infantry-style sliding |
| Use RVO Avoidance | Enables CharacterMovement RVO where appropriate |

## 5. Vehicle animation, tracks, audio, and effects

Read these replicated values from the component:

- `Current Throttle`
- `Current Steering`
- `Current Speed KPH`
- `Is Pivot Turning`

Or bind `On Vehicle Drive Updated`.

Typical uses:

- scroll left/right tread materials;
- rotate wheel bones;
- change engine pitch;
- trigger dust and exhaust;
- play pivot-turn track effects;
- drive an AnimBP vehicle state machine.

For a tracked tank, derive independent visual tread rates from the normalized values, for example:

```text
Left Track  = Current Throttle - Current Steering
Right Track = Current Throttle + Current Steering
```

Clamp or scale those values for the material/animation setup.

## 6. Turret and hull separation

The component rotates the owning Character as the vehicle hull. A tank turret should normally be a separate mesh component, bone, or child actor that aims independently at the combat target. Do not make the hull constantly face the enemy while it is also navigating unless that is the intended vehicle behavior.

## 7. Combat movement with Character vehicles

The same combat hand-off works for vehicles:

```text
Set Spline Combat Active For Actor(true, Enemy)
Combat plugin issues AI Move To / chase / reposition
Set Spline Combat Active For Actor(false, None, -1)
```

`RenegadeCharacterVehicleComponent` reads the active NavMesh path direction regardless of whether that path was requested by the spline follower or the combat plugin. Therefore chase and reposition movement retain the same tank/harvester handling.

When combat is stationary and there is no movement path, the component does not force the hull to rotate. Turret aiming can continue independently.

# Harvester route pattern

The movement plugin intentionally leaves economy rules to the Renegade NXT game layer. A clean harvester flow is:

```text
Outbound route completes
    -> Acquire claim "HarvesterTask"
    -> Harvest animation/resource timer
    -> Start return route or set reverse spline travel
    -> Release claim

Refinery route completes
    -> Acquire claim "HarvesterTask"
    -> Unload cargo / credit team
    -> Start outbound route
    -> Release claim
```

Use separate route groups such as:

- `GDI_Harvester_Outbound`
- `GDI_Harvester_Return`
- `Nod_Harvester_Outbound`
- `Nod_Harvester_Return`

A single route can also be traversed in reverse by changing `Travel Direction`, setting route distance near the appropriate end, and starting/resuming the follower.

Combat can overlap a harvester task safely because named claims are independent. The route resumes only when both `Combat` and `HarvesterTask` have been released.

# Multiplayer model

Route and AI movement commands are authority-controlled. Replicated properties expose route state/progress, external claim count, vehicle drive state, and drive telemetry to clients. Actual Character movement continues to use Unreal's CharacterMovement replication.

Call route assignment, combat hand-off, and movement-claim functions from server-owned AI logic. Client UI requests should be validated and forwarded through project server RPCs.

# Behavior Tree / State Tree pattern

```text
Root
└─ Selector
   ├─ Combat branch
   │  ├─ Set Spline Combat Active For Actor(true, Enemy) on entry
   │  ├─ Chase / cover / attack
   │  └─ Set Spline Combat Active For Actor(false) on exit
   ├─ Special task branch
   │  ├─ Set External Movement Active(true, "SpecialTask")
   │  ├─ External movement/task
   │  └─ Set External Movement Active(false, "SpecialTask")
   └─ Route branch
      └─ Follower remains Following/Reacquiring
```

Do not repeatedly call combat-active every tick when a branch entry/exit event is available. Repeated calls are tolerated, but state transitions are cleaner and easier to debug when they occur once per branch transition.

# Debugging and troubleshooting

## Unit does not move

- Confirm it is possessed by an `AAIController`.
- Confirm `NavMeshBoundsVolume` covers the unit, route goals, and combat areas.
- Press **P** to inspect NavMesh coverage.
- Confirm the path accepts the component `Team Id`.
- Check `Follow State`, `External Movement Claim Count`, and `On Move Failure`.

## Follower remains Combat Paused

- Ensure the combat system calls combat-active `false` after losing or killing the target.
- For pooled enemies, do not rely only on Actor destruction.
- Check that another named movement claim is not still active.

## Follower becomes Suspended

Another system interrupted its request without first acquiring movement. Add the actor-level external movement hand-off around that system. The optional unannounced-interruption fallback can be enabled for legacy logic.

## Vehicle still slides sideways

- Increase `Lateral Grip` gradually.
- Confirm the follower has `Force No Strafe For Character Vehicles` enabled.
- Confirm Character rotation options are not being reset every Blueprint tick.
- Avoid another component continuously writing actor rotation or Character velocity.

## Vehicle turns too sharply or clips corners

- Reduce `Maximum Yaw Rate`.
- Increase vehicle `Recommended Spline Look Ahead Distance`.
- Use smoother spline bends.
- Widen NavMesh around corners.
- Match the NavMesh agent/capsule size to the vehicle.

## Vehicle cannot pass gates or refinery entrances

The Character capsule and NavMesh agent determine navigability. Widen the passage, reduce the capsule only when collision remains acceptable, or provide a project-specific navigation solution for the entrance.

## Vehicle mesh faces the wrong axis

The owning Character's forward axis is Unreal +X. Rotate the vehicle mesh relative to the Character so the visual front points along +X; do not rotate the whole Character Blueprint root to compensate.

# C++ examples

## Combat hand-off

```cpp
if (URenegadeSplineFollowerComponent* Follower =
        ControlledPawn->FindComponentByClass<URenegadeSplineFollowerComponent>())
{
    Follower->SetCombatActive(true, EnemyActor);

    // Combat owns controller movement here.

    Follower->SetCombatActive(false, nullptr, 0.75f);
}
```

## External movement claim

```cpp
Follower->AcquireExternalMovementClaim(TEXT("RepairBay"));

// Issue outside MoveTo requests or scripted movement.

Follower->ReleaseExternalMovementClaim(TEXT("RepairBay"), true, 0.5f);
```

## Character vehicle setup

```cpp
if (URenegadeCharacterVehicleComponent* Vehicle =
        TankCharacter->FindComponentByClass<URenegadeCharacterVehicleComponent>())
{
    Vehicle->VehiclePreset = ERenegadeCharacterVehiclePreset::HeavyTracked;
    Vehicle->ApplyVehiclePreset();
}
```

# Design boundary

A Character-based vehicle is a deliberate gameplay approximation. It provides predictable NavMesh AI, collision, acceleration, steering limits, and replicated Character movement. It does not simulate wheel suspension, tire contact patches, differential physics, drivetrain torque, or destructible wheel behavior. That trade-off is appropriate when Renegade NXT needs reliable autonomous tanks and harvesters without depending on a Wheeled Vehicle Pawn architecture.
