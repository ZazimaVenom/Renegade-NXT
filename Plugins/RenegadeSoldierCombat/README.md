# Renegade NXT Combat, Harvester and Building Warfare


## v1.8.0 Grenadier soldiers

Renegade NXT now has a first-class **Grenade Launcher** weapon class for AI Grenadier soldiers. Grenadiers use an authoritative gravity-driven projectile rather than hitscan or straight-line rocket logic, with predictive ballistic AI aim, swept/sub-stepped collision, radial damage against infantry / Harvesters / buildings, and a fully Blueprint-exposed presentation layer.

The supplied preset uses an 8-round magazine, 0.75-second shot interval, 3.2-second reload, 3000 cm/s launch speed, impact detonation, 300 cm splash radius, and a direct-hit bonus. `Timed Bounce` is also exposed for Renegade X-style alternate grenade behaviour. See `Docs/Grenadier_Soldiers.md` for the complete setup.

> v1.8.0 is deliberately an AI Grenadier update. Existing player rifle / pistol / rocket slots remain unchanged for backward compatibility.

## v1.7.12 turret targeting regression fix

Harvester turret tracking has been restored to the proven v1.7.10 **world-space target solver** so authored Yaw/Pitch pivot layouts reliably track and fire at hostile infantry again. The long-session sideways drift fix is retained separately by restoring only each pivot's authored **relative roll** after aiming, rather than replacing the target solver.

> v1.7.12 restores working Harvester target tracking and firing while keeping roll stabilization, generated skeletal muzzle-socket firing, and terrain-aligned chassis behavior.

**Current version: 1.8.0** — UE 5.8

A Blueprint-first runtime plugin for automatic GDI/Nod AI infantry combat, manual player combat, rocket-launcher and ballistic Grenadier infantry, autonomous defensive Harvesters, replicated team economy, damageable team buildings, and automated base defences.

## Main features

