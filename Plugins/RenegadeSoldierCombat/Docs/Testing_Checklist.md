## Rocket building damage regression (v1.6.2)

- Place a large building such as a Helipad with a configured `Renegade Building Combat Component`.
- Confirm the building has an opposing team from the rocket soldier/player.
- Fire at the centre, roof edge, outer platform edge, and attached/Child Actor geometry.
- Confirm every physical direct hit reduces building health.
- Confirm the correct team's EVA under-attack announcement is requested when damage is accepted.
- Fire a rocket into nearby ground/cover inside and outside the configured outer splash radius and confirm bounds-aware falloff behaves correctly.
- With explosion occlusion enabled, confirm solid intervening cover can still block non-direct splash damage.
- Enable `Draw Debug Rocket` and verify the log reports the resolved building, bounds distance, applied damage, and direct-hit state.


## Player rocket launcher (v1.6.1)

- Configure the player Rocket Launcher profile or inline settings and assign the launcher muzzle Scene Component.
- Call `Player Fire Rocket Launcher` and confirm it selects the launcher, consumes one rocket, launches from the muzzle, and begins reload.
- Select the launcher separately and confirm generic `Player Start Fire` / `Player Fire Once` also launch exactly one rocket per press.
- Confirm the camera/crosshair chooses the aim point while the physical rocket starts at the muzzle and cannot pass through nearby cover.
- Confirm lock-on shot assistance can aim the player rocket at the locked target.
- Confirm `Current Rocket Launcher Ammo`, `Current Magazine Ammo`, weapon-change events, ammo-change events, and reload events update correctly.
- Test a remote LAN client and confirm the reliable request produces one server-authoritative rocket, one multicast visual per machine, delayed impact, and synchronized damage.

# Testing Checklist

## Grenadier soldiers — v1.8.0

- [ ] Set the NPC active `Weapon Class` to `Grenade Launcher` or assign a Weapon Profile created from `Make Grenade Launcher Preset`.
- [ ] Assign the exact launcher-barrel Scene Component in `Grenade Launcher Muzzle Component`, or tag it `GrenadeMuzzle`; confirm `Get Grenade Launcher Muzzle Location` returns the barrel position.
- [ ] On flat ground with `Impact` mode, verify every shot follows a visible gravity arc and detonates on the first blocking hit.
- [ ] Move a hostile target laterally and verify predictive ballistic lead adjusts the impact point rather than firing only at the target's old position.
- [ ] Move the target inside `Minimum AI Firing Distance`; verify the Grenadier refuses unsafe firing and the normal combat spacing/retreat logic can create distance.
- [ ] Empty the default 8-round magazine and verify the configured 3.2-second reload occurs before firing resumes.
- [ ] Verify splash damages hostile soldiers, Harvesters and buildings but not friendlies while `Allow Friendly Fire` is disabled.
- [ ] Directly strike a hostile and verify the direct-hit multiplier is applied in addition to the preset's radial base value.
- [ ] Put solid cover between the explosion and a secondary hostile; with `Use Explosion Occlusion` enabled, verify the covered target is protected.
- [ ] Fire at thin collision and Character capsules during low/high frame rates; verify the swept, sub-stepped projectile does not visibly tunnel through valid blocking targets.
- [ ] Switch `Detonation Mode` to `Timed Bounce`; verify the grenade rebounds, receives authoritative bounce corrections, settles instead of micro-bouncing, and explodes when the fuse expires.
- [ ] Assign grenade mesh/material/spin plus muzzle/flight/impact/bounce FX and audio; verify cosmetic projectile Actors do not affect collision/damage.
- [ ] Bind `On Grenade Launched`, `On Grenade Bounced`, and `On Grenade Exploded`; verify the same Grenade Id follows one round through its lifecycle.
- [ ] In listen-server/LAN testing, verify the server decides trajectory/collision/damage and the client sees matching launch, bounce and explosion presentation.
- [ ] Regression: rifle, pistol, Rocket Officer, player combat, building targeting, Harvester targeting, ragdoll/respawn, route pause/resume and the v1.7.13 Harvester roll-direction fix behave unchanged.


