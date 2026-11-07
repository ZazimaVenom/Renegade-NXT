# Changelog

## 1.8.0

- Added first-class `Grenade Launcher` AI weapon class for GDI-style Grenadier soldiers without changing the existing player rifle/pistol/rocket inventory-slot enum.
- Added Blueprint-pure `Make Grenade Launcher Preset` with an 8-round magazine, 0.75-second shot interval, 3.2-second reload, gravity-driven 3000 cm/s projectile, impact splash and direct-hit bonus starting values.
- Added fully exposed `FRenegadeGrenadeLauncherSettings` groups for cadence, AI safety/lead, ballistics, detonation/bounce, explosion, visuals, effects, audio and debug.
- Added analytic fixed-speed ballistic solving using the active world gravity, optional low/high arc choice, iterative moving-target lead, and a Blueprint-pure `Calculate Grenade Launch Velocity To Location` query.
- Added authoritative live-grenade simulation with configurable physics sub-steps and swept-sphere collision to reduce tunnelling through thin geometry/Character capsules.
- Added `Impact` detonation for standard Grenadier fire and optional `Timed Bounce` mode with fuse, restitution, friction, settle-speed and bounce-limit controls.
- Added team-aware radial grenade damage against registered soldiers, Harvesters and buildings, including large-target bounds handling, friendly/self-damage rules, direct-hit multiplier and optional explosion occlusion.
- Added dedicated Grenadier muzzle component picker, relative offset, `GrenadeMuzzle` tag fallback, runtime set/clear/get nodes and world-space muzzle-location query.
- Added pooled local grenade static-mesh presentation with material/scale/rotation/spin controls plus optional local flight, muzzle, impact and bounce effect Actors and sounds.
- Added reliable launch/bounce/explosion multicast presentation and Blueprint events carrying a per-round Grenade Id for custom visual/gameplay reactions.
- Grenadier AI retains the normal soldier target selection, combat movement, route interruption/resume, reload, death, ragdoll and respawn systems while applying an exposed minimum explosive firing distance.
- Preserved existing rifle/pistol/custom hitscan behaviour, Rocket Launcher logic, player combat slots, building warfare, EVA, Harvester combat/economy, and the v1.7.13 Harvester ground-roll direction fix.
- Added `Docs/Grenadier_Soldiers.md` and expanded Blueprint/testing documentation.

## 1.7.13

- Fixed Harvester ground-alignment roll using the opposite lateral sign on sloped terrain.
- When the terrain is higher under the right track, the visual chassis now rolls to raise the right side; when the terrain is higher under the left track, it raises the left side.
- Front/rear pitch behavior, probe sampling, trace collision behavior, Character capsule/root navigation, turret aiming, harvesting, docking, economy, spawning and combat are unchanged.

## 1.7.12

- Fixed a v1.7.11 regression that could prevent Harvester turrets from visibly tracking and firing at hostile infantry.
- Restored the proven v1.7.10 world-space target solver so arbitrary authored yaw/pitch pivot rotations remain compatible.
- Retained turret drift prevention by stabilizing only the authored relative roll after aiming instead of replacing the target solver.
- Separate yaw/pitch and combined turret pivot layouts remain supported.
- No changes to the working harvest, dock, unload, credits, refinery spawn, muzzle socket or direct/spline cycle logic.

# Renegade Soldier Combat v1.7.11

## Harvester turret terrain-rotation drift fix

- Fixed Harvester defensive turret yaw/pitch pivots slowly accumulating a sideways/roll offset after repeated target tracking while the chassis ground-alignment system pitches and rolls over terrain.
- Replaced world-space yaw-pivot rotation with deterministic parent-local aiming.
- The original authored relative rotations of the Turret Yaw and Turret Pitch components are now cached and used as the permanent mount baseline.
- Yaw tracking now changes only the yaw pivot's local yaw; authored local pitch and roll are restored every update.
- Independent pitch tracking now changes only the pitch pivot's local pitch; authored local yaw and roll are restored every update.
- Terrain pitch/roll is inherited naturally from the Harvester visual-body parent instead of being cancelled through child world rotations.
- Generated-turret fallback aiming uses the same stable authored-relative baseline when no separate pitch pivot is assigned.
- Runtime turret-component changes and presentation refreshes invalidate/re-cache the mount baselines safely.
- No harvesting, docking, unloading, refinery spawning, credits, muzzle-socket firing, ground-probe sampling, target selection, or weapon cadence behavior changed.

# Renegade Soldier Combat v1.7.10

## Harvester generated turret muzzle socket entry fix

- Changed `Turret Muzzle Socket Name` back to a normal freely editable `FName` field in the Details panel.
- Removed the `GetOptions` metadata that forced the field into a read-only-style dropdown when Unreal failed to enumerate sockets.
- You can now type the exact skeletal socket name manually, for example `MuzzleFlash`, `Muzzle`, or `BarrelSocket`.
- The existing socket lookup/firing priority is unchanged: valid skeletal muzzle socket -> explicit muzzle component/tag -> pitch/yaw offset fallback.
- `Get Generated Turret Socket Names` remains available as an optional Blueprint query utility, but no longer controls the Details-panel editor.
- No harvesting, docking, refinery spawning, credits, ground alignment, targeting, or weapon cadence behavior changed.

# Renegade Soldier Combat v1.7.9

- Added `Turret Muzzle Socket Name` for generated Harvester skeletal turrets, allowing machine-gun fire to originate directly from a socket on the assigned `Turret Skeletal Mesh`.
- Added an editor socket-name dropdown populated from the skeletal mesh's active socket list, including mesh and skeleton sockets.
- A valid selected skeletal muzzle socket now takes priority over the existing muzzle Scene Component/tag path; older component/tag setups remain unchanged when no socket is selected.
- `Turret Muzzle Relative Offset` is applied in the selected socket's local space, so fine barrel-tip adjustment follows socket rotation correctly.
- Socket lookup also supports an authored skeletal Turret Pitch/Yaw component when no generated skeletal visual is used.
- Bullet traces, muzzle FX and range/LOS calculations now start from the resolved skeletal socket location when configured.
- Preserved the confirmed-working v1.7.7 harvest/dock unload-repeat cycle and all v1.7.8 generated-turret visibility / terrain-ground-alignment behaviour.

# Changelog

## 1.7.8

