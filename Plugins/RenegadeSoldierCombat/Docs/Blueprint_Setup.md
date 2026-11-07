# Blueprint Setup

## 1. Add the component

Open each soldier Character Blueprint—rifle soldier, pistol soldier, and any future infantry class—and add:

`Renegade Soldier Combat Component`

The same component can be used on every soldier Blueprint.

## 2. Set the team

Set `Team Id` to exactly one of:

- `GDI`
- `Nod`

Any two different non-neutral team names are enemies by default, so custom factions also work. `None` and `Neutral` do not automatically fight.

## 3. Select the weapon

For a fast setup, leave `Use Weapon Profile` disabled and edit `Inline Weapon Settings`.

Suggested rifle values:

- Damage: 11
- Range: 4500
- RPM: 600
- Burst: 3–7
- Magazine: 30
- Reload: 2.1 seconds

Suggested pistol values:

- Damage: 18
- Range: 2800
- RPM: 260
- Burst: 1–2
- Magazine: 12
- Reload: 1.65 seconds

You can also create a **Renegade Weapon Profile** Data Asset and assign it to many soldier classes.

For rocket infantry, set `Weapon Class = Rocket Launcher`, use `Make Rocket Launcher Preset` as a starting point, and add/select a `RocketMuzzle` Scene Component at the launcher barrel. Full setup is in `Rocket_Launcher_Soldiers.md`.

For **Grenadier** infantry, set `Weapon Class = Grenade Launcher` or use `Make Grenade Launcher Preset`, then select the exact barrel Scene Component under `Renegade NXT > Grenade Launcher > Muzzle` (or tag it `GrenadeMuzzle`). The projectile is a real gravity-driven ballistic round with authoritative swept collision and splash damage. Leave `Detonation Mode = Impact` for the standard Grenadier role; `Timed Bounce` exposes the Renegade X-style timed alternate behaviour. Full setup is in `Grenadier_Soldiers.md`.

## 4. Connect your particles, sounds, and animations

From the component, bind these Blueprint dispatchers:

- `On Shot Fired`: spawn muzzle flash at `Trace Start`, tracer toward `Trace End`, impact effect from `Hit Result`, and play the firing montage.
- `On Reload Started`: play reload montage and sound.
- `On Reload Finished`: finish or reset weapon animation state.
- `On Combat Started`: set an Animation Blueprint `In Combat` variable.
- `On Combat Ended`: clear the Animation Blueprint combat variable.
- `On Death`: play team-specific death audio, award score, or update match logic.
- `On Ragdoll Started`: optional extra blood, voice, or dropped-weapon effects.
- `On Respawned`: reset visible weapon state and Animation Blueprint variables.

The plugin performs the trace and damage. Your existing weapon particles and sounds remain fully controlled in Blueprint.


## 5. Automatic bullet mesh and ground blood

Select the combat component and expand **Renegade NXT | Combat Visuals**.

### Bullet mesh

1. Enable `Enable Bullet Mesh Visual`.
2. Assign a Static Mesh to `Bullet Mesh`.
3. Set `Bullet Mesh Scale` so it reads clearly without appearing oversized.
4. The plugin aligns local +X to the shot path. Adjust `Bullet Mesh Rotation Offset` if your mesh uses another forward axis.
5. Use `Preview Bullet Mesh Visual` from Blueprint while testing. Supply any two world locations.

The moving mesh is a pooled cosmetic representation of the existing hitscan shot. It has no collision and never applies damage a second time. `Trace Start` is still taken from the weapon's configured muzzle socket, and `Trace End` is the actual hit point or maximum-range end.

### Ground blood

1. Enable `Enable Ground Blood Splatter`.
2. Add your blood decal materials to `Ground Blood Decal Materials`. Each material must use the **Deferred Decal** material domain.
3. Make sure the landscape/floor blocks `Ground Blood Trace Channel`. `Visibility` is the default.
4. Set size, depth, life, fade, surface offset, and random spawn chance.
5. Leave `Delay Ground Blood Until Bullet Arrives` enabled for synchronised impact timing.
6. Use `Preview Ground Blood At Location` to test a world position without firing.