## Rocket launcher soldiers — v1.6.0

- [ ] Set the active Weapon Class to `Rocket Launcher` or assign a rocket Weapon Profile.
- [ ] Assign an exact launcher muzzle Scene Component or tag one `RocketMuzzle`; verify `Get Rocket Launcher Muzzle Location`.
- [ ] Use `Preview Rocket Launcher Visual` and confirm the mesh's +X/rotation offset faces the travel direction.
- [ ] Fire at a wall beside the muzzle and confirm the authoritative muzzle trace prevents shooting through it.
- [ ] Confirm damage is delayed until the visible rocket reaches the endpoint.
- [ ] Confirm direct-hit damage, inner-radius full damage, outer-radius falloff, and no damage beyond the outer radius.
- [ ] Place a target behind solid cover and verify explosion occlusion blocks non-direct splash damage.
- [ ] With friendly fire disabled, confirm allied soldiers and buildings receive no splash damage.
- [ ] Verify the AI refuses to fire and retreats inside `Minimum AI Firing Distance`.
- [ ] Test target prediction against a moving soldier.
- [ ] Fire at attached building geometry and confirm the owning building component takes damage.
- [ ] Kill the firing soldier while a long-distance rocket is travelling and confirm the pending server impact still resolves.
- [ ] In listen-server and LAN testing, confirm every machine sees one launch, travelling rocket, impact effect/sound, and synchronised health change.

## Player TPS lock-on (v1.5.1)

- Hold `Left Alt` or `Gamepad Left Shoulder / LB` with one hostile soldier near screen centre: target event fires, indicator appears, camera tracks, and Character enters the full aim presentation.
- Release the dedicated lock button: target and indicator clear immediately. Aim remains active only when Right Mouse Button or Left Trigger is still held.
- Hold normal aim and lock-on together, then release either one: the remaining held input must keep aiming active without FOV or aim-event flicker.
- Put a friendly soldier closer than an enemy: only the hostile soldier can be selected.
- Kill the locked target while holding the dedicated lock button: the lock clears and reacquires another valid hostile soldier.
- Move the target behind cover briefly: lock survives the configured grace time; sustained obstruction clears it.
- Switch left/right with Q/E, D-pad, and right-stick flick.
- Fire while locked: the existing authoritative muzzle trace still respects walls and damages the locked enemy when unobstructed.
- Test with no indicator texture: lock logic works without creating a visual.
- Test death, respawn, cursor/menu input blocking, and component EndPlay: no stale target or indicator remains.


1. Add a NavMesh Bounds Volume over the combat area and verify green navigation coverage.
2. Place one GDI and one Nod AI Character, each with the combat component.
3. Confirm both Characters are possessed by an AIController.
4. Confirm the mesh has a Physics Asset and the `Ragdoll` collision profile exists.
5. Verify the weapon muzzle socket name. Change `Muzzle Socket Name` if your skeleton uses another socket.
6. Verify the aim bone. Change `Aim Bone Name` if the skeleton does not contain `spine_03`.
7. Bind `On Shot Fired` to visible particles or debug drawing.
8. Test close range: soldiers should retreat or strafe rather than remain stationary.
9. Test long range: soldiers should advance until they can fire.
10. Test cover: line traces should hit the cover before the target and prevent damage.
11. Test death: mesh ragdolls with an impulse and the actor remains in the World Outliner.
12. Test respawn: the same actor restores health, capsule, mesh attachment, animation, and AI movement.
13. Test spline integration: combat pauses spline travel and resumes from the current post-combat position.
14. Test a dedicated server or two-player PIE session for replicated effects and health.

## Combat-facing rotation lock (v1.1.0)

- With `Lock Combat Rotation To Current Target` enabled, verify advancing soldiers keep their body yaw toward the enemy.
- Verify retreat movement runs away from the enemy while body yaw remains toward the enemy.
- Verify left/right strafing does not rotate the body toward the movement destination.
- Disable the boolean at runtime with `Set Combat Rotation Lock Enabled`; verify normal movement-facing rotation returns.
- Clear the target or leave combat; verify the Character Blueprint's original rotation settings are restored.
- Kill the soldier while rotation lock is active; verify focus clears, ragdoll starts, and respawn restores normal combat acquisition.
- In multiplayer PIE, verify the server-authoritative body rotation is replicated to clients.


