# Spline Navigation Integration

The combat component deliberately does not depend on the spline plugin's C++ module. This keeps both plugins reusable and prevents circular dependencies.

Use either of these two Blueprint-friendly methods.

## Recommended: movement bridge interface

In the soldier Character Blueprint:

1. Open **Class Settings**.
2. Add the `Renegade Combat Movement Bridge` interface.
3. Implement `Combat Movement Interrupted`:
   - Pause or interrupt the spline-follow command.
   - Do not clear the soldier's remembered spline route/progress.
4. Implement `Combat Movement Resumed`:
   - Tell the spline component to resume from `Resume From World Location`.
   - Recalculate the nearest valid point/distance along the assigned spline.
5. `Can Combat Take Movement Control` should return `true` while the spline system permits combat interruption.

## Alternative: event dispatchers

Bind:

- `On Spline Movement Pause Requested`
- `On Spline Movement Resume Requested`

The pause event fires when an enemy is acquired. The resume event supplies the soldier's current world location after combat or respawn.

## Runtime behaviour

While fighting, the component uses the possessed `AIController` and NavMesh to:

- advance when outside preferred range,
- retreat when too close,
- strafe left/right while firing,
- move toward the last-known enemy position after losing line of sight.

When combat ends, it releases movement control so the spline plugin can continue from the soldier's current location rather than teleporting or restarting the full path.

## v1.7.0 Character Harvester combat bridge

`RenegadeHarvesterCombatComponent` does not issue movement commands. Keep the existing `RenegadeSplineFollowerComponent` + `RenegadeCharacterVehicleComponent` Harvester/Heavy Utility setup responsible for the chassis. The turret rotates/fires independently. Bind a Refinery's `On Harvester Spawned` event to route-start logic when the Harvester BP does not auto-start its route, and call the Harvester lifecycle functions from the existing field/refinery state logic.


## v1.7.2 Harvester automatic field/dock hand-off

Normal Harvester road travel is still owned by `RenegadeSplineFollowerComponent` + `RenegadeCharacterVehicleComponent`.

Version 1.7.2 adds short final-approach movement only:

1. Harvester follows the outbound spline normally.
2. When it enters its assigned `RenegadeHarvestPoint` Approach Radius, `RenegadeHarvesterCombatComponent` calls the Spline follower's external movement-claim API at runtime using claim name `HarvesterCycle`.
3. The Harvester AI controller performs a normal NavMesh `MoveTo` to the exact Harvest Point interaction location.
4. After the exposed arrival delay/harvest duration, `On Return To Refinery Route Requested` fires and the claim is released so your Blueprint can select/start the return spline.
5. Near the Refinery, the same claim is acquired for the short final approach to the `HarvesterDock` Scene Component.
6. After unloading/departure, `On Outbound Harvest Route Requested` fires and the claim is released for the next outbound route.

The integration is runtime/reflection based, so `RenegadeSoldierCombat` does not add a compile-time dependency on the Spline AI module.

For Refinery-created replacement Harvesters, bind the Refinery component's new `On Harvester Respawned(Harvester)` event to the same outbound route start/reacquisition logic used for the initial spawn.
