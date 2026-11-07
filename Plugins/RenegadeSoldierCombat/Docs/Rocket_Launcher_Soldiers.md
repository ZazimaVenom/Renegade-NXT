# Rocket Launcher Soldiers and Players — v1.6.2

This update adds a dedicated infantry rocket-launcher weapon path to `Renegade Soldier Combat Component`. It uses the existing team registry, targeting, combat movement, health, damage, building warfare, ragdoll, respawn, spline bridge, and multiplayer authority model.

## 1. Create the soldier

1. Duplicate a known-working GDI or Nod soldier Character Blueprint.
2. Keep `Renegade Soldier Combat Component` on the Character.
3. Set `Team Id` to `GDI` or `Nod`.
4. Keep the Character server-spawned/possessed and, for multiplayer, enable Actor replication and movement replication as required by the project.

## 2. Add the launcher muzzle

1. Add a **Scene Component** to the soldier Blueprint.
2. Attach it to the launcher mesh, hand socket, or weapon socket.
3. Position its origin at the launcher barrel opening and orient it consistently with the weapon.
4. Name or Component Tag it `RocketMuzzle`, or select it explicitly under:

`Renegade NXT > Rocket Launcher > Muzzle > Rocket Launcher Muzzle Component`

Use `Rocket Launcher Muzzle Relative Offset` for final local-space correction. Resolution order is runtime override, exact component picker, `RocketMuzzle` tag fallback, then the normal weapon muzzle fallback.

Runtime Blueprint nodes:

- `Set Rocket Launcher Muzzle Component`
- `Clear Rocket Launcher Muzzle Component`
- `Get Rocket Launcher Muzzle Component`
- `Get Rocket Launcher Muzzle Location`

## 3. Select the weapon

Either edit `Inline Weapon Settings` or create a reusable `Renegade Weapon Profile` Data Asset.

Set:

`Weapon Class = Rocket Launcher`

The Blueprint library node `Make Rocket Launcher Preset` returns a starting profile with:

- Damage Per Shot: `125`
- Maximum Range: `6000 cm`
- One rocket per magazine
- Reload: `2.75 s`
- Rate: `38 RPM`
- Base spread: `0.65 degrees`
- Critical-bone damage disabled by default

The nested `Rocket Launcher > Cadence` values override the generic magazine, reload, and RPM values while `Override Standard Magazine And Cadence` is enabled.


## Large-building impact and splash resolution (v1.6.2)

Rocket explosions do **not** measure a building only from its AI target point. Large structures such as the Helipad can have roof/edge collision several metres away from that point.

For buildings, radial distance is measured from the explosion to the closest point on the registered building's colliding Actor bounds. The bounds include the building Actor plus recursively attached and Child Actor geometry. This means a rocket that strikes or explodes beside a physical part of a large building can damage it even when its configured target point is outside the explosion radius.

If a rocket directly strikes multipart/child geometry and the hit Actor does not expose the Building Combat Component through the normal owner/attachment hierarchy, the impact location is checked against registered building bounds and recovered to the correct building owner. Recovered direct hits receive the normal `Direct Hit Damage Multiplier`.

Building damage continues through Unreal point damage. The Building Combat Component's existing damage listener therefore handles health loss, low-health warnings, destruction, and team-aware EVA under-attack announcements exactly as it does for rifle damage.

For testing, enable `Draw Debug Rocket`. A successful building explosion writes a log entry containing the resolved building name, distance from the impact to its bounds, applied damage, and whether it was classified as a direct hit.

## Player launcher setup (v1.6.1)

Enable `Player Controlled Combat`, then configure either `Player Rocket Launcher Profile` or `Inline Player Rocket Launcher Settings` under `Player Combat > Weapons`. Assign the same `Rocket Launcher Muzzle Component` used by NPC launchers to a Scene Component at the player's launcher barrel.

Enhanced Input options:

- `Player Fire Rocket Launcher` selects the launcher and fires one rocket on `Started`.
- `Select Player Rocket Launcher` selects it without firing; the existing `Player Start Fire` or `Player Fire Once` nodes then launch one rocket.
- `Player Reload` reloads the independent launcher magazine.
- `Get Player Weapon Ammo` with `Rocket Launcher`, or `Current Rocket Launcher Ammo`, supplies HUD ammunition.

Built-in input defaults to keyboard `3` and gamepad D-Pad Right for launcher selection. The fire key remains Left Mouse Button / Right Trigger.

The player camera determines the intended aim point, including the existing lock-on assisted aim location when enabled. A second authoritative trace from the assigned launcher muzzle prevents third-person firing through nearby cover. Player rocket requests are reliable; impact timing, splash damage, buildings, teams, effects, and multicast presentation use the same system as NPC rockets.

## 4. Rocket flight