## Bullet mesh and blood visuals (v1.2.0)

- [ ] Assign a bullet static mesh and verify it begins at the configured muzzle socket.
- [ ] Verify the mesh reaches the exact trace end without collision or extra damage.
- [ ] Confirm the rotation offset matches the mesh's authored forward axis.
- [ ] Fire automatic bursts and confirm the per-soldier pool reuses components without visible leftovers.
- [ ] Assign at least one Deferred Decal blood material and verify blood appears only after combat-character hits.
- [ ] Confirm rocks, walls, and missed shots do not create blood.
- [ ] Confirm the ground trace ignores the damaged soldier and places blood on the floor beneath the impact.
- [ ] Verify decal lifespan and fade remove old blood from long-running loop battles.
- [ ] Test `Delay Ground Blood Until Bullet Arrives` both enabled and disabled.
- [ ] Test `Preview Bullet Mesh Visual` and `Preview Ground Blood At Location` in Blueprint.
- [ ] In multiplayer PIE, confirm each client sees one local bullet/blood effect and no blood effect actor replicates twice.

## Bullet spawn component

- [ ] Add a Scene Component at the muzzle and assign it as **Bullet Visual Spawn Component**.
- [ ] Call **Preview Bullet Mesh From Configured Spawn** and confirm the mesh starts at that component.
- [ ] Move the component and confirm the next shot starts from the new world location.
- [ ] Clear the selection and confirm the original muzzle socket/trace-start fallback still works.
- [ ] In multiplayer PIE, confirm each client resolves the Blueprint component and sees the same visual origin.


## Player combat (v1.3.0)

- [ ] Enable `Player Controlled Combat` on the player Character and confirm it does not automatically target, rotate toward, or move toward enemies.
- [ ] Keep `Register As Combat Target` enabled and verify hostile AI acquires and damages the player.
- [ ] Hold automatic-rifle input and verify shots follow configured RPM, stop on release, consume rifle ammo, and reload at zero.
- [ ] Hold the rifle through reload and verify fire resumes only while the input remains held.
- [ ] Press pistol input and verify exactly one pistol shot occurs per press with independent pistol ammunition.
- [ ] Switch rifle/pistol and verify `Active Player Weapon`, `Current Magazine Ammo`, and weapon/ammo events update the HUD.
- [ ] Aim beside close cover in third person and verify the muzzle obstruction trace hits the cover instead of shooting through it.
- [ ] Confirm player shots use the selected bullet-spawn Scene Component, moving bullet mesh, impact result, and ground blood.
- [ ] Kill the player and verify same-actor ragdoll/respawn restores movement, controller rotation, health, and configured ammo.
- [ ] Test Original, Team Spawn Point, Custom Transform, Custom Transform List, Tagged Actor, and Runtime Override respawning.
- [ ] In two-player PIE, verify only the owning client sends input, the server limits cadence/ammo, and all clients see one shot/blood visual.

## v1.3.2 built-in player input and aim presentation

- Enable `Player Controlled Combat` and `Enable Built-In Input` on the locally possessed Character.
- Left Mouse Button and Gamepad Right Trigger fire the currently selected weapon.
- Right Mouse Button and Gamepad Left Trigger update `Is Player Aiming`, `On Player Aim Changed`, body-facing rotation, and camera zoom.
- Mouse X/Y and the gamepad right stick rotate the controller view without drift outside the configured dead zone.
- R and Gamepad Face Button Left reload.
- 1 / D-Pad Up selects the automatic rifle; 2 / D-Pad Down selects the pistol.
- Holding fire repeats only for the automatic rifle and respects RPM, ammunition and reload.
- Opening a cursor-driven menu stops fire and aim when `Ignore Input While Mouse Cursor Visible` is enabled.
- Disable built-in input before testing an existing Enhanced Input graph to avoid duplicate look/fire calls.


## v1.3.2 aim presentation regression checks

