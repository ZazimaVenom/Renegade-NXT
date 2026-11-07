# Harvester Warfare — v1.7.6

## v1.7.6 movement stability

`Has Usable Spline Route` now checks the Spline Follower's actual `Follow State`. A path that remains assigned after an open route completes no longer blocks direct-navigation fallback. States such as `Completed`, `Idle`, `Stopped`, `Suspended`, or `Failed` are treated as inactive; following/reacquiring/paused states remain resumable.

Runtime Refinery spawning can enable **Ensure Spawned Harvester Has AI Controller**. When enabled, a spawned Harvester with no controller receives the Character Blueprint's configured default AI Controller before spawn events are broadcast.

Two explicit server-authority Blueprint calls are available:

```text
Harvester Combat -> Go To Harvest Point
Harvester Combat -> Go To Refinery Dock Point
```

These calls are useful from `On Harvester Spawned`, `On Harvester Respawned`, Spline `On Route Completed`, or custom route logic. They reserve the destination, set the lifecycle state, acquire `HarvesterCycle`, ensure an AI Controller exists, and issue the direct move.

### Recommended no-spline setup

```text
Refinery On Harvester Spawned
    -> Go To Harvest Point

Automatic harvest timer completes
    -> Go To Refinery Dock Point (automatic fallback, or call explicitly)

Unload/departure completes
    -> Go To Harvest Point (automatic fallback, or call explicitly)
```

### Recommended spline setup

Keep the spline as the long-distance route. At the end of an outbound route, the completed state allows the Harvest Point final approach. After harvesting, assign/start the return spline from `On Return To Refinery Route Requested`; if no active return spline is supplied, the Dock Point fallback takes over.

---

# Renegade NXT Harvester Warfare — v1.7.3

This guide configures GDI and Nod Harvester Character Blueprints for autonomous route travel, placeable Harvest Points and Refinery Dock Points, direct-navigation fallback when no spline exists, timed harvesting/refinery cycles, defensive machine-gun combat, Refinery spawning/respawning, cargo delivery, replicated team credits, EVA announcements, destruction FX, persistent wrecks, and timed wreck cleanup.

`RenegadeSplineAI` remains preferred for normal route travel whenever its follower has an assigned path. The Harvester temporarily acquires the Spline AI external movement claim `HarvesterCycle` for final approaches. In v1.7.3, if no usable spline path is assigned after the exposed fallback grace period, the same AI Controller automatically performs the complete Dock Point ↔ Harvest Point journey using NavMesh `MoveTo`.

## 1. Harvester Character Blueprint components

A Character Blueprint Harvester should normally contain:

- `RenegadeSplineFollowerComponent`
- `RenegadeCharacterVehicleComponent`
- `RenegadeHarvesterCombatComponent`
- the Harvester visual mesh / vehicle animation setup already used by the project

Use the Spline AI vehicle preset `Harvester / Heavy Utility` for the existing heavy-vehicle handling. The combat component rotates its turret, applies weapon/health/economy logic, and owns only the short Harvest Point / Refinery-dock final approach while a cooperative external movement claim is active.

Recommended Scene Component names/tags:

| Purpose | Recommended tag |
|---|---|
| damage / AI aim point | `HarvesterTarget` |
| turret yaw base | `HarvesterTurret` |
| optional gun pitch | `HarvesterGunPitch` |
| machine-gun muzzle | `HarvesterMuzzle` |

The component picker can be used instead of tags for every one of these.

## 2. Team and health

On `Renegade Harvester Combat Component`:

- set `Team Id` to `GDI` or `Nod` on placed/test vehicles;
- Refinery-spawned Harvesters automatically inherit the Refinery Building Combat Component's Team Id;
- set `Maximum Health` and `Incoming Damage Multiplier`;
- keep `Register As Combat Target` enabled when infantry should be able to acquire the Harvester;
- use `Infantry Target Priority` to make infantry more or less willing to attack it.

Existing Soldier Combat targeting exposes:

- `Target Hostile Harvesters`
- `Harvester Target Distance Score Multiplier`

This lets AI infantry engage Harvesters without converting the Harvester into a Soldier Combat actor.

## 3. Defensive machine-gun turret

### Existing turret component setup

Preferred setup:

1. Select the Harvester's rotating turret Scene/Static/Skeletal Mesh component as `Turret Yaw Component`.
2. Optionally select a child gun/barrel component as `Turret Pitch Component`.
3. Select a Scene Component at the muzzle as `Turret Muzzle Component`.
4. Tune yaw/pitch rotation speed, pitch limits, optional yaw limits, and `Fire Alignment Tolerance Degrees`.

If no pitch component is selected, the yaw component is also pitched.

### Generated / pivot-attached turret mesh

Assign either `Turret Static Mesh` or `Turret Skeletal Mesh` whenever you want the combat component to create the visible turret asset at runtime. In v1.7.8 this works in both setups:

- with existing `Turret Yaw Component` / `Turret Pitch Component` Scene pivots, the generated mesh attaches below Pitch when available (otherwise Yaw) and inherits their target tracking;
- with no authored pivots, the generated mesh itself becomes the controllable turret component.

Skeletal mesh takes priority when both assets are assigned. `Attach Generated Turret Visual To Pitch` is enabled by default; disable it when the generated asset represents a yaw-only turret base. Configure:

- attach socket;
- relative location;
- relative rotation;
- relative scale.

For a generated skeletal turret, v1.7.9 also exposes `Turret Muzzle Socket Name`. Choose the barrel/muzzle socket directly from the Details-panel dropdown populated from the assigned skeletal mesh. When the selected socket exists, it is the preferred firing origin and `Turret Muzzle Relative Offset` is applied in socket-local space. Leave the socket at `None` to continue using `Turret Muzzle Component` / `Turret Muzzle Component Tag`.

The plugin creates the cosmetic rotating turret component at runtime. The chassis still remains under Spline AI control.

### Targeting behaviour

Default Harvester defence is infantry-first:

- `Enable Defensive Turret = true`
- `Prioritize Infantry = true`
- `Allow Target Enemy Harvesters = false`

The turret scans registered hostile Soldier Combat actors, including player-controlled combat Characters that are registered as targets.

Tune:

- search radius;
- target refresh interval;
- line-of-sight requirement;
- lost-sight grace time;
- maximum weapon range.

The Harvester does not stop or alter its route merely because the turret has a target.

## 4. Machine-gun weapon and presentation

Expose/tune:

- damage per shot;
- rounds per minute;
- spread;
- trace channel;
- damage type;
- friendly fire.

### Bullet mesh

Enable `Use Bullet Mesh` and assign:

- bullet Static Mesh;
- optional material override;
- mesh scale;
- rotation offset;
- visual speed;
- pool size.

Damage remains authoritative hitscan. The bullet mesh is a pooled travelling cosmetic aligned to the authoritative trace end.

### Muzzle and impact FX

Both systems may be assigned at the same time:

- Muzzle Cascade
- Muzzle Niagara
- Impact Cascade
- Impact Niagara

Assign `Fire Sound` and volume as required.

Enable `Draw Debug` while tuning turret alignment or collision.

## 5. Vehicle-style ground alignment (v1.7.8)

The Character capsule/root should remain upright for stable NavMesh, Spline AI and replicated Character movement. Ground alignment therefore affects only a visual chassis component.

Under `Renegade NXT > Harvester > Ground Alignment`:

- set `Ground Alignment Visual Component` to the Harvester's main body/chassis mesh, or tag that component `HarvesterBody`;
- when neither is supplied on a Character Blueprint, the plugin automatically falls back to `CharacterMesh0`;
- keep `Enable Ground Alignment` enabled;
- tune `Front Probe Distance`, `Rear Probe Distance` and `Half Track Width` to approximate the wheel/track footprint;
- tune `Trace Start Height` and `Trace Down Distance` so all four probes reach the landscape;
- use `Maximum Pitch Degrees`, `Maximum Roll Degrees` and `Rotation Interp Speed` to control how heavily the vehicle follows bumps and slopes.