- First-class `Renegade Harvester Combat Component` for Character Blueprint Harvesters. Valid Spline AI routes own normal long-distance travel; the component temporarily claims only final approaches. If no actively usable spline route is available, direct navigation automatically takes over between Dock Point and Harvest Point.
- Infantry-priority Harvester machine-gun turret with visible generated static/skeletal turret assets that can attach beneath authored yaw/pitch pivots, muzzle Scene Component or generated-skeletal-mesh muzzle socket, hitscan damage, pooled travelling bullet mesh, Cascade/Niagara muzzle and impact FX, sound, spread, cadence, range, LOS, and rotation limits.
- Four-point Harvester visual ground alignment for vehicle-style pitch/roll over landscape bumps while keeping the Character capsule/root upright for NavMesh and Spline AI stability.
- Replicated Harvester health, target, cargo and lifecycle state with team-aware GDI/Nod EVA under-attack, critical-health and destroyed announcements.
- Placeable `Renegade Harvest Point` and `Renegade Refinery Dock Point` actors with automatic team/group lookup, reservation, final approach, exposed harvest/unload timing, and Harvester lifecycle Blueprint calls/events.
- Match-wide replicated `Renegade Team Credits Manager` with per-team balances and Blueprint get/add/spend/set/reset APIs; Harvester unloading converts cargo into its team credit pool.
- Refinery-owned Harvester factory on `Renegade Building Combat Component` with exposed Character Blueprint class, spawn component/tag, Harvest Point and Refinery Dock Point assignment/auto-find, legacy `HarvesterDock` component fallback, initial/respawn delays, operational-Refinery gating, and dedicated `On Harvester Respawned`.
- Replicated Harvester destruction explosion with Cascade and/or Niagara, independent static/skeletal wreck Actor, optional wreck smoke, collision and exposed timed wreck cleanup.
- Existing AI/player rifle and rocket paths resolve and damage hostile Harvesters, including hierarchy-aware direct hits and bounds-aware rocket splash.
- Reusable `Renegade Building Combat Component` for the Refinery, Barracks, Silo, Hand of Nod, Weapons Factory, Power Plant, Helipad, Repair Pad, Airstrip, Obelisk, Advanced Guard Tower, and custom structures.
- Server-authoritative building health, damage, destruction, repair, team ownership, target registration, and replicated Blueprint events.
- Infantry building-target policies: never, only when no soldier is available, closest valid target, or prefer buildings.
- Team-perspective GDI EVA/Nod EVA building announcements for friendly and enemy under-attack, low-health, and destroyed events, serialized through one prioritized non-overlapping audio channel.
- Replicated building low-health state with threshold, repair hysteresis, Blueprint event, and imminent-destruction warning.
- Advanced Guard Tower dual traced rockets with selectable launch Scene Components, pooled rocket meshes, damage, sounds, range, cadence, spread, impact effects, and debug lines.
- Dedicated infantry Rocket Launcher weapon class and Blueprint preset with predicted AI aim, minimum safe firing distance, one-round reload cadence, authoritative travel time, occluded radial splash damage, direct-hit bonus, and reliable multicast presentation.
- Dedicated **Grenade Launcher** weapon class and `Make Grenade Launcher Preset` with true ballistic arcs, iterative moving-target lead, low/high trajectory selection, authoritative swept/sub-stepped collision, 8-round Grenadier cadence, impact detonation, optional timed bouncing, occluded splash/direct damage, pooled projectile visuals, and Blueprint launch/bounce/explosion events.
- Obelisk charge-and-fire sequence with selectable start component, separate charge/shoot sounds, server damage trace, Fab Niagara or classic Cascade beam support, automatic fallback order, automatic trace endpoint alignment, exposed XYZ/length/thickness scaling, rotation correction, deterministic visual lifetime cleanup, and debug lines.
- Optional Power Plant dependency that disables and restores team defensive buildings.
- One reusable Actor Component works on multiple Character Blueprint classes.
- Exposed `Player Controlled Combat` mode disables automatic AI decisions while preserving teams, health, damage, visuals, ragdoll, and respawn.
- Blueprint input nodes for held automatic-rifle fire, single-shot pistol fire, reload, and weapon selection.
- Separate player rifle/pistol profiles, magazines, replicated active weapon, ammo values, and UI events.
- Polished player aiming with camera-facing Character yaw, smooth FOV zoom, aim-state events/alpha, and server-validated muzzle-obstruction tracing.
- Team-aware automatic target acquisition using a world combatant registry.
- Automatic rifle, pistol, rocket launcher, grenade launcher, or custom AI weapon profiles.
- Server-authoritative hitscan fire plus delayed travelling infantry rockets, point/radial damage, range falloff, critical bones, bursts, magazines, and reloads.
- Blueprint events for muzzle particles, impacts, sounds, animations, reloads, death, and respawn.
- Automatic pooled bullet-mesh visuals travelling from a selectable Scene Component (or muzzle fallback) to the authoritative trace end.
- Automatic ground blood decals/effect actors when a combat soldier is successfully hit.
- Combat movement that advances, retreats, strafes, and searches the last-known enemy location on NavMesh.
- Optional fixed combat-facing rotation keeps the soldier looking at its current enemy while moving in any direction.
- Clean pause/resume bridge for the Renegade NXT spline navigation plugin.
- Automatic ragdoll on death with hit-direction impulse.
- Same-actor respawning: the soldier is never destroyed by this plugin.
- Original, team spawn-point, custom transform, custom transform list, tagged actor, and runtime-override respawning.
- Replicated health, target, team, ammo, death state, ragdoll/respawn RPCs, and shot cosmetic RPCs.






## v1.7.9 Harvester skeletal turret muzzle sockets