- Fixed selected Harvester `Turret Static Mesh` / `Turret Skeletal Mesh` assets remaining invisible whenever valid authored Turret Yaw/Pitch components were assigned.
- Generated turret visuals are now created even with authored pivots and attach beneath the Pitch pivot when available, otherwise the Yaw pivot, so the visible asset inherits the already-working target tracking.
- Preserved the generated-mesh fallback when no authored turret pivot exists; the generated mesh itself can still act as the yaw/pitch control component.
- Hardened component resolution so an empty `FComponentReference` cannot silently resolve to the Character root and turn the whole Harvester body into a turret/target control component.
- Added `Harvester > Ground Alignment` visual suspension with four terrain probes (front-left/front-right/rear-left/rear-right).
- Added exposed ground probe layout, trace channel/range, maximum pitch/roll, interpolation speed and debug drawing.
- Added selectable `Ground Alignment Visual Component` plus `HarvesterBody` tag fallback and automatic Character Mesh fallback. Only the visual body pitches/rolls; the Character capsule/root remains upright for NavMesh, Spline AI and replicated Character movement stability.
- Added `Refresh Harvester Presentation` and runtime ground-alignment visual component Blueprint helpers.
- Ground alignment is evaluated before turret aiming each frame so terrain tilt and independent turret tracking remain compatible.
- Preserved the confirmed-working v1.7.7 Harvest Point / Refinery Dock unload-repeat cycle, one-Harvester spawning, economy, EVA, destruction and combat behaviour.

## 1.7.7

- Fixed the real Harvest Point / Refinery Dock arrival deadlock for large Character Harvesters. `AI MoveTo` was double-counting the vehicle capsule radius: the plugin expanded the acceptance radius manually and also used `bStopOnOverlap=true`, causing Unreal path following to stop up to an additional agent radius early. The vehicle could look correctly parked at the field/dock while never satisfying the plugin arrival test.
- `RequestCycleMoveTo` now uses the plugin's explicit capsule-expanded acceptance radius with `bStopOnOverlap=false`, so navigation stopping distance and lifecycle arrival distance use the same physical footprint.
- Added immediate physical arrival checks to `Go To Harvest Point` and `Go To Refinery Dock Point`. If the Harvester is already within the destination interaction footprint, the lifecycle advances immediately instead of issuing a redundant MoveTo.
- The same correction applies to both Harvest Point arrival and Refinery Dock arrival, fixing the shared failure mode before harvesting and unloading.
- Clarified that `On Harvest Point Arrived` / `On Refinery Dock Point Arrived` are output notifications. They should not be wired back into their corresponding `Arrived At ...` command nodes. Use `On Harvesting Started` / `On Refinery Unloading Started` for Blueprint presentation state.
- Preserved v1.7.6 single-Harvester-per-team refinery enforcement and all combat/economy/destruction systems.

## 1.7.6

- Fixed explicit `Arrived At Harvest Point` silently doing nothing when the Harvest Point was already reserved (commonly caused by a duplicate Harvester). Explicit authoritative arrival now always advances into the harvest arrival delay / harvesting lifecycle.
- `Arrived At Harvest Point` now also works as a deliberate Blueprint lifecycle command when no Harvest Point reference can be resolved, instead of returning without feedback.
- Applied the same fail-safe behavior to `Arrived At Refinery Dock Point`; Dock reservations no longer silently discard an explicit authoritative dock-arrival command.
- Added warning diagnostics for incompatible or already-reserved explicit arrival calls.
- Added `Enforce Single Active Harvester Per Team` (default true) to Refinery Harvester spawning. A Refinery now searches the full world for an existing operational same-team Harvester before spawning another.
- Added a per-Refinery-Actor primary-spawner guard so multiple Building Combat Component instances on one Refinery Actor cannot each create their own BeginPlay Harvester.
- Same-Refinery ownership matching now treats Building Combat Components on the same Refinery Actor as the same Harvester owner.

# Renegade Soldier Combat v1.7.5

- Fixed `Notify Harvester Arrived` on the placeable Harvest Point being notification-only. It now forwards into the Harvester Combat lifecycle, sets/uses that Harvest Point, enters the arrival delay, and starts automatic harvesting.
- Added explicit Harvester Blueprint node `Arrived At Harvest Point` for route-complete/manual workflows.
- Fixed the equivalent Refinery Dock Point lifecycle gap: `Notify Harvester Docked` now forwards into the Harvester Combat dock/unload lifecycle.
- Added explicit Harvester Blueprint node `Arrived At Refinery Dock Point`.
- Arrival detection now accounts for the Harvester Character capsule radius instead of requiring the vehicle actor origin to enter the small interaction radius; this prevents large Harvesters stopping visually at the field/dock without ever registering arrival.
- Direct `AI MoveTo` acceptance now includes the Harvester capsule radius, preventing the controller from trying to force the vehicle centre unrealistically close to a field/dock point.
- Zero-second harvest-arrival and unload-start delays now advance immediately instead of waiting for another component tick.
- Hardened Refinery BeginPlay spawning against duplicate/re-entrant deferred spawns by claiming the deferred Harvester as `Active Harvester` before `FinishSpawningActor` and using a spawn-in-progress guard.
- Added `Adopt Existing Harvester On Begin Play` (default true) and `Existing Harvester Adoption Radius` so a manually placed matching Harvester near the Refinery can be adopted instead of duplicated by auto-spawn.
- Added an initial-spawn request guard so the Refinery cannot schedule its automatic BeginPlay Harvester more than once.
- Preserved v1.7.4 spline/direct fallback, Go-To nodes, AI-controller creation, infantry target preference, credits, turret combat, EVA, wrecks and building warfare.

# Renegade Soldier Combat v1.7.4

