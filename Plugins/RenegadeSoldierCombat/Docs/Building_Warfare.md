# Building Warfare Setup — v1.4.4

`Renegade Building Combat Component` turns an existing Blueprint building actor into a replicated GDI/Nod combat objective. The same component is used by the Refinery, Barracks, Tiberium Silo, Hand of Nod, Weapons Factory, Power Plant, Helipad, Repair Pad, Airstrip, Obelisk, Advanced Guard Tower, and custom structures.

## Basic setup for every building

1. Open the building Blueprint.
2. Add **Renegade Building Combat Component**.
3. Set **Team Id** to `GDI` or `Nod`.
4. Select the matching **Building Type**.
5. Set **Maximum Health** and any damage multiplier.
6. Keep **Register As Combat Target** enabled when infantry should attack the building.
7. Add a Scene Component near the centre of the visible structure and select it as **Target Point Component**. This is the point soldiers aim at and use for line-of-sight checks.
8. Open **Building EVA** and assign the GDI-friendly, GDI-enemy, Nod-friendly, and Nod-enemy variants for **Under Attack**, **Low Health**, and **Destroyed**. Generic sounds remain optional fallbacks.
9. Ensure the visible collision blocks the infantry weapon's configured trace channel, normally `Visibility`.

The component enables owner replication by default. Damage, health, destruction state, defence target, Obelisk charging state, and team-power state are server authoritative.

## Infantry building targeting

On each AI soldier's `Renegade Soldier Combat Component`, open:

`Renegade NXT > Combat > Targeting > Buildings`

Choose one of these policies:

- **Never Target Buildings** — infantry ignores all building components.
- **Buildings When No Soldier Target** — recommended battlefield default. Soldiers fight nearby infantry first and attack buildings when no hostile soldier is available.
- **Closest Soldier or Building** — compares valid soldiers and buildings by score.
- **Prefer Buildings** — selects a visible hostile building whenever one is available.

`Building Target Distance Score Multiplier` and each building's `Infantry Target Priority` allow objective weighting. Lower distance multipliers or higher building priorities make a structure more attractive.

A destroyed building remains registered for team-power state but is automatically rejected as an infantry target.

## Health, destruction, repair and Blueprint events

The plugin listens to the building owner's standard Unreal damage event. Player and AI point damage therefore use the same path.

Available Blueprint events:

- `On Building Health Changed`
- `On Building Under Attack`
- `On Building Low Health Changed`
- `On Building Destroyed`
- `On Building Restored`
- `On Defense Target Changed`
- `On Defense Fired`
- `On Team Power Changed`

The component keeps the Blueprint actor alive at zero health by default. This is recommended because the Blueprint can swap meshes, start destruction animations, disable production, or show repair states from `On Building Destroyed`.

Optional zero-health responses:

- Disable owner collision.
- Hide the owner.
- Destroy the owner actor.
- Permit or prevent repair after destruction.

Blueprint authority functions include:

- `Repair Building`
- `Set Building Health`
- `Force Destroy Building`
- `Restore Building`

## Team-aware EVA/CABAL announcements

Every building exposes four listener-perspective sound slots for each announcement type:

- **GDI Friendly Building Sound** — played to a GDI player when a GDI building triggers the event.
- **GDI Enemy Building Sound** — played to a GDI player when a Nod building triggers the event.
- **Nod Friendly Building Sound** — played to a Nod player when a Nod building triggers the event.
- **Nod Enemy Building Sound** — played to a Nod player when a GDI building triggers the event.

These four variants are available independently for **Under Attack**, **Low Health**, and **Destroyed**. Each client resolves its own local player team through the `Renegade Soldier Combat Component`, so both factions hear friendly and enemy building events using the correct GDI EVA or Nod EVA/CABAL voice. The older generic sound fields are retained as fallbacks when a matching team-specific asset is not assigned.

The world combat registry owns one prioritized building-EVA slot on every listening client:

1. Under-attack announcements have normal priority and cannot overlap each other.
2. A low-health/imminent-destruction warning can interrupt an ordinary under-attack line.
3. A destroyed announcement has highest priority and can interrupt either lower-priority warning.

The optional **Ensure Owner Always Relevant** setting is enabled by default so announcements and strategic building state can reach players at the opposite base.

## Low-health building state

Enable **Low Health State** in the building health settings and configure:

- `Low Health Threshold Percent` — defaults to `0.25`.
- `Low Health Recovery Hysteresis Percent` — defaults to `0.05` and requires repair above 30% before a 25%-threshold building exits low health.

Runtime values and Blueprint access:

- `Is Low Health` — replicated Boolean.
- `Is Building Low Health` — Blueprint query.
- `On Building Low Health Changed` — fires on entry and recovery with the new state, current health percentage, and damage causer.

The imminent-destruction EVA sound is played only when the building crosses from healthy into low health. Repairing above the recovery threshold clears the state, allowing a later drop to trigger a new warning.

## Advanced Guard Tower

Set:

- **Building Type:** `Advanced Guard Tower`
- **Defense Type:** `Advanced Guard Tower Rockets` (selected automatically when left as None)

Add two Scene Components to the building Blueprint:

- `AGT_Rocket_Left`
- `AGT_Rocket_Right`

Place them at the exact rocket launch points. Assign them using the component pickers or keep the matching component tags.

Configure:

- `Attack Range`
- `Minimum Attack Range`
- `Target Refresh Seconds`
- `Fire Interval Seconds`
- `Damage Per Rocket`
- `Rocket Spread Degrees`
- `Rocket Mesh`
- `Rocket Material Override`
- `Rocket Mesh Scale`
- `Rocket Mesh Rotation Offset`
- `Rocket Visual Speed`
- `Rocket Fire Sound`
- Optional `Rocket Impact Effect Actor Class`

Each launch performs two independent server traces, one from each selected muzzle. Each successful hostile trace applies its own point damage. The two static-mesh rockets are cosmetic pooled components travelling to the confirmed trace endpoints; they have no collision and cannot apply duplicate damage.

Use `Preview AGT Rocket Visuals` to test mesh orientation and speed without applying damage.

## Obelisk of Light

Set:

- **Building Type:** `Obelisk of Light`
- **Defense Type:** `Obelisk Laser` (selected automatically when left as None)

Add a Scene Component at the emitter and assign it as **Obelisk Laser Start Component**, or tag it `Obelisk_Laser_Start`.

Configure:

- `Attack Range`
- `Charge Seconds`
- `Fire Interval Seconds`
- `Laser Damage`
- `Charge Sound`
- `Shoot Sound`
- `Particle System Preference`
- `Laser Niagara System` and/or `Laser Cascade Particle System`

The authoritative sequence is:

1. Acquire a hostile player or AI soldier.
2. Validate range, team power, and line of sight.
3. Multicast the charge sound.
4. Wait for `Charge Seconds`.
5. Revalidate the target.
6. Trace from the selected laser start to the enemy.
7. Apply server point damage.
8. Multicast the shoot sound and local Niagara or Cascade beam.

### Niagara and Cascade beam effects

For Niagara, assign the Fab laser system and expose two user parameters in that system. Common names are:

- `User.BeamStart`
- `User.BeamEnd`

Enter the exact parameter names in the component. Choose **Niagara Position** for Large World Coordinates position parameters or **Vector 3** when the asset uses ordinary vector parameters.

For a classic Cascade beam, assign **Laser Cascade Particle System**. The plugin always writes the authoritative world-space trace points through:

- `Set Beam Source Point`
- `Set Beam Target Point`

The points are applied both before and after particle activation so native Beam TypeData emitters receive the confirmed start and hit endpoint automatically. The old v1.4.1 endpoint checkbox is no longer required. The exposed emitter/source/target indices default to zero and can be changed for multi-emitter assets. Cascade systems that use named vector instance parameters can also receive the start and end through **Cascade Start Vector Parameter Name** and **Cascade End Vector Parameter Name**.