When `Turret Skeletal Mesh` is assigned, use `Turret Muzzle Socket Name` under `Harvester > Turret > Generated Mesh` to select the actual barrel/muzzle socket from that skeletal asset. The Details panel dropdown is populated from the mesh's active socket list. A valid socket takes priority over the older `Turret Muzzle Component` / component-tag route, and `Turret Muzzle Relative Offset` becomes a socket-local fine-adjustment. Bullet traces and muzzle FX therefore stay attached to the animated barrel as the turret yaws/pitches. Leave the socket as `None` to keep the existing component/tag muzzle setup.

## v1.7.8 Harvester turret visibility and terrain alignment

When `Turret Yaw Component` / `Turret Pitch Component` are authored as Scene pivots, assigning `Turret Static Mesh` or `Turret Skeletal Mesh` now creates the visible turret asset beneath those pivots instead of suppressing it. Pitch is preferred as the generated visual parent so both yaw and pitch are inherited; `Attach Generated Turret Visual To Pitch` can be disabled for a yaw-only base. If no pivots exist, the generated mesh can still act as the controllable turret component.

`Harvester > Ground Alignment` adds suspension-style visual terrain following. Set `Ground Alignment Visual Component` to the main Harvester chassis mesh, or tag it `HarvesterBody`; Character Blueprints automatically fall back to `CharacterMesh0`. Four downward probes sample the front-left, front-right, rear-left and rear-right ground heights and smoothly drive visual pitch/roll. The Character capsule/root is never tilted, so navigation and Spline AI remain stable. Recommended starting values are Front/Rear Probe Distance `220–320 cm`, Half Track Width `110–170 cm`, Maximum Pitch `12–20°`, Maximum Roll `8–15°`, and Rotation Interp Speed `5–9`.

Use `Refresh Harvester Presentation` after changing runtime component references/assets, or `Set Runtime Ground Alignment Visual Component` when a dynamically chosen chassis mesh should receive the terrain tilt.

## Harvester warfare and team economy (v1.7.0)

Add `Renegade Harvester Combat Component` to each GDI/Nod Harvester Character Blueprint alongside the existing `RenegadeSplineFollowerComponent` and `RenegadeCharacterVehicleComponent` / Harvester-Heavy Utility setup. Spline AI remains responsible for normal road travel. When the Harvester comes within the configured Harvest Point or Refinery-dock approach radius, v1.7.2 acquires a cooperative Spline AI external movement claim and uses the Character AI controller only for the short final approach, then releases movement back to the spline follower. The defensive turret continues to aim independently throughout the cycle.

Place one or more `Renegade Harvest Point` actors in the Tiberium/resource fields and a `Renegade Refinery Dock Point` at each unloading bay. Configure team/group filtering plus approach and interaction radii. On each Refinery's `Renegade Building Combat Component`, enable `Refinery > Harvester Spawner`, assign the Harvester Character Blueprint, spawn point, optional Harvest Point and optional Refinery Dock Point. Both destination actors can be auto-found by team/group. The older `HarvesterDock` Scene Component remains supported as a legacy fallback.

Bind `On Harvester Spawned` for the initial outbound spline and `On Harvester Respawned` for replacement Harvesters when using Spline AI. If no usable spline route is assigned, v1.7.3 automatically drives the Harvester directly between the Dock Point and Harvest Point using AI `MoveTo`; valid spline routes always remain preferred. The Harvester exposes `On Return To Refinery Route Requested` after harvesting and `On Outbound Harvest Route Requested` after unloading so your existing Spline AI Blueprint can choose the appropriate route. Field arrival delay, harvest duration, dock approach distances, unload-start delay, unload duration and departure delays are exposed under `Harvester > Cycle`. Cargo gathering/unloading and team-credit conversion remain server authoritative.

On destruction the original Harvester is replaced by an independent replicated wreck Actor. Assign a destroyed static or skeletal mesh, Cascade/Niagara explosion, optional Cascade/Niagara smoke, and `Wreck Cleanup Seconds`. The Refinery can respawn the replacement before the previous wreck is cleaned up, giving the battlefield persistent damage history without allowing debris to accumulate forever.