- Fixed Refinery-spawned Harvesters remaining parked at the spawn point when their Character Blueprint did not automatically possess an AI Controller at runtime; the Refinery can now explicitly ensure the spawned Harvester receives its configured default AI Controller.
- Fixed direct-navigation fallback incorrectly treating a merely assigned/completed Spline Follower path as an active usable route. `Has Usable Spline Route` now inspects the follower's actual Follow State and treats Completed/Idle/Stopped/Suspended/Failed routes as inactive.
- Fixed Harvesters becoming stuck after harvesting when the outbound spline remained assigned but had already completed; the return cycle can now fall back to the Refinery Dock Point correctly.
- Added Blueprint-authority nodes `Go To Harvest Point` and `Go To Refinery Dock Point`. These explicitly reserve the destination, acquire the Harvester movement claim, set the correct lifecycle state, ensure an AI Controller exists, and issue the destination `AI MoveTo`.
- `Begin Harvest Point Approach` now reuses the same explicit Harvest Point movement path, while `Start Refinery Docking` reuses the explicit Dock Point movement path.
- Added Refinery option `Ensure Spawned Harvester Has AI Controller` (enabled by default), preserving the AI Controller Class configured on the Harvester Character Blueprint.
- Reduced infantry attraction to Harvesters: Harvester target priority is lower by default, Harvester distance scoring now favours infantry targets, and new `Prefer Soldiers Over Harvesters` keeps soldiers fighting hostile infantry whenever one is available while still allowing Harvester attacks when no soldier target exists.
- Preserved placeable Harvest/Dock Point actors, timed harvesting/unloading, credits, turret combat, EVA, wrecks, respawning, building warfare and Spline AI cooperative movement claims.

# Renegade Soldier Combat v1.7.3

- Added a placeable replicated `Renegade Refinery Dock Point` Actor, matching the level-authoring workflow of `Renegade Harvest Point`.
- Dock Points expose team/group filtering, approach radius, interaction radius, transform offsets, optional exclusive reservation, owning-Refinery runtime reference and approach/docked/undocked Blueprint events.
- Added Harvester `Assigned Refinery Dock Point`, automatic nearest compatible Dock Point lookup, search radius/group filtering, setters/getters and Dock Point approach/arrival events.
- Refinery Harvester spawning now exposes an explicit/auto-found level Dock Point and automatically passes the resolved Dock Point plus Harvest/Dock group filters into newly spawned and respawned Harvesters.
- `Get Harvester Dock Transform` now prefers the placeable Dock Point while retaining the existing `HarvesterDock` Scene Component/tag as a backward-compatible legacy fallback.
- Added spline-aware direct navigation fallback. When the Harvester has no usable assigned `RenegadeSplineFollower` route, it automatically uses its AI Controller to travel the entire distance from Refinery/Dock Point to Harvest Point and back.
- A valid assigned Spline AI route remains preferred for long-distance movement; direct fallback only activates when no usable spline path is detected, preventing the fallback from fighting the spline follower.
- Added exposed `Enable Direct Navigation Fallback` and `Direct Navigation Fallback Delay Seconds` settings, including a spawn grace period so Blueprint spawn/respawn hooks can assign a spline before fallback navigation starts.
- Direct-navigation fallback preserves the existing timed harvest, return, docking, unloading, team-credit deposit, post-unload departure, reservation and lifecycle event flow.
- Dock reservations are released on undock, Refinery invalidation, Harvester destruction and EndPlay to avoid blocked unloading bays.
- Preserved all v1.7.2 Spline AI final-approach behavior, Harvester turret combat, health/EVA, wreck cleanup, Refinery respawn hooks, global credits, infantry/rocket damage and existing building warfare.

# Renegade Soldier Combat v1.7.2

- Added a placeable replicated `Renegade Harvest Point` Actor for Tiberium/resource fields, with exposed team filtering, point group, approach radius, interaction radius, harvest-location offset and optional exclusive Harvester reservation.
- Added automatic final Harvest Point approach: the Harvester stays on its normal Spline AI route until it enters the point's approach radius, then temporarily claims movement and uses its AI controller to drive to the exact harvesting position.
- Added cooperative runtime integration with `RenegadeSplineAI` external movement claims without creating a compile-time dependency; the Harvester acquires `HarvesterCycle` for field/refinery final approach and releases it so the spline follower can reacquire normal route travel.
- Added exposed Harvester cycle/timing settings for field arrival delay, harvest duration, finish-on-full, post-harvest departure delay, Refinery dock approach/acceptance distance, unload-start delay, unload duration, finish-on-empty, post-unload departure delay, movement retry interval and spline resume delay.
- Added new replicated lifecycle states for Approaching Harvest Point, Waiting To Harvest and Refinery Docked while preserving the numeric values of all existing v1.7 lifecycle states.
- Added `Set Assigned Harvest Point`, `Find Nearest Compatible Harvest Point` and `Begin Harvest Point Approach` Blueprint calls plus Harvest Point approach/arrival events.
- Added `On Return To Refinery Route Requested` and `On Outbound Harvest Route Requested` authority Blueprint hooks for switching the existing Spline AI follower between outbound/return route logic without coupling the combat plugin to a specific spline path class.
- Corrected lifecycle timing so `On Refinery Undocked` fires after the exposed post-unload departure delay; the outbound-route hook now runs before releasing the temporary Spline AI movement claim to prevent a brief resume of the old return route.
- Added Refinery `Harvester Harvest Point` assignment and optional automatic compatible Harvest Point lookup by team/group.
- Added Refinery `HarvesterDock` Scene Component/tag plus exposed dock position/rotation offsets and `Get Harvester Dock Transform`.
- Added dedicated Refinery `On Harvester Respawned` event, distinct from `On Harvester Spawned`, so replacement Harvesters can immediately restart/reacquire their outbound spline.
- Refinery-spawned Harvesters now inherit the Refinery's selected/auto-resolved Harvest Point before BeginPlay and retain the existing team/refinery ownership setup.
- Preserved the v1.7 defensive turret, health/EVA, global credits, wreck/smoke cleanup, rifle/rocket damage and Refinery respawn systems.

# Renegade Soldier Combat v1.7.1

- Fixed UE5.8/MSVC compile error C2445 in Harvester wreck spawning by replacing an ambiguous `TSubclassOf<ARenegadeHarvesterWreck>` / `UClass*` conditional expression with explicit class assignment and fallback.
- Fixed UE5.8/MSVC compile errors C2446/C2737 in rocket/Harvester damage resolution by explicitly converting the direct `FHitResult::ImpactPoint` value into `FVector` instead of mixing `FVector_NetQuantize` and `FVector` in a conditional expression.
- No Harvester gameplay, turret, economy, EVA, Refinery spawn, wreck, Spline AI, rifle, rocket, building, or lock-on behaviour was intentionally changed.

# Renegade Soldier Combat v1.7.0

