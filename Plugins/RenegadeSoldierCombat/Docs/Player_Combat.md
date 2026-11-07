# Player Combat Setup — Automatic Rifle, Pistol, and Rocket Launcher

Version 1.3.2 lets the same `Renegade Soldier Combat Component` run either the established automatic AI combat or manual player combat.

## 1. Enable player mode

Add the component to the player Character Blueprint and configure:

- `Player Controlled Combat`: **true**
- `Register As Combat Target`: **true** so hostile GDI/Nod AI can acquire and attack the player
- `Auto Combat Enabled`: ignored while player mode is enabled
- `Team Id`: the player's faction, such as `GDI` or `Nod`

Player mode disables automatic target acquisition, automatic firing, AI combat movement, spline interruption, and target-facing control for that component. Health, damage reception, teams, bullet visuals, ground blood, ragdoll, death, and same-actor respawning remain active.

## 2. Configure all three weapons

Under **Renegade NXT > Player Combat > Weapons**, either:

- leave `Use Player Weapon Profiles` disabled and edit `Inline Player Automatic Rifle Settings`, `Inline Player Pistol Settings`, and `Inline Player Rocket Launcher Settings`, or
- enable it and assign separate `Renegade Weapon Profile` Data Assets.

Each weapon has independent magazine ammunition. `Current Automatic Rifle Ammo`, `Current Pistol Ammo`, `Current Rocket Launcher Ammo`, `Current Magazine Ammo`, and `Active Player Weapon` are exposed for UI.

## 3. Enhanced Input connections

The plugin does not force a particular Input Mapping Context, allowing it to work with the project's existing Enhanced Input setup. Connect Input Action events to these component nodes:

### Recommended direct nodes

- Automatic rifle `Started` -> `Player Start Automatic Rifle Fire`
- Automatic rifle `Completed` -> `Player Stop Automatic Rifle Fire`
- Automatic rifle `Canceled` -> `Player Stop Automatic Rifle Fire`
- Pistol `Started` -> `Player Fire Pistol`
- Rocket launcher `Started` -> `Player Fire Rocket Launcher`
- Reload `Started` -> `Player Reload`

### Generic alternative

- `Select Player Automatic Rifle`, `Select Player Pistol`, or `Select Player Rocket Launcher`
- `Player Start Fire`
- `Player Stop Fire`
- `Player Fire Once`

The automatic rifle repeats at its configured rounds per minute while held. The pistol convenience node selects the pistol and sends one shot per press. The rocket convenience node selects the launcher and sends one reliable player rocket request per press.

## 4. Player aim and authoritative shooting

The owning client submits its current controller/camera view ray. The server validates the view origin, aim angle, fire cadence, active weapon, reload state, and ammunition.

The server first traces the camera aim ray, then performs a second trace from the configured muzzle location to that aim point. This prevents a third-person camera from shooting through nearby walls or cover.

Rifle and pistol damage remains immediate hitscan. Their pooled bullet mesh travels cosmetically from `Bullet Visual Spawn Component` to the confirmed server trace end. Rocket Launcher damage is delayed until the replicated travelling rocket reaches the server-confirmed impact point, then uses the configured radial explosion and direct-hit rules.

## 5. Muzzle setup

Add a Scene Component to the player Character Blueprint, attach it to the current weapon's muzzle, and assign it to:

`Renegade NXT > Combat Visuals > Bullet Spawn > Bullet Visual Spawn Component`

For separately equipped rifle and pistol actors/components, use `On Player Weapon Changed` to call `Set Bullet Visual Spawn Component` with the newly equipped weapon's muzzle component. For the launcher, assign or update `Rocket Launcher Muzzle Component` with `Set Rocket Launcher Muzzle Component`.

## 6. Weapon and UI events

- `On Player Weapon Changed`: update weapon meshes, Animation Blueprint state, crosshair, and HUD
- `On Player Ammo Changed`: update the correct weapon magazine counter
- `On Shot Fired`: play muzzle flash, firing sound, montage, recoil, and impact effects
- `On Reload Started` / `On Reload Finished`: drive reload animations and HUD state
- `Is Reloading`: query the current reload state

## 7. Player respawn locations

The player uses the same actor after death. Under `Health And Respawn > Respawn`, choose:

- `Original Actor Transform`
- `Random Matching Team Spawn Point`
- `Custom Transform`
- `Custom Transform List`
- `Actor With Respawn Tag`
- `Runtime Transform Override`

Custom lists support First, Random, or Sequential selection. Tagged mode searches level actors carrying `Respawn Actor Tag`, which defaults to `PlayerRespawn`.

Runtime Blueprint nodes:

- `Set Runtime Respawn Transform`
- `Clear Runtime Respawn Transform`
- `Set Custom Respawn Transforms`
- `Add Custom Respawn Transform`
- `Clear Custom Respawn Transforms`

`Respawn Vertical Offset` can lift the capsule above the floor. `Apply Respawn Rotation To Controller` aligns the player's view with the selected spawn transform. `On Respawn Transform Selected` supplies the final transform to Blueprint.

## 8. Multiplayer notes

Rifle and pistol shot requests use an unreliable server RPC so held automatic fire cannot create a delayed reliable-RPC backlog. Rocket shots use a separate reliable request because they are low-frequency and visually important. Weapon switching and reload requests are reliable. The server remains authoritative for cadence, ammo, traces, rocket flight timing, explosions, damage, death, and respawn.

## Built-in keyboard, mouse and gamepad input plus polished aiming (v1.3.2)

Enable `Player Controlled Combat`, then leave `Player Input -> Enable Built-In Input` enabled. The component polls the owning local Player Controller directly, so no Input Action or Mapping Context assets are required.

Default bindings:

- Fire: Left Mouse Button / Gamepad Right Trigger
- Aim: Right Mouse Button / Gamepad Left Trigger
- Reload: R / Gamepad Face Button Left
- Automatic rifle: 1 / Gamepad D-Pad Up
- Pistol: 2 / Gamepad D-Pad Down
- Rocket launcher: 3 / Gamepad D-Pad Right
- Look: Mouse X/Y / Gamepad Right Stick

Every key, trigger threshold, look sensitivity, gamepad turn speed, dead zone and Y inversion option is exposed under `Player Combat -> Built-In Input`.

Aim presentation is now built into the plugin rather than being only a state/event. While aiming, the component can:

- keep Character yaw aligned to the camera/controller forward direction,
- disable orient-to-movement so strafing does not turn the body away,
- use controller desired rotation and controller yaw,
- smoothly interpolate the selected Camera Component to `Aimed Field Of View`,
- restore the exact original movement flags and FOV on release, death, respawn, or shutdown.

Under `Player Combat -> Aiming`, leave `Enable Aim Presentation`, `Rotate Character To Camera Forward`, and `Zoom Camera While Aiming` enabled. Set `Player Aim Camera Component` when the Character owns multiple cameras; otherwise the plugin auto-finds the active camera and can fall back to PlayerCameraManager.

`On Player Aim Changed` remains available for weapon raise/lower animation, crosshair changes, camera shoulder offsets, and other Blueprint presentation. `Get Player Aim Alpha` supplies a smooth 0-to-1 transition value. Aiming also applies `Aimed Spread Multiplier` to the final player weapon spread.

Disable `Enable Built-In Input` when an existing Enhanced Input Blueprint already calls `Player Start Fire`, `Player Stop Fire`, `Player Set Aiming`, `Player Reload` and the weapon-selection nodes; this prevents duplicate look or fire input.


## Shot hit debugging (v1.3.3)

Under `Combat Visuals > Shot Debug`, enable `Draw Debug Shot Line` to display the exact server-authoritative trace used for damage:

- Green: a combat component was resolved and damage was submitted.
- Orange: the shot hit blocking geometry or a non-hostile/non-combat actor.
- Red: the shot reached maximum range without a blocking hit.

Each player weapon also has `Use Combat Target Object Trace Fallback`, enabled by default, with `Combat Target Object Type` set to `Pawn`. The plugin compares this object trace with the normal weapon-channel trace and keeps the closest hit, so walls still block shots while Character capsules can register even when they do not block Visibility.

## Editing player defaults while player mode is disabled

From v1.3.4 onward, all built-in keyboard, mouse, gamepad, sensitivity, dead-zone, aiming, FOV, rotation, and camera settings remain editable even when `Player Controlled Combat` is disabled. This allows shared parent Character Blueprints to be configured before individual player child classes enable player mode. The Boolean still controls runtime activation.


## 12. TPS lock-on targeting (v1.5.1)

The component can hold-lock living hostile soldiers while preserving the same authoritative shooting path. The default dedicated lock controls are `Left Alt` and `Gamepad Left Shoulder / LB`; normal free aim remains on Right Mouse Button and Left Trigger. Holding lock-on automatically enters the full aim presentation, and independent aim-source tracking prevents either input from cancelling the other. Enhanced Input can call `Player Start Lock On` and `Player Stop Lock On`. Assign the exposed indicator texture and tune acquisition, obstruction grace, tracking speed, shot assistance, and switching under `Player Lock-On`. See `Docs/Player_Lock_On.md` for the complete setup.