See `Docs/Harvester_Warfare.md` for complete Blueprint setup, component tags, economy APIs, lifecycle hooks, Spline AI hand-off, replication notes and testing.


## Player rocket launcher (v1.6.1)

Player combat now includes a third `Rocket Launcher` slot alongside the Automatic Rifle and Pistol. Configure `Player Rocket Launcher Profile` or `Inline Player Rocket Launcher Settings`, then assign the component's `Rocket Launcher Muzzle Component` to a Scene Component at the player weapon barrel.

Enhanced Input can call `Player Fire Rocket Launcher` for a one-node select-and-fire action, or call `Select Player Rocket Launcher` and reuse the generic `Player Start Fire` / `Player Fire Once` nodes. The built-in controls select it with keyboard `3` or gamepad D-Pad Right. `Current Rocket Launcher Ammo` replicates independently and reports through `On Player Ammo Changed`.

The owning player's camera ray and optional lock-on shot assistance choose the intended aim point. The server validates the request, confirms the physical path from the launcher muzzle, consumes ammo, starts reload/cadence, and queues the delayed explosion. The launch remains a reliable multicast, while the dedicated low-frequency client rocket request is also reliable.

## Rocket launcher soldiers (v1.6.0)

Version 1.6.0 adds a dedicated `Rocket Launcher` weapon class for AI soldiers and optional player weapon profiles. Rockets are not disguised hitscan bullets: the server confirms the launch path, calculates travel time from the exposed projectile speed, and applies the explosion only when the rocket reaches the confirmed impact point. Connected clients receive a reliable launch multicast and simulate the same pooled rocket mesh, optional smoke/trail actor, muzzle effect, impact effect, and sounds.

Quick AI setup:

1. Duplicate a working rifle soldier Blueprint.
2. Add a Scene Component at the launcher barrel, name or tag it `RocketMuzzle`, and select it in `Renegade NXT > Rocket Launcher > Muzzle`.
3. Set the active Weapon Class to `Rocket Launcher`, or create a Weapon Profile from `Make Rocket Launcher Preset`.
4. Assign the rocket mesh, optional material, mesh scale/rotation, launch and impact effects, and sounds under the weapon's `Rocket Launcher` settings.
5. Tune `Damage Per Shot`, `Explosion Inner Radius`, `Explosion Outer Radius`, `Minimum Explosion Damage Multiplier`, `Direct Hit Damage Multiplier`, `Projectile Speed`, and `Minimum AI Firing Distance`.

Rocket AI predicts a moving target's position, refuses to fire inside its configured safe distance, and uses the existing combat-movement system to retreat before firing. Explosion damage respects GDI/Nod hostility, friendly-fire settings, optional self damage, wall occlusion, registered soldiers, and damageable buildings. A directly struck soldier or building receives the direct-hit multiplier even when its Actor origin is outside the splash radius.

Blueprints can call `Set Rocket Launcher Muzzle Component`, query the resolved muzzle/location, preview the travelling rocket without damage, and bind `On Rocket Launched` or `On Rocket Impacted` for additional presentation.

See `Docs/Rocket_Launcher_Soldiers.md` for the full setup and validation checklist.

## Building warfare (v1.4.4)

Add `Renegade Building Combat Component` to each building Blueprint, set its GDI/Nod team, choose the matching building type, assign health and a target Scene Component, then assign the GDI/Nod friendly and enemy EVA variants for under attack, low health, and destroyed events. Legacy generic sounds remain available as fallbacks. Player and AI point damage now resolve attached building meshes back to the owning building component.

AGT and Obelisk types automatically select their matching defence when `Defense Type` remains None. Both use server-authoritative traces against registered hostile player/AI combatants while rocket meshes, Niagara/Cascade lasers, and sounds are multicast as cosmetic presentation. A prioritized world registry EVA channel prevents announcement overlap: low-health warnings can supersede ordinary under-attack lines, and destroyed announcements have highest priority. Each client chooses its local GDI or Nod friendly/enemy voice independently.