For Niagara or a packaged multi-component blood effect, make a Blueprint Actor containing the effect and assign it to `Ground Blood Effect Actor Class`. The plugin forces spawned effect actors to remain local-only. Assigning both decal materials and an effect actor intentionally spawns both.

`On Ground Blood Spawned` provides the original bullet hit, the ground hit, and the spawned decal component for optional extra Blueprint logic.

### Large-battle recommendation

For approximately 40 automatic-rifle soldiers:

- Bullet Visual Pool Size: `4-6`
- Bullet Visual Speed: `25000-35000`
- Bullet Visual Casts Shadow: `false`
- Ground Blood Life Seconds: `12-20`
- Ground Blood Fade Seconds: `3-5`
- Minimum Seconds Between Ground Blood: `0.15-0.25` when many decals accumulate


## 6. Combat-facing rotation lock

In the component's **Renegade NXT | Combat Facing** category:

- Enable `Lock Combat Rotation To Current Target` to keep the soldier's body yaw fixed toward its active enemy while advancing, retreating, or strafing.
- Set `Combat Target Rotation Speed Degrees` to control turning speed. The default is `1080` degrees per second. Set it to `0` for instant facing.
- Use the Blueprint node `Set Combat Rotation Lock Enabled` when this behaviour must be changed at runtime. Call it on the server.

The plugin temporarily overrides `Orient Rotation to Movement`, `Use Controller Desired Rotation`, and `Use Controller Rotation Yaw` only during combat. Their original Blueprint values are restored when the target is cleared, the soldier dies, automatic combat stops, or spline movement resumes.

This allows the AI to run backward or strafe sideways while its body remains aimed at the current enemy. Directional locomotion or strafe animations are recommended for the best visual result.

## 7. Required ragdoll setup

The Character Skeletal Mesh must have a valid Physics Asset. The project should contain the standard `Ragdoll` collision profile.

On death the plugin:

1. Stops AI movement and combat.
2. Disables Character Movement.
3. Disables capsule collision if configured.
4. Enables mesh physics and the `Ragdoll` collision profile.
5. Applies an impulse in the bullet direction at the hit bone.
6. Waits for `Respawn Delay Seconds`.
7. Disables physics, reattaches the mesh, restores its original relative transform and collision, teleports the same actor to its respawn transform, restores health, and restarts combat.

The actor is not destroyed.

## 8. Respawn choices

Inside `Health And Respawn`, choose:

- `Original Actor Transform`: return to where the actor was originally placed/spawned.
- `Random Matching Team Spawn Point`: place `Renegade Soldier Spawn Point` actors in the map and assign matching `GDI` or `Nod` Team Id values.
- `Custom Transform`: use one transform stored directly in the component settings.
- `Custom Transform List`: choose First, Random, or Sequential from `Custom Respawn Transforms`.
- `Actor With Respawn Tag`: respawn at a level actor carrying `Respawn Actor Tag` (default `PlayerRespawn`).
- `Runtime Transform Override`: use a transform supplied by the server through `Set Runtime Respawn Transform`.

Higher-priority matching team spawn points are selected before lower-priority points. `Respawn Vertical Offset` lifts the capsule after location selection, and `Apply Respawn Rotation To Controller` aligns a player's view with the spawn rotation.

## 9. Player-controlled combat

For the player Character Blueprint:

1. Enable `Player Controlled Combat`.
2. Keep `Register As Combat Target` enabled so enemy AI can attack the player.
3. Configure `Inline Player Automatic Rifle Settings` and `Inline Player Pistol Settings`, or assign two Player Weapon Profiles.
4. Connect Enhanced Input:
   - Rifle Started -> `Player Start Automatic Rifle Fire`
   - Rifle Completed/Canceled -> `Player Stop Automatic Rifle Fire`
   - Pistol Started -> `Player Fire Pistol`
   - Reload Started -> `Player Reload`