- [ ] Select the exact player Camera Component in `Player Aim Camera Component`, or confirm active-camera auto-find resolves the correct one.
- [ ] Press aim and verify the Character immediately turns to camera yaw and remains aligned while moving sideways/backward.
- [ ] Verify the camera interpolates to `Aimed Field Of View` and restores the exact original FOV on release.
- [ ] Call `Player Start Aiming` and `Player Stop Aiming` manually from Blueprint and verify they produce the same rotation/zoom as built-in input.
- [ ] Kill the player while aimed and verify yaw settings and FOV restore before/through ragdoll and respawn.
- [ ] Test a pawn without a Camera Component and verify PlayerCameraManager fallback zooms and unlocks cleanly.

## Building warfare — v1.4.0

- [ ] Every building Blueprint has `Renegade Building Combat Component` and the correct GDI/Nod Team Id.
- [ ] The visible building collision blocks the infantry weapon trace channel, normally Visibility.
- [ ] The selected Target Point Scene Component is inside the visible structure and not behind unrelated collision.
- [ ] AI soldiers with `Buildings When No Soldier Target` fight soldiers first, then acquire a hostile building.
- [ ] Player and AI bullets reduce the building's replicated Current Health.
- [ ] Attached child meshes resolve damage to the owning building actor.
- [ ] Destroyed buildings stop being valid infantry targets.
- [ ] `On Building Destroyed` fires once and Blueprint destruction presentation runs.
- [ ] Repair/Restore returns the building to a targetable operational state.
- [ ] Multiple buildings damaged simultaneously play only one under-attack sound.
- [ ] AGT resolves both rocket muzzle Scene Components and launches two visual meshes.
- [ ] AGT traces can damage and kill both AI soldiers and the player.
- [ ] AGT rocket meshes have no collision and reach the confirmed trace endpoints.
- [ ] Obelisk charge sound plays before the configured Charge Seconds delay.
- [ ] Obelisk shoot sound and Niagara laser appear after charging.
- [ ] Niagara start/end parameter names exactly match the Fab laser system's user parameters.
- [ ] Obelisk trace damages and can kill both AI soldiers and the player.
- [ ] Defence debug traces show expected hit/block/miss colours.
- [ ] When power dependency is enabled, destroying the team's Power Plant disables AGT/Obelisk attacks.
- [ ] Restoring the Power Plant automatically returns team defences to service.

## v1.4.4 team EVA and low-health validation

- Possess a GDI player and damage one GDI building: verify the GDI-friendly under-attack sound.
- As the same GDI player, damage one Nod building: verify the GDI-enemy under-attack sound.
- Repeat as Nod and verify the Nod-friendly and Nod-enemy variants.
- Cross the low-health threshold without destroying the building: verify `On Building Low Health Changed`, replicated `Is Low Health`, and the imminent-destruction announcement.
- Repair above threshold plus hysteresis: verify the low-health state clears and the event fires with `false`.
- Destroy friendly and enemy buildings for both player teams and verify the correct destroyed voice variant.
- Damage several buildings simultaneously and confirm only one ordinary under-attack line plays; confirm low-health and destroyed messages can supersede lower-priority lines.

## v1.7.0 Harvester warfare

- [ ] GDI Refinery spawns the configured GDI Harvester Character from the selected `HarvesterSpawn`.
- [ ] Nod Refinery spawns the configured Nod Harvester Character.
- [ ] Harvester Spline AI route movement remains active and is not overridden by turret combat.
- [ ] Harvester turret acquires hostile player/NPC infantry, rotates yaw/pitch, waits for alignment, and fires.
- [ ] Turret bullet mesh, Cascade/Niagara muzzle/impact FX and sound match the authoritative trace.
- [ ] AI/player rifles and rockets damage Harvesters, including side/child geometry.
- [ ] Harvester under-attack, critical and destroyed EVA sounds select the correct local GDI/Nod friendly/enemy variants.
- [ ] Start/End Harvesting and docking/unloading lifecycle calls replicate and fire their Blueprint events.
- [ ] Cargo increases only while configured harvesting is active and unloads at the configured rate.
- [ ] Unloading adds credits to the correct team in the replicated Team Credits Manager.
- [ ] Harvester destruction spawns the configured Cascade/Niagara explosion and static/skeletal wreck.
- [ ] Wreck smoke remains while the replacement Harvester can respawn.
- [ ] Wreck and attached smoke clean up after `Wreck Cleanup Seconds`.
- [ ] Refinery destruction blocks pending replacement Harvester spawning when operational gating is enabled.
- [ ] Refinery restore schedules a replacement when no active Harvester exists.
- [ ] Listen-server/LAN client observes the same active Harvester, health, target, cargo, lifecycle, team credits and wreck cleanup.