Four downward probes sample front-left, front-right, rear-left and rear-right terrain. The component averages the front/rear and left/right contact heights, then smoothly adds pitch/roll to the original relative rotation of the visual body. Actor yaw stays under normal Character/Spline movement control.

Recommended starting values:

| Setting | Start |
|---|---:|
| Front Probe Distance | 260 cm |
| Rear Probe Distance | 260 cm |
| Half Track Width | 135 cm |
| Trace Start Height | 180 cm |
| Trace Down Distance | 500 cm |
| Maximum Pitch | 18° |
| Maximum Roll | 14° |
| Rotation Interp Speed | 7 |

Attach the Yaw/Pitch turret pivot hierarchy under the aligned chassis when you want the turret base to inherit the Harvester's terrain lean. Turret target rotation is updated after ground alignment each frame. Enable `Draw Debug Ground Probes` while tuning probe placement.

`Refresh Harvester Presentation` re-resolves the chassis and rebuilds the optional generated turret visual after runtime changes. `Set Runtime Ground Alignment Visual Component` provides a direct runtime override.

## 6. Harvester damage from infantry and rockets

Version 1.7.0 registers Harvesters in the shared combat registry.

The existing Soldier Combat system now resolves Harvester hit geometry through child actors, attachments, owners, and instigators. This applies to:

- AI automatic rifle / pistol fire;
- player rifle / pistol fire;
- NPC rocket-launcher soldiers;
- player rocket launcher.

Rocket splash against a Harvester uses the closest point on the vehicle/child-actor bounds rather than relying only on a single aim point. Large side/track impacts therefore remain valid splash hits.

## 7. Harvester EVA

Under `Harvester > Audio`, configure optional generic fallback sounds and/or team-aware sound sets.

Each team-aware set exposes:

- GDI Friendly Harvester Sound
- GDI Enemy Harvester Sound
- Nod Friendly Harvester Sound
- Nod Enemy Harvester Sound

Separate sets are available for:

- Under Attack
- Critical Health
- Destroyed

`USoundBase` fields accept Sound Waves or Sound Cues.

Announcements use the existing prioritized world EVA channel, so Harvester warnings participate in the same non-overlapping GDI/Nod announcement system as buildings.

## 8. Destruction, wreck, smoke, and cleanup

Under `Harvester > Destruction`, assign any combination of:

- Explosion Cascade
- Explosion Niagara
- Explosion Sound
- Destroyed Wreck Static Mesh
- Destroyed Wreck Skeletal Mesh
- Wreck relative location/rotation/scale
- Wreck collision settings
- Wreck Smoke Cascade
- Wreck Smoke Niagara
- Wreck Smoke Relative Location
- `Wreck Cleanup Seconds`

The skeletal wreck takes priority when both wreck mesh types are assigned.

When destroyed:

1. the server marks the live Harvester destroyed;
2. turret targeting stops;
3. destruction FX/EVA multicast;
4. a separate replicated `RenegadeHarvesterWreck` actor is spawned at the death transform;
5. the original live Harvester actor is removed;
6. its Refinery schedules a replacement;
7. the old wreck remains independently of the replacement;
8. after `Wreck Cleanup Seconds`, the server destroys the wreck and its attached smoke presentation is cleaned up with it.

Set `Wreck Cleanup Seconds = 0` only when a permanent wreck is deliberately required.

## 9. Placeable Harvest Points and automatic field approach

Place `Renegade Harvest Point` actors in each Tiberium/resource field. They are real level actors and can be selected in the World Outliner.

Useful Harvest Point settings:

- `Team Id`: `GDI`, `Nod`, or `None/Neutral` for any team;
- `Harvest Point Enabled`;
- `Approach Radius`: the Harvester stays on its spline until it enters this radius;
- `Interaction Radius`: distance at which the final approach is considered complete;
- `Harvest Location Offset`;
- `Harvest Point Group`: optional named field group;
- `Exclusive Reservation`: prevents several Harvesters from trying to occupy exactly the same collection point.