5. Assign the same muzzle Scene Component used by the bullet visual. Player mode uses it for the close-cover obstruction trace and bullet visual origin.

See `Player_Combat.md` for networking, HUD events, weapon switching, and all respawn modes.

## 10. Multiplayer

Place and possess soldiers on the server as normal. Target selection, movement decisions, firing, damage, death, and respawn are server authoritative. Shot/reload/ragdoll/respawn cosmetic events are multicast so Blueprint effects can run on clients.

## v1.1.1 ragdoll validation

1. Select the soldier Skeletal Mesh Component that contains the Physics Asset.
2. For modular soldiers, add the Component Tag `CombatRagdollMesh`.
3. On the Renegade Soldier Combat Component, set `Ragdoll Mesh Component Tag` to `CombatRagdollMesh`.
4. Temporarily call `Validate Ragdoll Setup` from Begin Play and Print String the failure output.
5. Open the assigned Physics Asset and use its Simulate control. If it does not collapse in that editor, the Physics Asset itself needs valid bodies and constraints.


## Anti-Stretch Ragdoll Settings (v1.1.2)

Recommended defaults:

- `Resolve Leader Pose Mesh For Ragdoll`: true
- `Use Ragdoll Root Bone`: true
- `Ragdoll Root Bone`: `spine` for the current Renegade NXT soldier Physics Assets
- `Include Ragdoll Root Bone`: true
- `Disable Secondary Animation During Ragdoll`: true

For modular characters using Set Leader Pose Component, put the `CombatRagdollMesh` component tag on the leader/body mesh. Do not independently simulate a head, clothing, hands, or other follower component.

## Bullet visual spawn origin

Add a Scene Component named `BulletSpawn` to the soldier Blueprint and attach it to the gun or weapon socket. Position it at the barrel. In the combat component, assign that component to **Renegade NXT > Combat Visuals > Bullet Spawn > Bullet Visual Spawn Component**.

For dynamically attached weapons, call **Set Bullet Visual Spawn Component** on Begin Play after the weapon is attached. The supplied component must be owned by the same soldier actor.

## v1.7.0 Harvester quick setup

Add `Renegade Harvester Combat Component` to the GDI/Nod Harvester Character BP, keep the existing Spline AI Character vehicle components, assign `HarvesterTarget`, `HarvesterTurret`, optional `HarvesterGunPitch`, and `HarvesterMuzzle` Scene Components/tags, then configure health/turret/economy/EVA/destruction. On the Refinery Building Combat Component enable the Harvester spawner and assign that Character class. Full setup is in `Harvester_Warfare.md`.


## v1.7.2 Harvest Point + respawn route hookup

1. Place `Renegade Harvest Point` in the Tiberium field.
2. On the placed GDI/Nod Refinery's Building Combat Component, set `Harvester Harvest Point` to that level actor, or leave it empty and enable `Auto Find Harvester Harvest Point`.
3. Add/tag `HarvesterSpawn` and `HarvesterDock` Scene Components on the Refinery Blueprint.
4. Bind `On Harvester Spawned` to the initial outbound Spline AI route start.
5. Bind `On Harvester Respawned` to the same outbound start/reacquire logic for replacement Harvesters.
6. On the Harvester Combat Component, tune `Cycle` timings: Harvest Arrival Delay, Harvest Duration, Post Harvest Departure Delay, dock approach/acceptance distances, Unload Start Delay, Unload Duration, and Post Unload Departure Delay.
7. Bind `On Return To Refinery Route Requested` to choose/start your return spline and `On Outbound Harvest Route Requested` to choose/start the next outbound spline.

The Harvester automatically leaves the spline for the final field/dock approach once it enters the exposed approach radius; no custom final-approach Blueprint `AI MoveTo` is required.
