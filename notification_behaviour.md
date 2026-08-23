# Quest Music Festival — Notification Behaviour

## Notification Types

```cpp
enum NotificationType
{
    OPEN,
    CLOSE,
    WEATHER_ALERT,
    SCHEDULE_CHANGE,
    CAPACITY_ALERT,
    SECURITY_ALERT
};

//the following is for determining whether a facility is down or accessible eg if the gate is open then it will have a status of OPEN if the security shift is on then then it will have a status of ACTIVE else IDLE
enum class Status {
    // Standard Operational States
    IDLE,                      // Initial state / Personnel off-shift
    OPERATIONAL_OPEN,          // Venue open and fully accessible
    OPERATIONAL_ACTIVE,        // Personnel on-shift and active
    FACILITY_CLOSED,           // Venue closed during normal off-hours

    // Weather Response States (WEATHER_ALERT)
    CLOSED_WEATHER_SAFETY,     // Physical area closed due to severe weather
    STANDBY_WEATHER_DUTY,      // Personnel remaining active to assist during weather
    CEASED_DUTIES_WEATHER,     // Non-essential staff (cleaners) pausing work

    // Schedule & Delay Response States (SCHEDULE_CHANGE)
    PAUSED_SCHEDULE_CHANGE,    // Stage performance temporarily paused (~30 mins)

    // Capacity & Gate Response States (CAPACITY_ALERT)
    ENTRY_RESTRICTED,          // Turnstiles closed to new entry; exit open
    PATROL_GATE_RESTRICTION,   // Security patrolling boundaries to stop entry

    // Security & Emergency Response States (SECURITY_ALERT)
    HALTED_SECURITY_THREAT,    // Venue or food truck operations halted
    HIGH_ALERT_PATROL,         // Security investigating or securing perimeters
    CHILD_PROTECTION_LOCKDOWN  // Caretakers securing/supervising children
};
```

---

## OPEN

| Area / Unit | Response |
|---|---|
| **Main Stage Area** | Main Stage opens |
| **Security Team (Main Stage)** | Security shift begins |
| **Kids Area** | Playground opens |
| **Caretaker Team** | Caretaker shift begins |
| **Food Court Area** | Food Trucks open |
| **Taco Food Truck** | Opens |
| **Chip n Dip Food Truck** | Opens |
| **Mini Donuts Food Truck** | Opens |
| **Bathroom Area** | Bathroom facilities open |
| **Men's Bathroom** | Opens |
| **Women's Bathroom** | Opens |
| **Toilet Stalls** | Open |
| **Cleaner Team** | Cleaner shift begins |
| **Gate Entrance Area** | Entrance opens |
| **Entrance Gate** | Opens |
| **Entrance Security Team** | Security shift begins |

---

## CLOSE

| Area / Unit | Response |
|---|---|
| **Main Stage Area** | Main Stage closes |
| **Main Stage** | Closes |
| **Security Team (Main Stage)** | Security shift ends |
| **Kids Area** | Playground closes |
| **Playground** | Closes |
| **Caretaker Team** | Caretaker shift ends |
| **Food Court Area** | Food Court closes |
| **Taco Food Truck** | Closes |
| **Chip n Dip Food Truck** | Closes |
| **Mini Donuts Food Truck** | Closes |
| **Bathroom Area** | Bathroom facilities close |
| **Men's Bathroom** | Closes |
| **Women's Bathroom** | Closes |
| **Toilet Stalls** | Close |
| **Cleaner Team** | Cleaner shift ends |
| **Gate Entrance Area** | Remains open until everyone leaves |
| **Entrance Gate** | Remains open until everyone leaves, then closes |
| **Entrance Security Team** | Security shift ends after patrons have left |

---

## WEATHER_ALERT

| Area / Unit | Response |
|---|---|
| **Main Stage Area** | Main Stage closes |
| **Main Stage** | Closes; performers leave the stage |
| **Security Team (Main Stage)** | Remains active and keeps the peace |
| **Kids Area** | Playground closes |
| **Playground** | Closes |
| **Caretaker Team** | Continues duties |
| **Food Court Area** | Continues operating |
| **Taco Food Truck** | Continues operating |
| **Chip n Dip Food Truck** | Continues operating |
| **Mini Donuts Food Truck** | Continues operating |
| **Bathroom Area** | Continues operating |
| **Men's Bathroom** | Continues operating |
| **Women's Bathroom** | Continues operating |
| **Toilet Stalls** | Continue operating |
| **Cleaner Team** | Ceases duties |
| **Gate Entrance Area** | Continues operating normally |
| **Entrance Gate** | Continues operating normally |
| **Entrance Security Team** | Continues operating normally |