The Harvest Point exposes events for Harvester arrived, harvesting started/ended, and reservation changes.

On the Harvester Combat Component, `Cycle > Harvest Point` exposes:

- Enable Automatic Harvest Point Approach
- Use Harvest Point Defined Distances
- fallback Approach / Acceptance distances
- Auto Find Nearest Harvest Point
- Harvest Point Search Radius
- Required Harvest Point Group

A manually placed Harvester may have `Assigned Harvest Point` set directly on the placed actor instance. Refinery-spawned Harvesters are normally assigned by the Refinery.

### Automatic field sequence

```text
Normal outbound Spline AI travel
        ↓
Enters Harvest Point Approach Radius
        ↓
Acquire external movement claim: HarvesterCycle
        ↓
AI MoveTo exact Harvest Point
        ↓
Waiting To Harvest
        ↓  Harvest Arrival Delay Seconds
Harvesting
        ↓  Harvest Duration Seconds or Cargo Full
Returning To Refinery
        ↓
Release HarvesterCycle claim
        ↓
Spline AI return route resumes/reacquires
```

The Harvester exposes `On Harvest Point Approach Started` and `On Harvest Point Arrived` events as well as the normal harvesting lifecycle events.

## 10. Refinery Harvester factory, respawn hook, and dock

Open the GDI or Nod Refinery Blueprint and select its existing `Renegade Building Combat Component`.

Set:

- `Building Type = Refinery`
- `Enable Harvester Spawner = true`
- `Harvester Character Class =` the team's Harvester Character Blueprint

Add a Scene Component at the intended exit/spawn position and either select it as `Harvester Spawn Point Component` or tag it `HarvesterSpawn`.

Add another Scene Component at the exact unloading/docking position and select it as `Harvester Dock Point Component` or tag it `HarvesterDock`.

Additional exposed settings include:

- Harvester Spawn Relative Offset / Rotation Offset
- Auto Spawn Harvester On Begin Play
- Initial Harvester Spawn Delay Seconds
- Harvester Respawn Delay Seconds
- Require Operational Refinery For Harvester Spawn
- Harvester Harvest Point
- Auto Find Harvester Harvest Point
- Harvester Harvest Point Group
- Harvester Dock Relative Offset / Rotation Offset

Because a Blueprint class default cannot hold a normal reference to a level-placed actor in another level, `Harvester Harvest Point` is intended to be assigned on the **placed Refinery instance**. Leaving it empty is also valid when `Auto Find Harvester Harvest Point` is enabled. The spawned Harvester receives the resolved point automatically before BeginPlay.

### Refinery Blueprint events

Bind as needed:

- `On Harvester Spawned` — fires for every Harvester including the initial one; use this to start the initial outbound spline if desired.
- `On Harvester Respawned` — fires only for replacement Harvesters after the first one; this is the dedicated hook for restarting/reacquiring the outbound spline after destruction.
- `On Harvester Respawn Scheduled`

`Get Harvester Spawn Transform`, `Get Harvester Dock Transform`, `Spawn Harvester Now`, `Schedule Harvester Respawn`, and `Resolve Harvester Harvest Point` are also exposed.

When `Require Operational Refinery For Harvester Spawn` is enabled, destruction prevents replacement spawning until the Refinery becomes operational again.

## 11. Automatic cycle timing and Spline AI hooks

Under `Harvester > Cycle`, tune the complete timing/approach behaviour:

### Harvest timing

- Harvest Arrival Delay Seconds
- Harvest Duration Seconds (`0` = harvest until full/manual End Harvesting)
- Finish Harvest When Cargo Full
- Post Harvest Departure Delay Seconds

### Refinery timing