- Added first-class GDI/Nod Harvester warfare through the new `Renegade Harvester Combat Component` for Character Blueprint vehicles.
- Preserved Spline AI movement ownership: Harvester combat never issues route or `MoveTo` requests, so the existing Character vehicle/spline system continues to drive the chassis while the turret aims independently.
- Added an infantry-priority defensive machine-gun turret with configurable search/LOS, rotation speeds and limits, firing alignment tolerance, range, damage, RPM, spread, damage type and friendly-fire behaviour.
- Added selectable existing yaw/pitch/muzzle Scene Components plus `HarvesterTurret`, `HarvesterGunPitch` and `HarvesterMuzzle` tag fallbacks.
- Added optional generated static or skeletal turret mesh fallback with exposed socket, relative transform and scale.
- Added pooled travelling bullet Static Mesh visuals with material override, scale, orientation, speed and pool size.
- Added exposed Cascade and Niagara muzzle/impact particles, machine-gun fire sound and debug trace drawing.
- Added robust child/attached/owner/instigator hit resolution for Harvester turret bullets and preserved Soldier Combat incoming-hit context.
- Added replicated Harvester health, destroyed/critical state, current turret target, cargo, lifecycle state and owning Refinery.
- Added team-aware GDI/Nod friendly/enemy Harvester EVA slots for under attack, critical health and destroyed announcements using the existing prioritized global EVA channel.
- Added exposed Harvester destruction Cascade/Niagara explosion, explosion sound, static or skeletal wreck mesh, optional collision, Cascade/Niagara wreck smoke and configurable `Wreck Cleanup Seconds`.
- Harvester wrecks are independent replicated Actors, allowing a new Harvester to respawn while the old wreck remains; server lifespan cleanup removes the wreck and attached smoke after the configured time.
- Added explicit Blueprint lifecycle calls/events for Start/End Harvesting, Returning To Refinery, Start Docking, Docked, Start/End Unloading and Undocked.
- Added automatic cargo gathering and unloading rates, cargo capacity and `Credits Per Cargo Unit` conversion.
- Added an exposed fixed server economy update interval (default 0.10 s) so cargo/credit replication remains responsive without mutating the global balance every frame.
- Added one replicated match-wide `Renegade Team Credits Manager` with generic FName team balances and Blueprint get/add/spend/set/reset support.
- Harvester unloads deposit into the Harvester's own team balance, keeping GDI and Nod economies independent.
- Extended the existing combat registry so Harvesters are valid team-aware combat targets.
- Added infantry targeting settings for hostile Harvesters; AI rifles/rockets and player rifles/rockets can resolve and damage Harvester actors and multipart hit geometry.
- Rocket splash against Harvesters now measures against the closest point on the vehicle/child-actor bounds, preventing large Harvester side impacts from being rejected because a single aim point is outside the splash radius.
- Added Refinery-controlled Harvester spawning to `Renegade Building Combat Component` with exposed Character Blueprint class, spawn Scene Component/tag, local position/rotation offsets, auto-spawn, initial delay, respawn delay and operational-Refinery requirement.
- Added replicated `Active Harvester`, `On Harvester Spawned` and `On Harvester Respawn Scheduled` Refinery hooks.
- When the operational-Refinery requirement is enabled, a destroyed Refinery cancels pending replacement spawns; restored Refineries resume replacement scheduling when no active Harvester exists.
- Fixed duplicate Refinery TeamId replication registration found during the v1.7.0 integration audit.
- Existing rifle/pistol/rocket player combat, TPS lock-on, NPC combat, building health/EVA, AGT, Obelisk, bullet visuals, blood, ragdoll and existing Soldier respawn remain preserved.

# Renegade Soldier Combat v1.6.2

- Fixed rocket explosions potentially failing to damage large buildings such as the Helipad when the impact was far from the building's single AI target/aim point.
- Rocket splash distance for buildings is now measured against the closest point on the building owner's colliding bounds rather than only `GetTargetAimLocation()`.
- Building bounds include the owning Actor plus recursively attached and Child Actor geometry, improving support for multipart base structures.
- Added a registered-building direct-impact recovery pass for rockets that strike multipart/child geometry whose hit Actor hierarchy does not directly expose the Building Combat Component.
- Directly recovered building hits preserve the configured rocket direct-hit damage multiplier.
- Building rocket damage still uses `UGameplayStatics::ApplyPointDamage`, so the existing Building Combat Component receives `OnTakeAnyDamage`, health reduction, low-health state, destruction, and team-aware EVA under-attack announcements normally.
- Explosion occlusion, radial falloff, GDI/Nod hostility filtering, friendly-fire rules, NPC rockets, player rockets, AGT/Obelisk defence, rifles, lock-on, blood, ragdoll, respawn, and spline integration are otherwise unchanged.
- When `Draw Debug Rocket` is enabled, rocket explosions now log the resolved building, distance to its bounds, applied damage, and direct-hit status for verification.

# Renegade Soldier Combat v1.6.1

- Added a dedicated `Rocket Launcher` value to the replicated player weapon-slot enum while preserving the existing rifle and pistol enum values.
- Added independent player rocket-launcher Weapon Profile and inline settings fields under `Player Combat > Weapons`.
- Added replicated `Current Rocket Launcher Ammo` with the existing `On Player Ammo Changed` event and active-magazine synchronisation.
- Added `Player Fire Rocket Launcher` and `Select Player Rocket Launcher` Blueprint nodes.
- The generic `Player Start Fire` and `Player Fire Once` nodes now also launch one rocket whenever the Rocket Launcher player slot is active.
- Added a reliable owning-client-to-server rocket-shot request while retaining the existing unreliable request for high-rate rifle and pistol fire.
- Player rockets use the current camera/controller aim ray, lock-on shot assistance, server aim validation, launcher muzzle confirmation, delayed travel-time impact, radial splash damage, direct-hit bonus, occlusion, team filtering, building damage, effects, sounds, and reliable multicast presentation.
- Added built-in Rocket Launcher selection controls: keyboard `3` and gamepad D-Pad Right, both fully exposed.
- Added one-round player launcher defaults matching the v1.6.0 rocket preset; custom profiles and inline values remain fully configurable.
- Preserved NPC rocket soldiers, rifle/pistol player combat, lock-on targeting, AGT/Obelisk defence, buildings, blood, ragdoll, respawn, and spline integration.

# Renegade Soldier Combat v1.6.0