Set `Laser Visual Lifetime Seconds` on the Obelisk settings to control how long Niagara, Cascade, and optional Blueprint laser visuals remain visible. Looping Cascade beams are forcibly deactivated and destroyed after this duration, and a new shot clears any previous beam first.

See `Docs/Building_Warfare.md` for complete building, AGT, Obelisk, Niagara/Cascade, power, collision, event, and debugging setup.

## Player combat (v1.3.2)

> **v1.3.4 editor fix:** Player Input, gamepad sensitivity, aiming, and camera values remain editable even while `Player Controlled Combat` is unticked. The Boolean controls runtime activation only.

Enable `Player Controlled Combat` on the player Character's combat component. Keep `Register As Combat Target` enabled so enemy AI can attack the player.

Recommended Enhanced Input connections:

- Rifle Started -> `Player Start Automatic Rifle Fire`
- Rifle Completed/Canceled -> `Player Stop Automatic Rifle Fire`
- Pistol Started -> `Player Fire Pistol`
- Reload Started -> `Player Reload`

The client submits its current view ray, but the server validates aim, fire cadence, ammo, and weapon state before tracing and applying damage. A second trace from the selected muzzle Scene Component to the camera aim point prevents shooting through nearby cover. Bullet mesh and ground blood effects use the same established visual pipeline.

See `Docs/Player_Combat.md` for the full setup, weapon-switch events, HUD values, multiplayer behaviour, and custom respawn modes.

### TPS lock-on targeting (v1.5.1)

Enable `Player Lock-On > Enable Lock On` and assign `Lock On Indicator Texture`. By default, hold `Left Alt` on keyboard or `Gamepad Left Shoulder / LB` to lock the best living hostile soldier near screen centre. Lock-on automatically enters the full aim zoom/body-facing presentation while held. Normal free aim remains separate on Right Mouse Button and Gamepad Left Trigger. Targets can be switched with Q/E, D-pad Left/Right, or an optional right-stick flick.

See `Docs/Player_Lock_On.md` for acquisition, obstruction, camera, shot-assist, indicator, Enhanced Input, and Blueprint-event setup.

## Bullet mesh and ground blood (v1.2.1)

Open the soldier Blueprint, select **Renegade Soldier Combat Component**, and expand **Renegade NXT | Combat Visuals**.

### Bullet visual

- Enable `Enable Bullet Mesh Visual`.
- Assign your bullet static mesh to `Bullet Mesh`.
- The plugin assumes the mesh points along local **+X**. Use `Bullet Mesh Rotation Offset` when your asset points along Y or Z.
- `Bullet Visual Speed` controls only the visible travel. Damage remains immediate, server-authoritative hitscan.
- Bullet components are pooled per soldier, have collision disabled, do not affect navigation, and cast no shadow by default.
- `Bullet Visual Pool Size` defaults to 6, which is suitable for automatic rifles without constantly creating and destroying components.

### Ground blood

- Enable `Enable Ground Blood Splatter`.
- Add one or more Deferred Decal materials to `Ground Blood Decal Materials`. A material is chosen randomly for each splatter.
- Alternatively, assign `Ground Blood Effect Actor Class` to a non-replicated Blueprint actor containing your blood decal, Niagara system, or other local effect. If both are assigned, both are spawned.
- The plugin traces downward from the bullet impact, ignores the damaged soldier, aligns the effect to the ground normal, and randomises rotation and size.
- Blood is only requested for a successfully damaged actor that has this combat component, so shots into rocks and buildings do not produce blood.
- `Delay Ground Blood Until Bullet Arrives` keeps the blood timing synchronised with the moving bullet mesh.
- Ground blood has configurable chance, trace distance, size, lifespan, fade, and per-soldier throttling.

For a 40-soldier battle, start with `Bullet Visual Pool Size = 4-6`, bullet shadows disabled, `Ground Blood Life Seconds = 12-20`, and `Minimum Seconds Between Ground Blood = 0.15-0.25` if decal counts become excessive.