- Enable Automatic Refinery Docking
- Refinery Dock Approach Distance
- Refinery Dock Acceptance Distance
- Unload Start Delay Seconds
- Unload Duration Seconds (`0` = unload until empty/manual End Refinery Unloading)
- Finish Unload When Cargo Empty
- Post Unload Departure Delay Seconds

### Movement hand-off

- Movement Retry Seconds
- Use Spline External Movement Claim
- Spline Movement Claim Name (default `HarvesterCycle`)
- Spline Resume Delay Seconds

The integration uses runtime discovery of the Spline AI follower's `Acquire External Movement Claim` / `Release External Movement Claim` API. This keeps `RenegadeSoldierCombat` from taking a compile-time dependency on the Spline AI plugin while still preventing the two systems from issuing competing movement requests.

### Route-selection Blueprint events

The combat component does not select a specific Spline Path class because your map may use separate outbound/return routes, reverse travel, or custom route groups. Instead it exposes authority events at the exact hand-off points:

- `On Return To Refinery Route Requested` — fired when field harvesting finishes. Select/start your return spline here.
- `On Outbound Harvest Route Requested` — fired after unloading/departure. Select/start the outbound spline here.

The existing manual calls remain available:

- Start Harvesting / End Harvesting
- Mark Returning To Refinery
- Start Refinery Docking
- Harvester Docked At Refinery
- Start / End Refinery Unloading
- Harvester Undocked From Refinery

The automatic loop uses these same lifecycle states, so manual Blueprint control and automatic operation remain compatible.

## 12. Cargo and team credits

Harvester economy settings expose:

- Economy Update Interval Seconds (default `0.10`, avoids per-frame credit replication while preserving time-correct rates)
- Cargo Capacity
- Automatically Gather Cargo While Harvesting
- Harvest Rate Units Per Second
- Automatically Unload While Docked
- Unload Rate Units Per Second
- Credits Per Cargo Unit

While the lifecycle state is `Harvesting`, automatic gathering increases replicated `Current Cargo` until capacity.

While `Refinery Unloading`, automatic unloading removes cargo and converts it into integer team credits. Fractional credit conversion is retained between unload ticks so slow/decimal conversion rates do not lose value unnecessarily.

`End Refinery Unloading` deposits any remaining cargo before entering the leaving state.

### Harvester economy Blueprint calls

- Add Harvested Cargo
- Set Current Cargo
- Deposit Cargo To Team Credits
- Get Team Credits Manager

Events:

- On Cargo Changed
- On Credits Delivered

## 13. Global replicated team-credit bank

The plugin creates one `Renegade Team Credits Manager` on the server when a Refinery/Harvester first needs the economy. It is always relevant and replicates the team balances to clients.

Teams are generic `FName` values. `GDI` and `Nod` are normal project choices, but the manager is not hard-coded to only those names.

Global Blueprint helper nodes:

- Get Renegade Team Credits Manager
- Get Renegade Team Credits
- Add Renegade Team Credits
- Spend Renegade Team Credits

Manager functions also expose:

- Get Team Credits
- Add Team Credits
- Try Spend Team Credits
- Set Team Credits
- Reset All Team Credits

Bind `On Team Credits Changed` for HUD updates.

Server-owned purchase logic should call `Try Spend Team Credits` / `Spend Renegade Team Credits` before granting a character, weapon, or vehicle. Client UI should send the purchase request to authoritative game logic rather than directly changing credits.

## 14. Multiplayer model

Authority responsibilities:

- Refinery Harvester spawning and respawn scheduling;
- Harvester health and destruction;
- turret target selection and hitscan damage;
- cargo accumulation/unloading;
- team-credit mutations;
- wreck spawn/lifetime cleanup.

Replicated/presented state includes:

- Harvester actor movement through the existing Character/Spline AI networking;
- team;
- health / critical / destroyed state;
- current turret target;
- lifecycle state;
- cargo;
- owning Refinery;
- current Refinery `Active Harvester`;
- global team credits;
- turret-fire cosmetic multicast;
- EVA/destruction cosmetic multicast;
- independent wreck actor and smoke.

