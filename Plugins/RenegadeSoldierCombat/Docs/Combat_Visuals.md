# Combat Visuals — Bullet Mesh and Ground Blood

## Runtime model

Weapon damage remains an immediate server-authoritative line trace. The bullet mesh is a client-side cosmetic that follows the exact replicated trace start and trace end. It has no collision and cannot apply duplicate damage.

Each soldier owns a small pool of transient Static Mesh Components. A component is reused after its bullet reaches the trace end, avoiding an Actor spawn/destroy for every automatic-rifle round.

Ground blood is requested only when the trace successfully damages another actor containing `Renegade Soldier Combat Component`. The visual then performs a separate downward trace while ignoring the shooter and damaged soldier.

## Bullet asset setup

1. Use a compact Static Mesh with its pivot near the rear or centre.
2. Local +X is treated as forward.
3. If the mesh points along +Y, begin testing with a yaw rotation offset around `-90` degrees.
4. If it points along Z, adjust the pitch offset visually.
5. Leave collision disabled in the asset where possible; the runtime component also forces `No Collision`.
6. Emissive materials usually read better than shadow-casting opaque bullets at combat speed.

## Blood decal setup

1. Set the Material Domain to `Deferred Decal`.
2. Use a transparent mask/opacity for the splatter shape.
3. Ensure the ground material receives decals.
4. Ensure the floor, landscape, and road collision block the selected ground-blood trace channel.
5. Add several variations to `Ground Blood Decal Materials` for random selection.

## Existing Niagara or Blueprint blood assets

Create a Blueprint Actor that contains the existing effect, disable replication on that Blueprint, and assign it to `Ground Blood Effect Actor Class`. The plugin also calls `SetReplicates(false)` on the spawned cosmetic actor.

When both decal materials and an effect actor are assigned, both are spawned intentionally.

## Recommended 40-soldier settings

- Bullet Visual Pool Size: 4–6
- Bullet Visual Speed: 30,000 cm/s
- Bullet Visual Casts Shadow: false
- Ground Blood Life: 12–20 seconds
- Ground Blood Fade: 3–5 seconds
- Minimum Seconds Between Ground Blood: 0.15–0.25 if the battlefield accumulates too many decals
- Ground Blood Spawn Chance: reduce to 0.5–0.75 only when additional performance control is needed

## Timing

`Delay Ground Blood Until Bullet Arrives` stores the hit result inside the pooled bullet state. When the visual reaches the trace end, the plugin performs the downward ground trace and creates the blood. When no bullet mesh is assigned or the visual cannot be spawned, blood falls back to immediate placement.

## Bullet spawn component

The bullet mesh origin can be selected per soldier Blueprint. Add a Scene Component at the weapon muzzle, then assign it under **Renegade NXT > Combat Visuals > Bullet Spawn > Bullet Visual Spawn Component**.

Resolution priority:

1. Runtime component assigned by **Set Bullet Visual Spawn Component**.
2. **Bullet Visual Spawn Component** selected in the Details panel.
3. First Scene Component matching **Bullet Visual Spawn Component Tag**.
4. Existing weapon muzzle socket / trace-start fallback.

**Bullet Visual Spawn Relative Offset** is transformed in the selected component's local space. The mesh is then moved forward by **Bullet Visual Muzzle Forward Offset** along the shot direction.

AI hitscan behaviour is unchanged. In player mode, the server also uses the resolved spawn component as the muzzle origin for the second obstruction trace toward the validated camera aim point. Hit confirmation, damage, and blood placement remain server authoritative.