- Added a dedicated `Rocket Launcher` value to the shared infantry Weapon Class enum.
- Added `Make Rocket Launcher Preset` for a polished one-round launcher profile with configurable damage, range, cadence, spread, reload, and rocket defaults.
- Added server-authoritative rocket travel: the launch path is confirmed from the configured muzzle, flight time is calculated from projectile speed, and damage is delayed until arrival rather than applied instantly.
- Added reliable multicast launch presentation so LAN clients receive the travelling rocket, muzzle effect, launch sound, smoke/trail actor, and impact presentation consistently.
- Added selectable rocket-launcher muzzle Scene Component, local-space offset, `RocketMuzzle` tag fallback, runtime Set/Clear/Get nodes, and muzzle-location query.
- Added pooled collision-free rocket Static Mesh visuals with material override, scale, rotation correction, launch offset, impact stop-short distance, pool size, and optional shadows.
- Added optional local cosmetic Blueprint actor classes for rocket flight/trail, muzzle flash, and impact effects, plus exposed fire/impact sounds and volume multipliers.
- Added authoritative radial explosion damage with inner/outer radius, linear falloff to an exposed minimum multiplier, direct-hit multiplier, optional self damage, and existing friendly-fire/team hostility filtering.
- Added explosion occlusion traces so walls and solid cover can prevent splash damage through geometry.
- Added direct-hit resolution through child actors, attachments, soldiers, and building components; large buildings receive the direct-hit bonus even when their Actor origin is outside the splash radius.
- Added moving-target prediction for AI rocket soldiers with an exposed maximum lead time.
- Added an exposed minimum AI firing distance; rocket soldiers refuse unsafe close shots and integrate it into the existing retreat/strafe combat movement.
- Added `On Rocket Launched` and `On Rocket Impacted` Blueprint events and a local `Preview Rocket Launcher Visual` testing node.
- Added server tick persistence for rockets already in flight so their delayed explosion still resolves correctly if the firing soldier dies before impact.
- Preserved existing rifle/pistol combat, player lock-on, buildings, EVA announcements, AGT, Obelisk, bullet visuals, blood, ragdoll, respawn, and spline integration.

# Renegade Soldier Combat v1.5.7

- Fixed automatic lock-on aim-point movement remaining centred in projects that use Enhanced Input for camera look.
- Mouse aim-offset input now reads the Player Controller's real per-frame mouse delta instead of relying only on `GetInputAnalogKeyState(MouseX/MouseY)`, which can return zero after Enhanced Input processes those axes.
- Applied the same direct mouse-delta path to both built-in camera look and automatic lock-point input polling.
- Custom nonstandard mouse-axis keys still fall back to the configured analog-key polling path.
- Existing exposed mouse sensitivity, aiming sensitivity multiplier, horizontal/vertical offset sensitivity, movement limits, smoothing and recentring settings remain fully applied.
- Gamepad right-stick offset movement, target switching, targeting, indicator, shooting, damage and all building-warfare systems are unchanged.

# Renegade Soldier Combat v1.5.6

- Added polished player-controlled lock-point movement while locked onto a hostile soldier.
- Mouse and right-stick look input can now move the lock point up/down and slightly left/right around the selected target instead of fighting the automatic camera tracking.
- Built-in input inherits the existing mouse yaw/pitch sensitivity, gamepad yaw/pitch speeds, gamepad dead zone, Y inversion and aiming sensitivity multiplier.
- Added dedicated horizontal/vertical lock-point sensitivity multipliers and a centimetres-per-look-degree conversion value.
- Added exposed horizontal, upward and downward movement limits.
- Added smoothing, optional delayed automatic recentring, configurable recenter speed and reset-on-target-change behaviour.
- Automatically reads the configured Mouse X/Y and Gamepad Right Stick axes while locked even when Built-In Look Input is disabled, so existing Enhanced Input camera setups work without extra lock-offset wiring.
- Added `Player Add Lock On Aim Input` for custom Enhanced Input axes and runtime `Reset/Get Player Lock On Aim Offset` Blueprint nodes.
- The movable point is shared by camera tracking, the lock-on indicator and authoritative player shot assistance.
- Right-stick target flick switching remains supported; a switching flick is consumed so it does not also drag the lock point sideways.
- Existing acquisition, damage, building warfare, EVA, AGT, Obelisk, bullet, blood, ragdoll and respawn systems are unchanged.

# Renegade Soldier Combat v1.5.5

- Fixed `Aim Height Offset` being restricted to zero or positive values.
- The offset is now signed and accepts values from `-500 cm` to `+500 cm`.
- Negative values move the shared AI and player lock-on aim point below the configured weapon `Aim Bone Name`; positive values move it upward.
- Added clearer editor tooltips and centimetre units for both `Aim Height Offset` and the player-only `Target Aim Offset`.
- Confirmed the player lock-on camera, indicator, line-of-sight trace, and shot assistance all resolve through the same adjusted aim point.
- Target acquisition, target switching, lock-on texture tint, player shooting, NPC combat, and building warfare are otherwise unchanged.

# Renegade Soldier Combat v1.5.4

- Fixed the player lock-on PNG remaining white during gameplay.
- The selected `Lock-On Indicator Color` is now applied directly to the Slate image that renders the PNG.
- RGB tint and Alpha opacity multiply with the source texture, preserving transparent pixels.
- The outer Widget Component remains white to prevent the colour from being multiplied twice.
- Runtime `Set Player Lock On Indicator Color` changes now update the active indicator immediately.
- Target acquisition, aiming, target switching, shooting, damage, and all building-warfare systems are unchanged.

# Version 1.5.3

- Added an exposed **Lock-On Indicator Color** RGBA colour picker beside the lock-on PNG/Texture field under `Targeting > Player Lock-On Visual`.
- Replaced the untinted runtime billboard with a local screen-space Slate image rendered through a Widget Component.
- The selected colour multiplies the source texture while preserving its transparent PNG alpha channel.
- The colour alpha value provides an additional opacity control without modifying the imported texture.
- Added `Set Player Lock On Indicator Color` and `Get Player Lock On Indicator Color` Blueprint nodes.
- Existing lock-on texture, position, scale, pulse, acquisition, aiming, firing, damage, and target-switching behaviour remains intact.

# Changelog

## 1.5.2

- Exposed `Lock-On Indicator PNG / Texture` directly under `Targeting > Player Lock-On Visual` on the Soldier Combat Component.
- The lock-on billboard now reads the directly exposed targeting texture first.
- Existing v1.5.0/v1.5.1 texture assignments migrate automatically from the old nested lock-on setting.
- The runtime Set/Get Lock-On Indicator Texture Blueprint nodes now use the new exposed property.