## 15. Recommended validation pass

For each GDI and Nod Harvester:

1. Place a compatible `Renegade Harvest Point` in the field and add `HarvesterSpawn` + `HarvesterDock` Scene Components to the Refinery.
2. Confirm the Refinery spawns the correct Character BP and `On Harvester Spawned` starts/reacquires the outbound spline.
3. Confirm that entering the Harvest Point Approach Radius causes the Harvester to leave the spline for the final MoveTo, wait the configured arrival delay, and begin timed harvesting.
4. Confirm `On Return To Refinery Route Requested` can select/start the return spline and that final Refinery docking/unloading runs automatically near `HarvesterDock`.
5. Put hostile infantry beside the route and confirm the turret rotates independently while the Harvester continues moving.
6. Confirm muzzle FX, bullet mesh, impact FX, sound and actual Soldier health loss.
7. Fire rifle/pistol shots into the Harvester and confirm Harvester health/EVA.
8. Test player and NPC rockets against centre and side geometry.
9. Trigger Start/End Harvesting and verify cargo growth stops/starts correctly.
10. Trigger docking/unloading and verify the correct team's global credits increase.
11. Destroy the Harvester and confirm explosion, destroyed EVA, wreck and smoke.
12. Confirm the Refinery spawns a replacement while the old wreck remains and `On Harvester Respawned` fires.
13. Wait `Wreck Cleanup Seconds` and confirm the old wreck/smoke disappear.
14. Destroy the Refinery before a replacement is due and confirm replacement spawning is blocked until restore when operational gating is enabled.
15. Repeat as listen server + LAN client and verify the same health, cargo, lifecycle, credits, target, replacement and wreck state.



## 9. Placeable Refinery Dock Points and no-spline fallback

Place a `Renegade Refinery Dock Point` actor at the exact unloading bay. This is the preferred v1.7.3 setup; the older `HarvesterDock` Scene Component remains supported as a legacy fallback.

Useful Dock Point settings:

- `Team Id`;
- `Dock Point Enabled`;
- `Approach Radius`;
- `Interaction Radius`;
- `Dock Location Offset` / `Dock Rotation Offset`;
- `Dock Point Group`;
- `Exclusive Reservation`.

The Dock Point exposes reservation, approach-started, docked and undocked events. The Refinery can explicitly assign a level Dock Point or auto-find the nearest compatible one by team/group. Spawned and respawned Harvesters receive that reference automatically. `Owning Refinery Actor` is also exposed on the placed Dock Point for manual setups; Refinery auto-resolution fills it automatically.

### Direct navigation fallback

Under `Harvester > Cycle > Direct Navigation Fallback`:

- `Enable Direct Navigation Fallback`;
- `Direct Navigation Fallback Delay Seconds`.

The component checks the existing `RenegadeSplineFollower` at runtime without a compile-time dependency. If it finds an assigned spline path, that route remains authoritative for long travel. If no usable assigned path exists after the grace period, the Harvester automatically drives the entire cycle directly:

```text
Refinery / Dock Point
→ AI MoveTo Harvest Point
→ arrival delay
→ timed harvesting / cargo full
→ AI MoveTo Refinery Dock Point
→ unload delay
→ unloading / team credits
→ departure delay
→ AI MoveTo Harvest Point again
```

This fallback still uses the Character's normal AI Controller, NavMesh, Harvester/Heavy Utility movement profile, reservations, lifecycle events and server-authoritative economy. It does not teleport or attach the vehicle to either destination actor.



## v1.7.3 Dock Point / fallback test