---

## SCHEDULE_CHANGE

This is the **Headliner Changes** scenario.

| Area / Unit | Response |
|---|---|
| **Main Stage Area** | Main Stage temporarily stops operations for approximately 30 minutes |
| **Main Stage** | Stops for approximately 30 minutes while the headliner changes |
| **Security Team (Main Stage)** | Continues operating |
| **Kids Area** | Continues operating |
| **Playground** | Continues operating |
| **Caretaker Team** | Continues operating |
| **Food Court Area** | Continues operating |
| **Taco Food Truck** | Continues operating |
| **Chip n Dip Food Truck** | Continues operating |
| **Mini Donuts Food Truck** | Continues operating |
| **Bathroom Area** | Continues operating |
| **Men's Bathroom** | Continues operating |
| **Women's Bathroom** | Continues operating |
| **Toilet Stalls** | Continue operating |
| **Cleaner Team** | Continues operating |
| **Gate Entrance Area** | Continues operating |
| **Entrance Gate** | Continues operating |
| **Entrance Security Team** | Continues operating |

---

## CAPACITY_ALERT

| Area / Unit | Response |
|---|---|
| **Main Stage Area** | Continues operating |
| **Main Stage** | Continues operating |
| **Security Team (Main Stage)** | Continues operating |
| **Kids Area** | Continues operating |
| **Playground** | Continues operating |
| **Caretaker Team** | Continues operating |
| **Food Court Area** | Continues operating |
| **Taco Food Truck** | Continues operating |
| **Chip n Dip Food Truck** | Continues operating |
| **Mini Donuts Food Truck** | Continues operating |
| **Bathroom Area** | Continues operating |
| **Men's Bathroom** | Continues operating |
| **Women's Bathroom** | Continues operating |
| **Toilet Stalls** | Continue operating |
| **Cleaner Team** | Continues operating |
| **Gate Entrance Area** | Entrance closes to new patrons |
| **Entrance Gate** | Closes |
| **Entrance Security Team** | Continues patrolling the gates to prevent people from entering |

---

## SECURITY_ALERT

| Area / Unit | Response |
|---|---|
| **Main Stage Area** | Main Stage stops temporarily |
| **Main Stage** | Stops until the security alert is resolved |
| **Security Team (Main Stage)** | Goes on high alert and investigates/resolves the issue |
| **Kids Area** | Playground closes temporarily |
| **Playground** | Closes until the security threat is resolved |
| **Caretaker Team** | Continues duties/supervises children |
| **Food Court Area** | Food Court operations stop |
| **Taco Food Truck** | Locks cash register, shuts off machines and stops operations |
| **Chip n Dip Food Truck** | Locks cash register, shuts off machines and stops operations |
| **Mini Donuts Food Truck** | Locks cash register, shuts off machines and stops operations |
| **Bathroom Area** | Continues operating |
| **Men's Bathroom** | Continues operating |
| **Women's Bathroom** | Continues operating |
| **Toilet Stalls** | Continue operating |
| **Cleaner Team** | Continues duties |
| **Gate Entrance Area** | Entrance closes |
| **Entrance Gate** | Closes |
| **Entrance Security Team** | Goes on high alert and investigates/resolves the issue |

---

## Implementation Reminder

Each concrete Leaf can implement:

```cpp
update(NotificationType n)
```

and react according to the notification:

```text
OPEN            → do X
CLOSE           → do Y
WEATHER_ALERT   → do Z
SCHEDULE_CHANGE → do A
CAPACITY_ALERT  → do B
SECURITY_ALERT  → do C
```

For notifications that do not meaningfully change a component's behaviour, the component can simply **continue operating**.
Quest_Music_Festival_Notification_Behaviour.md
Displaying Quest_Music_Festival_Notification_Behaviour.md.