# Renegade Spline AI 1.1 — Integration Quick Start

## RenegadeSoldierCombat

On combat entry:

```text
Set Spline Combat Active For Actor(Self, true, Enemy)
```

On combat exit:

```text
Set Spline Combat Active For Actor(Self, false, None, -1)
```

Call the first node before combat issues movement.

## Character Blueprint tank or harvester

Add both components:

```text
RenegadeSplineFollowerComponent
RenegadeCharacterVehicleComponent
```

Select `Heavy Tank`, `Light Tracked Vehicle`, or `Harvester / Heavy Utility` on the vehicle component. Leave `Auto Detect Character Vehicle` enabled on the follower.

Use the Character capsule and matching NavMesh agent as the vehicle's authoritative movement footprint. The mesh front should face local +X.

## Any other movement system

```text
Set Spline External Movement Active For Actor(Self, true, "SystemName")
...external movement...
Set Spline External Movement Active For Actor(Self, false, "SystemName")
```

The route resumes only when all named movement claims are released.