## Anti-Stretch Ragdoll (v1.1.2)

For modular soldiers, tag the main body/leader Skeletal Mesh with `CombatRagdollMesh`. The plugin now resolves Leader Pose follower parts back to the leader automatically. Keep **Resolve Leader Pose Mesh For Ragdoll**, **Use Ragdoll Root Bone**, and **Disable Secondary Animation During Ragdoll** enabled. The Renegade NXT soldier assets currently use `spine` as the working ragdoll root. Keep that value for these soldiers; other skeletons can use their first central physics body.

If the body still stretches inside the Physics Asset Editor's Simulate mode, the Physics Asset itself has mismatched bodies/constraints or was generated for a different skeleton; runtime code cannot repair that asset.

## v1.7.6 Harvester cycle stability and Blueprint movement controls

The Harvester cycle now distinguishes an **actively usable Spline Follower route** from an assigned path that has already completed. Completed/idle routes no longer suppress direct navigation fallback. Runtime Harvester spawning from a Refinery can also ensure the Character receives its configured default AI Controller.

New authority Blueprint nodes on `RenegadeHarvesterCombatComponent`:

```text
Go To Harvest Point
Go To Refinery Dock Point
```

Use these from route-complete, spawn/respawn, or custom gameplay logic whenever an explicit destination hand-off is preferred. They work with the existing placeable Harvest Point / Refinery Dock Point actors and cooperate with the `HarvesterCycle` Spline AI movement claim.

Autonomous infantry now prefers hostile soldiers over Harvesters by default, preventing a Harvester parked at a Refinery from pulling an entire infantry fight into the unloading bay.


## Installation

1. Copy the `RenegadeSoldierCombat` folder into your project's `Plugins` folder.
2. Right-click the `.uproject` and regenerate Visual Studio project files.
3. Build the project for Unreal Engine 5.8.
4. Open the editor and enable **Renegade NXT Soldier Combat** if it is not already enabled.

See `Docs/Blueprint_Setup.md` for the required soldier Blueprint setup.

## Version 1.1.0 — Combat target rotation lock

A new Blueprint-exposed `Lock Combat Rotation To Current Target` boolean is enabled by default. While a valid enemy is targeted, the plugin temporarily disables orientation-to-movement, uses combat controller yaw, and continuously rotates the body toward that enemy. Advancing, retreating, strafing, firing, ragdoll death, respawn, and spline resume continue to work normally. The soldier's original Character and Character Movement rotation settings are restored when combat ends.

## Ragdoll setup and v1.1.1 diagnostics

Enabling `Automatic Ragdoll` allows the plugin to start ragdoll, but the selected Skeletal Mesh must also have a Physics Asset containing physics bodies. Version 1.1.2 automatically searches modular soldier actors for a usable skeletal mesh. For an exact selection, add a Component Tag such as `CombatRagdollMesh` to the intended Skeletal Mesh Component and enter the same value in `Ragdoll Mesh Component Tag`.

Use the Blueprint node `Validate Ragdoll Setup` at Begin Play while testing. It returns `true` when ready, or a precise failure string that can be connected to Print String. Ragdoll setup failures are also written to the Output Log under `LogRenegadeSoldierCombat`.

## UE5.8 Compile Fix (v1.1.3)

Version 1.1.3 replaces direct access to private skeletal-mesh animation flags with the supported public getter APIs. This fixes `C2248` errors for `bDisableAnimDynamicsAnimNode` and `bDisableRigidBodyAnimNode` on UE5.8.1. No Blueprint changes are required.


## Selectable bullet spawn component (v1.2.1)