1. Place a team-compatible `Renegade Harvest Point` in the field and a `Renegade Refinery Dock Point` at the unloading bay.
2. Assign both on the placed Refinery or enable automatic lookup with matching groups.
3. With a valid Spline AI path assigned, confirm long-distance movement stays on the spline and only final approach uses `AI MoveTo`.
4. Remove/clear the Harvester spline assignment and respawn it. After `Direct Navigation Fallback Delay Seconds`, confirm it navigates directly to the Harvest Point from any distance.
5. Confirm timed harvesting completes, then the Harvester navigates directly to the Dock Point, unloads into the correct team-credit pool, waits the departure delay, and returns directly to the Harvest Point.
6. Confirm destroying the Harvester releases both Harvest Point and Dock Point reservations and the replacement Harvester can reserve them again.

## v1.7.6 arrival nodes and duplicate-spawn protection

The reliable explicit arrival calls are:

```text
Arrived At Harvest Point
Arrived At Refinery Dock Point
```

Use them from a spline `On Route Completed` or custom movement completion event when desired. `Notify Harvester Arrived` on `Renegade Harvest Point` and `Notify Harvester Docked` on `Renegade Refinery Dock Point` now forward into these same Harvester lifecycle transitions instead of acting as notification-only events.

Large Character Harvesters use capsule-aware arrival distance and MoveTo acceptance, so the vehicle's actor origin no longer has to enter the small interaction radius.

Refinery auto-spawning now has re-entry protection. With `Adopt Existing Harvester On Begin Play` enabled, a compatible live Harvester near the configured spawn location is adopted as the Refinery's active Harvester rather than duplicated.


## v1.7.6 duplicate and arrival safeguards

`Enforce Single Active Harvester Per Team` is enabled by default on Refinery building combat. Before a BeginPlay or respawn creation, the Refinery searches the world for an existing operational Harvester of the same configured class/team and adopts it instead of creating another. This catches manually placed Harvesters that are already far away at the field as well as duplicate spawn requests.

`Arrived At Harvest Point` and `Arrived At Refinery Dock Point` are explicit authoritative lifecycle commands. Automatic Go-To/reservation logic remains strict, but an explicit arrival command no longer aborts just because another actor owns the reservation. This prevents a stale/duplicate reservation from leaving a Harvester motionless at the destination.


## v1.7.7 physical arrival fix

Large Character Harvesters use a capsule footprint. Earlier versions expanded `AI MoveTo` acceptance by that capsule radius and also enabled Unreal's `Stop On Overlap` reach test, which could add the agent radius a second time. The controller could therefore stop the Harvester visually at the field/refinery while the Harvester lifecycle still considered it too far away.

v1.7.7 uses one consistent reach model: the MoveTo acceptance is `interaction radius + capsule radius` with `Stop On Overlap` disabled, while lifecycle distance subtracts the capsule radius before comparing against the interaction radius. Harvest and Dock arrival now agree.

`On Harvest Point Arrived` and `On Refinery Dock Point Arrived` are notification events. Do not feed them back into `Arrived At Harvest Point` / `Arrived At Refinery Dock Point`. For spline-driven routes, call the `Arrived At ...` command from the spline's route-completed event; for `Go To ...` or direct fallback movement, arrival is detected automatically.

For Blueprint animation/state booleans, bind `On Harvesting Started` / `On Harvesting Ended` and `On Refinery Unloading Started` / `On Refinery Unloading Ended`.

## v1.7.8 presentation notes

- A selected generated turret asset is no longer suppressed by valid Yaw/Pitch pivots.
- Empty component references are prevented from implicitly turning the Character root into a turret control component.
- Terrain alignment is visual-only and does not alter the Character capsule, AI controller, harvest/dock lifecycle, cargo or team-credit logic.


## v1.7.10 socket-name entry

For a generated skeletal turret, `Turret Muzzle Socket Name` is intentionally a free editable Name field. Enter the exact socket name authored on the skeletal mesh, such as `MuzzleFlash`. It is not restricted to a generated dropdown.


## v1.7.12 terrain-aligned turret stability

The defensive turret uses the proven world-space target solver for reliable tracking across authored Yaw/Pitch pivot layouts. The component also caches each pivot's authored relative rotation and restores the authored relative roll after aiming, preventing long-session sideways drift while `Ground Alignment` pitches/rolls the Harvester visual body.