## 1.5.1 - Separate Lock-On Controls with Integrated Aim

- Changed the default gamepad lock-on control to `Gamepad Left Shoulder / LB`, the button directly above Left Trigger.
- Changed the default keyboard lock-on control to `Left Alt`; no mouse button is used for lock-on.
- Kept `Gamepad Left Trigger` and `Right Mouse Button` dedicated to normal free aiming.
- Removed normal-Aim-to-lock runtime coupling; the old v1.5.0 value is retained only as hidden deprecated serialization data and is ignored.
- Lock-on remains a complete aim mode: holding the dedicated lock button automatically activates FOV zoom, camera-facing Character rotation, aimed spread, and target tracking.
- Added independent normal-aim and lock-on-aim request tracking so releasing one input cannot incorrectly cancel the other.
- Fixed held lock-on fighting the normal aim input every frame and causing aim state/event/zoom instability.
- Toggle-aim mode now remains compatible with dedicated hold-to-lock controls.
- Preserved target switching, lock indicator, shot assistance, server-authoritative damage, building warfare, EVA announcements, defensive buildings, and all existing combat visuals.

## 1.5.0 - Polished Player TPS Lock-On Targeting

- Added a complete local hold-to-lock third-person targeting system for player-controlled combat components.
- Existing Aim input can automatically drive lock-on, matching classic GTA/Saints Row-style held targeting; separate keyboard/mouse and gamepad lock keys are also exposed.
- Releasing the lock input immediately clears the selected target and restores normal camera control.
- Target acquisition searches only registered, living hostile soldier combatants and strongly prioritizes enemies near the camera centre.
- Added exposed acquisition distance, acquisition angle, break distance multiplier, and break angle.
- Added line-of-sight acquisition with an exposed trace channel and obstruction grace time to prevent unstable lock flicker around cover edges.
- Added smooth controller yaw/pitch tracking with exposed interpolation speed, pitch tracking, aim offset, and small target-velocity prediction.
- Added optional locked-target shot assistance through the existing server-validated camera/muzzle trace path, with an exposed maximum correction angle.
- Added automatic reacquisition while the input remains held after a target dies, leaves range, or remains occluded too long.
- Added left/right target switching through exposed keyboard keys, gamepad D-pad keys, and optional right-stick flick detection with cooldown.
- Added an exposed lock-on indicator texture rendered through a local camera-facing Billboard Component.
- Added indicator world offset, XYZ scale, screen-size scaling, screen-size value, pulse amount, and pulse speed.
- Added runtime Blueprint nodes for starting/stopping lock, setting held state, locking a specific Actor, refreshing, switching, querying target/state/aim point, and changing the indicator texture.
- Added `On Player Lock On Target Changed` and `On Player Lock On State Changed` Blueprint events.
- Added optional lock-on debug candidate spheres, visibility lines, and active muzzle-to-target line.
- Preserved player/NPC rifle combat, building targeting and destruction, GDI/Nod EVA announcements, AGT/Obelisk defence, bullet visuals, ground blood, ragdoll, and respawning.

## 1.4.4 - Team-Aware EVA Building Announcements and Low-Health State

- Added per-listener team-aware EVA/CABAL sound routing for all building announcements.
- Added separate GDI-friendly, GDI-enemy, Nod-friendly, and Nod-enemy sound slots for building under-attack events.
- Added the same four team-perspective sound slots for building low-health/imminent-destruction warnings and destroyed announcements.
- Every listening client selects the correct voice and friendly/enemy wording from its locally controlled player combat component and the damaged building's team.
- Kept the existing generic `Under Attack Sound` and `Destroyed Sound` values as backward-compatible fallbacks, and added a generic low-health warning fallback.
- Added replicated `Is Low Health` building state with exposed threshold and repair hysteresis settings.
- Added `On Building Low Health Changed` Blueprint event with low-health state, health percentage, and damage causer.
- Added `Is Building Low Health` Blueprint query.
- Low-health warnings fire only when crossing into the configured low-health range and reset after sufficient repair.
- Upgraded the world audio lock into one prioritized building EVA channel: ordinary under-attack lines do not overlap, low-health warnings may interrupt them, and destroyed announcements have highest priority.
- Added optional always-relevant building networking so friendly and enemy base announcements can reach players across the map.
- Preserved AGT rockets, Obelisk charge/damage/Niagara/Cascade visuals and cleanup, team power, building targeting, player combat, NPC combat, bullet visuals, blood, ragdoll, and respawning.

## 1.4.3 - Deterministic Obelisk Laser Activation and Cleanup

- Fixed looping Cascade Obelisk beams remaining permanently visible after firing.
- Added exposed `Laser Visual Lifetime Seconds` to control exactly how long each laser visual remains active.
- Cascade laser components are now created with auto activation disabled, fully configured with trace endpoints, transform, and scale, and only then activated.
- Removed the pre-activation window that could briefly display a Cascade asset's authored default beam before the first valid shot.
- Cascade cleanup now forcibly deactivates the system, kills remaining particles, clears its template, and destroys the temporary runtime component.
- Niagara laser visuals now use deterministic lifetime cleanup instead of relying on the authored system to stop itself.
- A new Obelisk shot removes any previous active laser visual before spawning the next one, preventing overlaps and accumulated looping beams.
- Optional Blueprint laser-effect actors now receive the same configured lifetime through Actor lifespan.
- Preserved the working Obelisk charge, trace, damage, kill, sound, endpoint alignment, scale controls, AGT defence, building warfare, player combat, and NPC combat.

## 1.4.2 - Automatic Cascade Trace Alignment and Laser Scaling

- Fixed the Obelisk Cascade effect spawning without visually reaching the authoritative damage-trace endpoint.
- Cascade source and target points are now applied automatically regardless of the legacy v1.4.1 checkbox value.
- Cascade endpoints are written before activation and again after activation for compatibility with native Beam TypeData emitters.
- Added automatic trace-length fitting for fixed-length or non-beam Cascade particle assets.
- Added exposed `Laser Visual Scale` XYZ control.
- Added independent `Laser Length Scale Multiplier` and `Laser Thickness Scale Multiplier` controls.
- Added exposed `Laser Visual Rotation Offset` for effects authored along an axis other than local +X.
- Kept `Authored Laser Length` exposed so transform-fitted effects terminate at the confirmed trace endpoint.
- Added safe upgrade handling so newly introduced scale fields cannot deserialize as zero and make the effect invisible.
- Preserved the working server-authoritative Obelisk targeting, charge timing, damage, kills, sounds, Niagara fallback, AGT defence, building health, player combat, and NPC combat.