## v1.7.2 automatic Harvester cycle

- [ ] Place at least one compatible `Renegade Harvest Point` in the field.
- [ ] Confirm Refinery assigns the explicit point or auto-finds the correct Team/Group point.
- [ ] Confirm outbound Spline AI remains in control before the Harvest Point Approach Radius.
- [ ] Confirm entering Approach Radius triggers final NavMesh approach without the Spline follower fighting the MoveTo.
- [ ] Confirm Harvest Arrival Delay and Harvest Duration are respected.
- [ ] Confirm cargo-full can end harvesting early when enabled.
- [ ] Confirm `On Return To Refinery Route Requested` fires and the return spline can start/reacquire.
- [ ] Confirm the Harvester acquires final movement near `HarvesterDock`, reaches the dock, waits Unload Start Delay and unloads.
- [ ] Confirm Unload Duration / finish-on-empty and Post Unload Departure Delay behave as configured.
- [ ] Confirm a destroyed Refinery does not accept cargo/credits while offline.
- [ ] Confirm `On Harvester Respawned` fires for a replacement and can restart the outbound spline.
- [ ] Confirm the replacement retains Team Id, owning Refinery and assigned Harvest Point.
- [ ] Repeat on listen server + LAN client and verify replicated lifecycle, cargo and credits.

## Harvester Dock Point / no-spline fallback — v1.7.3

- Place one `Renegade Refinery Dock Point` per Refinery and verify the Refinery resolves only a compatible team/group point.
- With a valid RenegadeSplineFollower Assigned Path, verify the Harvester stays on spline travel until Harvest/Dock approach radii are reached.
- Clear all usable spline path references and verify `Enable Direct Navigation Fallback` drives the full Dock → Harvest Point → Dock cycle by AI MoveTo after the configured fallback delay.
- Verify Harvest Point and Dock Point reservations release on departure, Harvester destruction, and replacement respawn.
- Verify direct fallback still performs arrival delay, harvesting duration/cargo fill, return, unload delay/duration, team-credit deposit, post-unload delay, and repeats.
- Verify GDI and Nod Harvesters cannot auto-select the opposing team's Dock Point when team/group filters are configured.

## v1.7.4 Harvester movement regression

- Spawn a Harvester from a Refinery with `Ensure Spawned Harvester Has AI Controller` enabled and verify it receives the BP-configured AI Controller.
- With no spline assigned, verify the Harvester drives from the Refinery to the Harvest Point, harvests for the configured duration, drives to the Dock Point, unloads, and repeats.
- With an outbound open spline only, verify reaching `Completed` no longer blocks the direct return-to-dock fallback after harvesting.
- With outbound and return spline logic, verify `On Return To Refinery Route Requested` can start the return route while the Harvester claim is held, and normal spline movement resumes after release.
- Call `Go To Harvest Point` manually and verify lifecycle becomes Approaching Harvest Point and the destination is reached.
- Call `Go To Refinery Dock Point` manually and verify lifecycle becomes Docking To Refinery and unloading proceeds.
- Keep hostile infantry and a hostile Harvester in range together and verify infantry prefers the hostile soldier target by default rather than mass-pathing toward the Harvester/refinery bay.

## Harvester v1.7.6 arrival/spawn regression