For fixed-length or non-beam Cascade effects, enable **Auto Fit Cascade Laser To Trace** and set **Authored Laser Length** to the effect's approximate length at X scale 1.0. The plugin rotates the particle toward the trace and scales local X to reach the confirmed endpoint.

Visual size is independently exposed through:

- **Laser Visual Scale** — base XYZ particle scale.
- **Laser Length Scale Multiplier** — additional local-X length multiplier.
- **Laser Thickness Scale Multiplier** — additional local-Y/Z beam thickness.
- **Laser Visual Rotation Offset** — axis correction when the asset is not authored along local +X.

Choose the fallback order with **Particle System Preference**:

- `Niagara, then Cascade fallback`
- `Cascade, then Niagara fallback`

Only the first successfully spawned particle technology is used for a shot. Both technologies receive trace-facing rotation and optional **Scale Laser System Along X** handling.

An optional `Laser Effect Actor Class` can still be used as an additional custom Blueprint presentation layer.

Use `Preview Obelisk Laser` to validate the selected start point, endpoint, fallback order, and effect configuration.

## Defence targeting and power

AGT and Obelisk defences can select the closest enemy, lowest-health enemy, or a random valid enemy. They target both player-controlled and AI soldier components.

Optional C&C-style power dependency:

- Enable `Requires Team Power` on the defensive building.
- Add a `Renegade Building Combat Component` to the team's Power Plant and set its Building Type to `Power Plant`.
- For a complete map, disable `Treat Missing Power Plant As Powered`.

When the registered team Power Plant is destroyed, the defence cancels pending attacks and Obelisk charging. It resumes automatically after the Power Plant is restored.

## Debugging

Enable `Draw Debug Attack Trace` under Defence Targeting.

- Green/Cyan: hostile soldier resolved and damage applied.
- Orange: trace blocked by a non-hostile or non-combat actor.
- Red: no blocking hit before maximum range.

For infantry bullets, use the existing `Draw Debug Shot Line` setting on the soldier component.

## Performance notes

- Building targeting uses the existing world registry rather than scanning every actor in the level.
- Defence targeting runs at the exposed refresh interval, not every frame.
- AGT rocket meshes are pooled components with collision, overlap events, navigation influence, and shadows disabled by default.
- Obelisk damage is hitscan; Niagara and Cascade effects are cosmetic and local.
- Under-attack audio is globally serialized per world/client.


## Obelisk laser lifetime and cleanup (v1.4.3)

`Laser Visual Lifetime Seconds` controls how long each Obelisk laser visual remains active after the authoritative shot. The default is `0.35` seconds. Looping Cascade systems are created inactive, configured with the trace source/target, activated only for the shot, then forcibly deactivated and destroyed. A new shot also removes any previous active beam so visuals cannot overlap or remain in the level.

## v1.7.0 Refinery Harvester factory

A Refinery Building Combat Component can now own one active Harvester Character. Enable `Harvester Spawner`, assign `Harvester Character Class`, and select/tag a `HarvesterSpawn` Scene Component. Initial spawn delay, respawn delay, local offset/rotation and operational-Refinery gating are exposed. `Active Harvester` replicates, while `On Harvester Spawned` and `On Harvester Respawn Scheduled` provide Blueprint hooks. See `Harvester_Warfare.md`.


## v1.7.2 Refinery Harvest Point and dock additions

Refinery Building Combat Components now additionally expose:

- `Harvester Harvest Point` (level actor reference)
- `Auto Find Harvester Harvest Point`
- `Harvester Harvest Point Group`
- `Harvester Dock Point Component`
- `Harvester Dock Point Component Tag` (`HarvesterDock` by default)
- dock relative location/rotation offsets
- `Get Harvester Dock Transform`
- `Resolve Harvester Harvest Point`
- `On Harvester Respawned`

`On Harvester Respawned` fires on authority only for replacement Harvesters after the initial one and passes the newly spawned Character Actor, making it the intended Blueprint hook for restarting/reacquiring the outbound Spline AI path.