## 1.4.1 - Cascade Obelisk Laser Fallback

- Added classic Cascade `Particle System` support for the Obelisk laser.
- Added exposed `Particle System Preference` with Niagara-first or Cascade-first fallback order.
- Added `Laser Cascade Particle System` asset selection.
- Added Cascade beam source/target assignment through emitter, source, and target indices.
- Added optional Cascade vector instance parameter names for assets driven by named start/end vectors.
- Cascade effects receive the same trace-facing rotation and optional +X distance scaling as Niagara.
- Preserved the existing Blueprint laser-effect actor as an optional additional presentation layer.
- Preserved all v1.4.0 building health, infantry building targeting, AGT rockets, Obelisk damage, power dependency, under-attack audio serialization, player combat, and NPC combat.

## 1.4.0 - Building Warfare, AGT Rockets, and Obelisk Laser

- Added `Renegade Building Combat Component` for all GDI/Nod building Blueprint actors.
- Added building types for Refinery, Barracks, Silo, Hand of Nod, Weapons Factory, Power Plant, Helipad, Repair Pad, Airstrip, Obelisk, Advanced Guard Tower, Generic, and custom use.
- Added replicated building team, health, destruction state, repair/restoration, targetability, defence target, Obelisk charging, and team-power state.
- Added Blueprint health, under-attack, destroyed, restored, defence-target, defence-fired, and team-power events.
- Expanded AI infantry target acquisition to include hostile buildings through the existing world registry.
- Added exposed infantry policies for ignoring buildings, attacking buildings only when no soldier is available, comparing closest targets, or preferring buildings.
- Expanded player and AI shot hierarchy resolution so attached building meshes redirect point damage to the owning building actor.
- Added global per-world/client under-attack audio serialization so several damaged buildings cannot overlap announcer sounds.
- Added AGT dual server traces, two selectable rocket muzzle Scene Components/tags, per-rocket damage, range, cadence, spread, fire sound, pooled visual rocket meshes, impact effect actors, and debug traces.
- Added Obelisk target acquisition, configurable charge time, separate charge and shoot sounds, post-charge server damage trace, and automatic reacquisition.
- Added Fab Niagara laser support with exposed start/end parameter names, Position or Vector3 parameter type, trace-facing rotation, optional +X distance scaling, and Blueprint actor visual fallback.
- Added optional team Power Plant dependency for AGT/Obelisk operation.
- Added defence target selection by closest enemy, lowest health, or random enemy.
- Added preview nodes for AGT rocket travel and Obelisk laser effects.
- Added `Docs/Building_Warfare.md` with full Blueprint, collision, Niagara, audio, power, debugging, and performance setup.
- Preserved all v1.3.4 player input, aiming, hit registration, NPC combat, bullet visuals, blood, ragdoll, spline integration, and respawning.

## 1.3.4 - Editable Player Input and Aim Defaults

- Fixed the complete Player Input and Player Aim Presentation settings being greyed out whenever `Player Controlled Combat` was disabled.
- Removed the parent-level Details-panel edit condition from the input, aim-presentation, aim-camera component, and aim-camera tag properties.
- Keyboard, mouse, gamepad, sensitivity, dead-zone, inversion, aim FOV, rotation, and camera settings can now be configured before enabling player combat or while editing shared parent Blueprints.
- Kept the internal child conditions: look settings still depend on `Enable Built-In Input` and `Enable Built-In Look Input`, while zoom subsettings still depend on the appropriate aim-presentation switches.
- Runtime behaviour is unchanged: the input system only processes controls when `Player Controlled Combat` is enabled on the active player component.
- Preserved v1.3.3 player hit registration, shot debugging, bullet visuals, blood splatter, aiming, AI combat, ragdoll, and respawning.

## 1.3.3 - Player Hit Registration and Shot Debugging

- Fixed player muzzle traces being blocked by attached weapon, armour, or Child Actor equipment owned by the firing Character.
- Player and AI weapon traces now ignore the complete firing-actor attachment hierarchy.
- Fixed hit registration when a trace strikes an attached child actor or equipment actor instead of the Character actor itself.
- Added an enabled-by-default combat-target object trace fallback (`Pawn` by default) so player shots can hit Character capsules even when they do not block the selected weapon trace channel.
- Combat targets are now resolved through attachment, owner, and instigator chains, and point damage is applied to the resolved Character/combat owner.
- Added a safe default `UDamageType` when a weapon profile does not specify one.
- Added exposed `Draw Debug Shot Line`, duration, thickness, impact-point, hit, blocked, and miss colour settings.
- Debug traces display the exact authoritative muzzle trace and log the raw hit actor, resolved damage actor, and applied damage.
- Preserved player aiming, input, bullet mesh travel, blood splatter, ragdoll, AI combat, and respawning.

## 1.3.2 - Polished Player Aim Presentation

- Fixed player aim doing only a replicated Boolean/spread change with no visible camera or Character response.
- Added camera-facing Character yaw while aiming, maintained every frame on the owning player and authority.
- Temporarily disables orient-to-movement and applies controller desired rotation/controller yaw; all original Character Movement settings are restored afterward.
- Added smooth exposed FOV zoom with separate zoom-in/zoom-out interpolation speeds and an exposed aimed FOV.
- Added selectable `Player Aim Camera Component`, camera-component tag fallback, active-camera auto-detection, runtime camera override nodes, and PlayerCameraManager fallback.
- Added `Get Player Aim Alpha`, `Snap Player Character To Aim Forward`, and `Restore Player Aim Presentation` Blueprint nodes.
- Aim presentation now restores safely on aim release, death, ragdoll, respawn, input shutdown, camera changes, and EndPlay.
- Manual Blueprint aim nodes and built-in mouse/gamepad aim input now use the same complete presentation path.
- Preserved server-authoritative shooting, bullet mesh travel, blood splatter, rifle/pistol ammo, ragdoll, and custom respawning.

## 1.3.1