- With one Refinery and auto-spawn enabled, verify exactly one Harvester exists after BeginPlay.
- Place one compatible Harvester near the Refinery with `Adopt Existing Harvester On Begin Play` enabled and verify the Refinery adopts it rather than spawning another.
- Call `Notify Harvester Arrived` on the Harvest Point and verify the Harvester enters Waiting To Harvest then Harvesting without manually calling Start Harvesting.
- Call `Arrived At Harvest Point` directly on Harvester Combat and verify the same lifecycle.
- Verify a large Harvester registers arrival when its capsule/body reaches the Harvest Point interaction area even if its actor origin remains outside the raw interaction radius.
- Call `Notify Harvester Docked` or `Arrived At Refinery Dock Point` and verify Docked -> Unloading -> Leaving/Undocked timing and team-credit deposit.


### v1.7.6 mandatory regression

- Place or leave one operational Harvester of the Refinery's team anywhere in the world, including at the Tiberium field. Start PIE with `Enforce Single Active Harvester Per Team` enabled. Confirm the Refinery adopts it and does not create a second Harvester.
- With no existing Harvester, confirm exactly one Harvester is created at BeginPlay even if the Refinery Blueprint accidentally contains more than one enabled Refinery Building Combat Component.
- Reserve the Harvest Point with another actor, then explicitly call `Arrived At Harvest Point` on the intended Harvester. Confirm the lifecycle still enters Waiting To Harvest and then Harvesting; the reservation may warn but must not suppress the explicit command.
- Call `Arrived At Harvest Point` with no assigned Harvest Point. Confirm it still starts the timed harvesting lifecycle and logs the missing assignment rather than doing nothing.
- Repeat the explicit-arrival test for `Arrived At Refinery Dock Point`; confirm docking/unloading advances even if the Dock Point reservation is stale.


## Harvester physical arrival regression — v1.7.7

- With a large Character capsule, call `Go To Harvest Point` and verify the Harvester stops once, fires `On Harvest Point Arrived`, waits `Harvest Arrival Delay Seconds`, then fires `On Harvesting Started`.
- Verify no Blueprint feedback loop is used from `On Harvest Point Arrived` back into `Arrived At Harvest Point`.
- Drive a spline to its field endpoint and call `Arrived At Harvest Point` from `On Route Completed`; verify harvesting begins after the configured delay.
- Verify harvest duration/cargo-full completion transitions to `Returning To Refinery`.
- Call `Go To Refinery Dock Point` and verify the same large capsule reaches `On Refinery Dock Point Arrived`, then docking/unloading begins.
- Repeat with direct-navigation fallback and with a completed spline still assigned.

## Harvester v1.7.8 turret / terrain presentation

- Assign `Turret Yaw Component` and `Turret Pitch Component`, then assign a `Turret Static Mesh` or `Turret Skeletal Mesh`; confirm the generated visible turret appears and follows both pivots while firing.
- Confirm leaving the generated turret asset blank preserves an authored visible turret component without spawning a duplicate.
- Set `Ground Alignment Visual Component` to the Harvester chassis (or use `HarvesterBody` / Character Mesh fallback) and drive over a slope/landscape bump.
- Confirm only the visual chassis pitches/rolls while the Character capsule/root stays upright and continues following its route.
- On a left/right cross-slope, confirm the chassis leans with the terrain rather than against it: higher ground under the right track raises the right side, and higher ground under the left track raises the left side.
- Confirm turret aiming still tracks targets while the chassis is tilted.
- Confirm the working Harvest Point → harvest → Dock Point → unload → repeat cycle is unchanged.
- Enable `Draw Debug Ground Probes` and verify all four probes reach the intended terrain footprint when tuning large vehicles.

## Harvester generated skeletal turret muzzle socket (v1.7.9)

- Assign a `Turret Skeletal Mesh` that contains a named muzzle/barrel socket.
- Confirm `Turret Muzzle Socket Name` offers the skeletal mesh sockets in the Details dropdown.
- Select the barrel socket and leave `Turret Muzzle Component` empty.
- Confirm bullets originate from the socket while the turret yaws and pitches.
- Confirm muzzle Cascade/Niagara also spawns at the socket location.
- Add a small `Turret Muzzle Relative Offset` and confirm it follows the socket's local orientation.
- Set the socket back to `None` and confirm the existing muzzle Component/Tag fallback still works.

