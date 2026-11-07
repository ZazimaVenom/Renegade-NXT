# Grenadier Soldiers — v1.8.0

Renegade Soldier Combat v1.8.0 adds a first-class **Grenade Launcher** weapon class for AI Grenadier soldiers. The system is designed for the GDI Grenadier role from classic *Command & Conquer: Renegade* while also exposing the impact and timed-bounce behaviours associated with *Renegade X*.

The implementation is server-authoritative, uses a real gravity-driven ballistic trajectory, performs swept collision to prevent tunnelling, supports radial damage against infantry / Harvesters / buildings, and keeps projectile meshes/effects cosmetic and pooled for large battles.

> This update adds the Grenadier as an **AI soldier weapon class**. It deliberately does not add a fourth built-in player inventory slot, so the confirmed player rifle / pistol / rocket input and replication paths remain backward-compatible.

## 1. Fast Blueprint setup

On the Grenadier Character Blueprint:

1. Add or reuse a `Renegade Soldier Combat Component`.
2. Configure `Team Id` exactly as you do for rifle and Rocket Officer soldiers.
3. Under the active weapon settings, set `Weapon Class = Grenade Launcher`.
4. Use the Blueprint-pure `Make Grenade Launcher Preset` node if you want the supplied Renegade-style starting values.
5. Add a Scene Component at the actual launcher barrel and either:
   - select it in **Renegade NXT > Grenade Launcher > Muzzle > Grenade Launcher Muzzle Component**, or
   - give the component the tag `GrenadeMuzzle`.
6. Assign the projectile mesh, optional material, muzzle / flight / impact effects, and sounds under `Weapon > Grenade Launcher`.
7. Leave `Detonation Mode = Impact` for normal Grenadier primary-fire behaviour.
8. Enable `Draw Debug Grenade` only while validating the trajectory/collision setup.

The component continues to own targeting, combat movement, route pause/resume, damage, death, ragdoll and respawn. A Grenadier therefore behaves like the existing combat soldiers until it reaches firing logic; only the weapon delivery is different.

## 2. Renegade-style default preset

`Make Grenade Launcher Preset` starts with:

- `Weapon Class`: Grenade Launcher
- `Damage Per Shot`: 80 radial base damage
- direct-impact multiplier: 1.1875, giving 95 total direct-impact damage from the preset
- magazine: 8 grenades
- fire interval: 0.75 seconds (`80 RPM` in the plugin's cadence field)
- reload: 3.2 seconds
- projectile speed: 3000 cm/s
- gravity scale: 1.0
- outer splash radius: 300 cm
- impact detonation
- no critical/headshot multiplier
- no distance damage falloff
- Renegade-style self splash damage enabled by default (AI safe spacing remains 650 cm)

Every value is exposed. Treat the preset as a gameplay-faithful starting point rather than a hard-coded balance rule.

## 3. Ballistic firing and AI lead

Grenades are not hitscan and are not simulated as straight rockets.

For every shot the server:

1. resolves the configured Grenadier muzzle;
2. gets the current target aim point;
3. optionally predicts target movement;
4. analytically solves a valid fixed-speed ballistic launch velocity under the world's current gravity;
5. chooses the low or high arc according to `Use High Arc`;
6. applies the configured AI spread to the intended impact point;
7. launches an authoritative grenade state;
8. advances the projectile using sub-stepped gravity and sphere sweeps until detonation.

`Predict Target Movement`, `Maximum Target Lead Seconds`, and `Target Lead Iterations` are exposed under **Grenade Launcher > AI**. Target lead is refined against the solved flight time instead of using the straight-line estimate used by rockets.

If the target is physically unreachable with the configured speed/gravity/lifetime, the AI does not fabricate a hit. It waits and retries through the normal combat cadence.

### Low arc / high arc

`Use High Arc = false` is the recommended Grenadier default. It gives a fast, recognizable grenade arc without making normal firefights excessively indirect.

Enable `Use High Arc` for custom classes or maps that need a steeper trajectory. Line-of-sight requirements still follow the component's normal Targeting settings; the high-arc option does not automatically make AI intentionally fire over opaque cover.

Very steep high-arc solutions naturally remain airborne longer. If you deliberately use high arc at long range, increase `Maximum Flight Seconds` enough for the selected trajectory; otherwise the solver correctly rejects a shot whose calculated flight time would outlive the projectile.

## 4. Authoritative projectile collision

Live grenades are simulated on the authority/server.

Important exposed settings:

- `Projectile Speed`
- `Gravity Scale`
- `Maximum Flight Seconds`
- `Collision Radius`
- `Maximum Simulation Step Seconds`

Collision uses a swept sphere rather than only testing a point at the end of each frame. The simulation is also sub-stepped, making fast grenades much less likely to pass through narrow level geometry or character capsules during frame spikes.

The projectile uses the weapon's normal `Trace Channel` and can additionally use the existing `Combat Target Object Type` fallback. The owner's actor/component hierarchy is ignored so a grenade cannot immediately collide with the soldier that launched it.

## 5. Detonation modes

### Impact — recommended Grenadier mode

`Impact` explodes on the first blocking projectile collision. This is the normal setting for Grenadier NPCs and models the familiar impact grenade behaviour.

### Timed Bounce — optional Renegade X style

`Timed Bounce` keeps the grenade alive after impact and detonates when the exposed fuse expires.

The following controls are available:

- `Timed Fuse Seconds`
- `Bounce Restitution`
- `Bounce Friction`
- `Minimum Bounce Speed`
- `Maximum Bounces`
- optional bounce effect Actor
- optional bounce sound

Very slow grenades are deliberately put into a settled state rather than being allowed to micro-bounce forever. The server multicasts bounce corrections so local cosmetic grenade meshes remain visually synchronized with the authoritative trajectory.

## 6. Explosion and damage

Grenade explosions reuse the same team-aware combat philosophy as the existing rocket system while keeping their own tuning group.

Exposed controls include:

- `Explosion Inner Radius`
- `Explosion Outer Radius`
- `Minimum Explosion Damage Multiplier`
- `Direct Hit Damage Multiplier`
- `Use Explosion Occlusion`
- `Explosion Occlusion Trace Channel`
- `Allow Self Damage`
- the weapon-level `Allow Friendly Fire`
- `Damage Type Class`

The explosion evaluates registered:

- Soldier Combat Components
- Harvester Combat Components
- Building Combat Components

Large Harvesters and buildings use their resolved bounds/target geometry for radial-distance evaluation rather than relying only on the Actor origin. This prevents large structures from incorrectly escaping splash damage because their pivot is far from the impact.

When explosion occlusion is enabled, solid world geometry can shield targets from non-direct splash damage.

## 7. Safe AI spacing

`Minimum AI Firing Distance` gives Grenadiers a configurable explosive safety range.

Inside that distance, the combat movement system can prefer retreat/spacing behaviour and the firing loop refuses to launch another grenade until the target is outside the safe distance. Manual/player weapon behaviour is not changed by this NPC setting.

The existing combat movement, target switching, soldier preference, Harvester targeting, building targeting, and spline pause/resume systems remain intact.

## 8. Muzzle configuration

The Grenadier has its own muzzle path so it does not depend on rifle or rocket presentation setup.

Resolution order:

1. runtime component assigned through `Set Grenade Launcher Muzzle Component`;
2. exact Details-panel `Grenade Launcher Muzzle Component` reference;
3. first Scene Component with the configured `Grenade Launcher Muzzle Component Tag` (default `GrenadeMuzzle`);
4. normal combat muzzle fallback.

`Grenade Launcher Muzzle Relative Offset` is transformed in the chosen Scene Component's local space.

Blueprint helpers:

- `Set Grenade Launcher Muzzle Component`
- `Clear Grenade Launcher Muzzle Component`
- `Get Grenade Launcher Muzzle Component`
- `Get Grenade Launcher Muzzle Location`

Runtime components must belong to the same soldier Actor. Invalid cross-Actor assignments are rejected with a warning.

## 9. Blueprint ballistic query

`Calculate Grenade Launch Velocity To Location` is Blueprint Pure.

Inputs / outputs:

- `Target Location`
- return value: whether a physically valid arc was found
- `Out Launch Velocity`
- `Out Flight Seconds`

This is useful for custom animation anticipation, debug widgets, custom trajectory previews, or deciding whether a Blueprint-specific target point is reachable. It uses the currently active Grenade Launcher settings and configured Grenadier muzzle.

## 10. Visuals and audio

Projectile presentation is intentionally separate from authoritative damage.

Exposed assets/settings:

- Grenade static mesh
- optional material override
- mesh scale
- mesh rotation offset
- orient mesh to velocity
- cosmetic spin rate
- grenade visual pool size
- visual shadow toggle
- flight effect Actor class
- muzzle effect Actor class + lifetime
- impact effect Actor class + lifetime
- bounce effect Actor class + lifetime
- fire / impact / bounce sounds and volume multipliers

The grenade mesh pool avoids spawning/destroying a new static-mesh component for every shot. Flight effect Actors remain local cosmetic helpers and are forced non-replicating because launch/bounce/explosion state is already distributed by the combat component.

## 11. Blueprint events

The component exposes:

- `On Grenade Launched`
  - Grenade Id
  - Launch Location
  - Initial Velocity
- `On Grenade Bounced`
  - Grenade Id
  - Bounce Location
  - Impact Normal
  - New Velocity
- `On Grenade Exploded`
  - Grenade Id
  - Impact Location
  - Impact Normal

The Grenade Id lets Blueprint presentation code associate a bounce or explosion with the correct active round when several Grenadiers are firing at once.

The normal combat events such as reload, health, death, target changes and respawn continue to work unchanged.

## 12. Multiplayer model

Damage and projectile collision are authoritative.

- The server solves and advances live grenade trajectories.
- Launch, bounce and explosion presentation are reliable multicasts because Grenadier shots are low-frequency, gameplay-significant events.
- Each listening machine runs a lightweight local cosmetic grenade visual between authoritative corrections.
- Damage is never decided by the cosmetic mesh.
- Dedicated servers do not need to create local visual projectile components/effects.

This keeps grenade hits deterministic from the gameplay authority's perspective while avoiding full replicated projectile Actors for every Grenadier round.

## 13. Recommended first test

Create one GDI Grenadier and one hostile rifle soldier on flat ground:

1. Set `Weapon Class = Grenade Launcher`.
2. Assign the actual barrel Scene Component.
3. Leave `Detonation Mode = Impact`.
4. Enable `Draw Debug Grenade`.
5. Confirm the grenade launches from the barrel, visibly arcs, hits near the target, and detonates.
6. Confirm nearby hostiles take splash damage and friendlies do not when Friendly Fire is disabled.
7. Move the target sideways and confirm ballistic lead visibly adjusts.
8. Place a wall between the explosion and a second target and confirm explosion occlusion protects the hidden target.
9. Attack a Harvester and a Building and confirm splash/direct damage reaches their combat components.
10. Empty all eight rounds and confirm the 3.2-second reload before firing resumes.
11. Repeat in listen-server multiplayer and confirm launch/bounce/explosion presentation matches on the client.

Then switch to `Timed Bounce` and validate bounce/fuse behaviour separately.

## 14. Backward compatibility

v1.8.0 intentionally preserves the existing reflected enum order for Automatic Rifle, Pistol, Rocket Launcher and Custom. `Grenade Launcher` is appended after the legacy values so existing serialized Weapon Class values do not shift.

The update does not alter:

- player rifle/pistol/rocket inventory slots;
- existing Rocket Launcher settings or travel/damage path;
- Harvester ground-alignment roll fix;
- Harvester movement, harvesting, turret, wreck or economy systems;
- building health/defence/EVA systems;
- existing rifle/pistol/custom hitscan behaviour.