- Added optional self-contained keyboard/mouse and gamepad input polling for player combat.
- Added exposed FKey bindings for fire, aim, reload, automatic rifle and pistol selection.
- Added exposed mouse and right-stick look axes, sensitivity, gamepad speed, dead zone and inversion settings.
- Added replicated player aiming state, `On Player Aim Changed`, Blueprint aim controls and aimed-spread multiplier.
- Added hold/toggle aim, require-aim-to-fire, pause/menu input blocking and runtime built-in-input enable/disable.
- Preserved all v1.3.0 AI combat, player hitscan, bullet visuals, blood, ragdoll and respawn behaviour.

## 1.3.0 - Player Combat, Rifle/Pistol Input, and Expanded Respawning

- Added exposed `Player Controlled Combat` mode to the existing combat component.
- Player mode disables automatic targeting, AI firing, combat movement, and spline takeover while keeping the player registered as a valid hostile target.
- Added Blueprint input nodes for automatic-rifle held fire, pistol single fire, generic fire, stop fire, reload, and weapon selection.
- Added separate inline/profile settings and independent magazine ammunition for the player's automatic rifle and pistol.
- Added replicated active player weapon, rifle ammo, pistol ammo, and Blueprint weapon/ammo events for HUD and equipment logic.
- Added server-authoritative player shot requests with cadence, ammunition, client camera-origin, and aim-angle validation.
- Added camera-to-crosshair aiming followed by a muzzle-to-aim obstruction trace to prevent shooting through close cover.
- Player shots reuse the existing pooled bullet mesh, selectable muzzle Scene Component, hit damage, critical bones, ground blood, ragdoll, and death logic.
- Added automatic-rifle reload pause/resume support while the local trigger remains held.
- Added Custom Transform List respawns with First, Random, and Sequential selection.
- Added respawning at level actors carrying a configurable Actor Tag.
- Added runtime respawn transform override and Blueprint nodes for managing custom respawn transforms.
- Added respawn vertical offset, controller rotation restoration, and `On Respawn Transform Selected`.
- Added `Docs/Player_Combat.md` with Enhanced Input and multiplayer setup.

## 1.2.1

- Added a Blueprint/Details-panel selectable **Bullet Visual Spawn Component** using Unreal's component picker.
- Added **Bullet Visual Spawn Relative Offset** in the selected component's local space.
- Added **Bullet Visual Spawn Component Tag** as a simple fallback for modular or dynamically assembled soldiers.
- Added Blueprint nodes: **Set Bullet Visual Spawn Component**, **Clear Bullet Visual Spawn Component**, **Get Bullet Visual Spawn Component**, **Get Bullet Visual Spawn Location**, and **Preview Bullet Mesh From Configured Spawn**.
- Bullet visuals now travel from the configured Scene Component to the authoritative trace end; damage and line tracing remain unchanged and server authoritative.
- Existing muzzle socket/trace-start behavior remains the fallback when no Scene Component is selected.

## 1.2.0 - Pooled Bullet Meshes and Ground Blood

- Added an automatic pooled static-mesh bullet visual that travels from the configured muzzle socket to the authoritative hitscan trace end.
- Bullet visuals are cosmetic only; damage, spread, line traces, and hit results remain server authoritative.
- Added per-soldier bullet component pooling with a configurable cap, no collision, no navigation influence, and optional shadow/material/rotation controls.
- Added automatic ground blood placement after successful combat-character hits.
- Supports random Deferred Decal materials and an optional local Blueprint effect actor for existing blood assets.
- Ground blood aligns to the traced surface normal and exposes size, rotation, surface offset, lifetime, fade, spawn chance, collision channel, and throttle settings.
- Added optional blood timing delay so the splatter appears when the visible bullet reaches the impact point.
- Added Blueprint preview nodes for bullet travel and ground-blood placement.
- Added `On Ground Blood Spawned` for additional Blueprint-controlled effects.
- Refactored component ticking so client-side bullet visuals can continue travelling without interfering with server combat-facing rotation.
- Removed a duplicate replication superclass call found during the visual-system update.
- Updated the default Renegade NXT ragdoll root bone to `spine`, matching the working soldier Physics Assets.

## 1.1.3 - UE5.8 Compile Fix

- Fixed UE5.8 compiler errors caused by directly reading private `USkeletalMeshComponent` members.
- Ragdoll state capture now uses the public `GetAllowAnimDynamicsAnimNode()` and `GetAllowRigidBodyAnimNode()` accessors.
- Preserves each mesh's original AnimDynamics and RigidBody AnimGraph-node allow state across ragdoll and respawn.
- No Blueprint setup changes are required.

## 1.1.2 - Anti-Stretch Ragdoll Stability

- Fixed modular soldiers stretching when the selected ragdoll mesh is a Leader Pose follower.
- Ragdoll selection now resolves followers to the leader/body mesh automatically.
- Added Blueprint settings for a stable ragdoll root bone (`spine` by default for Renegade NXT).
- Uses `SetAllBodiesBelowSimulatePhysics` for humanoid ragdolls instead of blindly enabling every helper/root body.
- Temporarily disables cloth, AnimDynamics, RigidBody AnimGraph nodes, and post-process animation while dead.
- Restores all secondary-animation settings during same-actor respawn.
- Added validation for unresolved Leader Pose followers and invalid zero-scale meshes.


## 1.1.1

- Fixed automatic ragdoll selection for soldiers that use a child or modular Skeletal Mesh Component instead of the Character default Mesh.
- Added `Ragdoll Mesh Component Tag` so Blueprints can select the exact mesh to simulate.
- Added automatic fallback to a skeletal mesh that has a usable Physics Asset.
- Added `Validate Ragdoll Setup`, returning a precise Blueprint-readable failure reason.
- Added Output Log diagnostics when the mesh, Skeletal Mesh asset, Physics Asset, or physics bodies are missing.
- Added full physics pose blending during ragdoll and safe reset during same-actor respawn.
- Invalid hit-bone names now safely apply impulse to the whole ragdoll.

## 1.1.0

- Added Blueprint-exposed `bLockCombatRotationToCurrentTarget`, enabled by default.
- Added `CombatTargetRotationSpeedDegrees` for smooth or instant target-facing rotation.
- Added Blueprint callable `SetCombatRotationLockEnabled`.
- Soldiers can now advance, retreat, and strafe while their body yaw remains fixed toward the active enemy.
- Original Character Movement and controller-yaw settings are restored after combat, death, stop, and spline resume.
- Combat-facing state is server authoritative and works with existing replicated Character movement.

## 1.0.0

- Initial automatic team combat, weapon fire, damage, combat movement, ragdoll death, and same-actor respawn release.