- `Projectile Speed` controls both authoritative arrival time and local visual movement. Default: `4200 cm/s`.
- `Maximum Flight Seconds` caps extreme travel time. Default: `5.0 s`.
- The server performs the camera/AI aim trace, then confirms a second path from the selected launcher muzzle so nearby walls block the launch correctly.
- Damage is queued and applied only when the calculated flight time completes.
- A rocket already in flight remains pending if its firing soldier dies before impact.

The current rocket follows a confirmed straight path to the launch-time impact point. It does not home after launch.

## 5. Explosion and damage

`Damage Per Shot` is the maximum splash damage inside `Explosion Inner Radius`.

Recommended starting values:

- Explosion Inner Radius: `160 cm`
- Explosion Outer Radius: `475 cm`
- Minimum Explosion Damage Multiplier: `0.20`
- Direct Hit Damage Multiplier: `1.20`
- Use Explosion Occlusion: enabled
- Explosion Occlusion Trace Channel: `Visibility`
- Allow Self Damage: disabled

Damage falls linearly from full damage at the inner radius to the minimum multiplier at the outer radius. A directly hit target receives the direct-hit multiplier. Explosion processing supports registered soldiers and `Renegade Building Combat Component` buildings.

Team rules use the weapon's existing `Allow Friendly Fire` value. With friendly fire disabled, allied GDI/Nod soldiers and allied buildings are ignored. Self damage has its own explicit switch.

When explosion occlusion is enabled, a wall blocking the selected trace channel prevents non-direct splash damage behind it. Ensure level collision blocks that channel.

## 6. AI behaviour

- `Predict Target Movement` leads the target using its velocity and estimated rocket flight time.
- `Maximum Target Lead Seconds` limits extreme prediction.
- `Minimum AI Firing Distance` prevents unsafe close-range launches.
- The same safe distance is passed into the existing combat-movement logic, causing the rocket soldier to retreat before trying again.
- Existing maximum range, line of sight, target-team, building-target policy, strafe, and spline pause/resume behaviour remains active.

For narrow maps, start with `Minimum AI Firing Distance = 500–700 cm`. Raise it when soldiers damage nearby cover too often or when explosion visuals obscure the shooter.

## 7. Mesh and effects

Under `Rocket Launcher > Visual` assign:

- Rocket Mesh
- optional Rocket Material Override
- Rocket Mesh Scale
- Rocket Mesh Rotation Offset
- Rocket Visual Muzzle Forward Offset
- Rocket Visual Impact Stop Short Distance
- Rocket Visual Pool Size
- Rocket Visual Casts Shadow

The plugin assumes local **+X** is the rocket mesh's forward axis. Use `Rocket Mesh Rotation Offset` when the asset points along another axis.

Optional cosmetic Blueprint Actor classes:

- Rocket Flight Effect Actor Class — moved with the rocket; suitable for Niagara smoke/trail effects
- Rocket Muzzle Effect Actor Class
- Rocket Impact Effect Actor Class

These helper actors are spawned locally from the reliable multicast and are explicitly non-replicating to avoid duplicates. Their internal Niagara, audio, lights, or decals should therefore be cosmetic only.

Assign `Rocket Fire Sound` and `Rocket Impact Sound` directly when separate Blueprint effect actors are not needed.

## 8. Blueprint events and preview

- `On Rocket Launched` supplies launch location, authoritative impact location, and flight seconds on each listening machine.
- `On Rocket Impacted` fires locally when the visual reaches the impact point.
- `Preview Rocket Launcher Visual` launches the configured local visual toward a supplied world location without damage.

The preview requires the active Weapon Class to be `Rocket Launcher`.

## 9. Multiplayer behaviour

- AI target choice, fire permission, path confirmation, flight timer, splash filtering, and damage are server-authoritative.
- The launch uses a reliable multicast because rockets are low-frequency and visually important.
- Each client creates its own collision-free pooled rocket mesh and optional cosmetic effect actors.
- Health, death, ragdoll, building state, and other established plugin replication remain unchanged.
- The soldier Actor and its movement still need the project's normal replication configuration.

## 10. Validation checklist

- Confirm the muzzle Scene Component resolves and the rocket starts outside the launcher barrel.
- Fire at a nearby wall and confirm the rocket stops at the wall instead of passing through it.
- Verify damage occurs when the rocket arrives, not at launch.
- Verify inner-radius, outer-radius, falloff, and direct-hit damage.
- Put an enemy behind a solid wall and confirm occlusion blocks splash damage.
- Verify allies are protected when friendly fire is disabled.
- Verify the rocket soldier retreats inside `Minimum AI Firing Distance`.
- Test a moving target and compare prediction enabled/disabled.
- Fire at a building child mesh and confirm the owning building receives damage.
- Kill the shooter while a long-range rocket is in flight and confirm the impact still resolves.
- Test listen-server and LAN clients for one rocket mesh, one launch/impact presentation, and server-synchronised damage.