1. In the soldier Blueprint, add a **Scene Component** and name it `BulletSpawn`.
2. Attach it to the weapon mesh or hand/weapon socket and position it at the barrel muzzle.
3. Select the **Renegade Soldier Combat Component**.
4. Open **Renegade NXT > Combat Visuals > Bullet Spawn**.
5. Set **Bullet Visual Spawn Component** to `BulletSpawn`.
6. Use **Bullet Visual Spawn Relative Offset** for final local-space alignment.

At runtime, Blueprints can instead call **Set Bullet Visual Spawn Component** and pass any Scene Component owned by that same soldier. The selected component remains the visible bullet origin. In player mode it is also used as the server-authoritative muzzle-obstruction trace origin so close cover blocks the shot correctly.


### Built-in player controls and polished aiming (v1.3.2)
Player characters can fire, aim, reload, select rifle/pistol and control camera look through exposed keyboard/mouse and gamepad FKey settings without creating Input Action assets. Aim now performs actual presentation work: the Character faces the camera/controller yaw, orient-to-movement is temporarily disabled, the selected Camera Component smoothly zooms to `Aimed Field Of View`, and all original movement/FOV values are restored on release, death, respawn, or shutdown.

Assign `Player Aim Camera Component` to the exact player camera when the Character owns several cameras. If unassigned, the plugin prefers an active Camera Component and can fall back to PlayerCameraManager. Disable the built-in input path when using an existing Enhanced Input graph; the public `Player Start Aiming`, `Player Stop Aiming`, and `Player Set Aiming` nodes use the same polished presentation path.


## Lock-On Indicator Texture

Assign the visual PNG/Texture2D under `Targeting > Player Lock-On Visual > Lock-On Indicator PNG / Texture`.

## Lock-on indicator colour (v1.5.4)

The main component Details panel now exposes both:

- `Targeting > Player Lock-On Visual > Lock-On Indicator PNG / Texture`
- `Targeting > Player Lock-On Visual > Lock-On Indicator Color`

The colour is an RGBA tint. RGB recolours the visible pixels and Alpha controls additional opacity. The imported PNG's own alpha channel is multiplied rather than discarded, so transparent areas stay transparent. Runtime Blueprint control is available through `Set Player Lock On Indicator Color`.


## Player lock-on aim-point control (v1.5.6)

While locked, mouse or right-stick look input can shift the shared lock point vertically and horizontally around the selected soldier. The feature inherits the exposed camera sensitivity, dead-zone and inversion settings and adds dedicated limits, smoothing and optional automatic recentring. Enhanced Input projects can feed their look axis through `Player Add Lock On Aim Input`.

## Harvester arrival lifecycle (v1.7.6)

For explicit Blueprint route-complete logic, call `Arrived At Harvest Point` after the vehicle reaches its field destination and `Arrived At Refinery Dock Point` after it reaches the unloading position. The placeable actors' `Notify Harvester Arrived` / `Notify Harvester Docked` calls now forward into the same lifecycle automatically. Arrival checks account for the Character capsule radius so a large Harvester does not need to place its actor origin inside the interaction sphere.

Refinery BeginPlay spawning is guarded against re-entrant deferred spawns. `Adopt Existing Harvester On Begin Play` can also reuse a matching live Harvester already near the Refinery instead of creating a second one.



## v1.7.6 Harvester arrival/spawn hardening

Refinery Harvester spawning now enforces one operational Harvester per non-neutral team by default and also prevents more than one Harvester-spawning Building Combat Component on the same Refinery Actor from creating duplicate BeginPlay Harvesters. Explicit `Arrived At Harvest Point` and `Arrived At Refinery Dock Point` Blueprint calls are authoritative lifecycle commands: destination reservations remain useful for automatic coordination but can no longer make an explicit arrival call silently do nothing.

## v1.7.10 generated turret muzzle socket entry

`Turret Muzzle Socket Name` is a normal editable Name field. Type the exact socket name from the generated skeletal turret mesh (for example `MuzzleFlash`). The optional `Get Generated Turret Socket Names` Blueprint function can still be used to inspect available socket names, but it no longer forces the Details field into a dropdown.
