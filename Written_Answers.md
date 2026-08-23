# Quest Music Festival PDF Solutions

_1.1_

- Our event is called Quest Music Festival. It is a one-day festival that is packed with fun for the whole family. The festival contains several distinct areas, each responsible for providing different services to patrons. At the Main Stage Area, there are a wide range of performers headlining the event on the Main Stage and there is a Security Team available to survey the area and ensure safety in that zone. The Food Court Area contains numerous Food truck units available with a variety of food and refreshments to sort out that grumbling tummy namely a Taco, Mini Donuts and a Chip 'n Dip Food Truck. The Kids Area provides a safe environment for children and our Caretaker team will happily look after them at our Playground. There are ablution facilities available with Men's and Women's Bathrooms equipped with a Cleaner Team to maintain the facilities and each Bathroom contains individual Stall units. There is a Security Team surveying the Main Stage Area and the Gate Entrance Area to keep the event safe throughout the day. There is a gate where patrons will enter and later leave the park to and from. At the Gate Entrance Area there is an Entrance Gate through which ticket-holders will pass and a Security Team to prevent unauthorized entry. A central EventControl hub will coordinate the communication to all the Areas of the festival by issuing notifications when important events occur. Examples include a rain alert, a security breach alert, a festival-opened alert, a festival-closed alert, a Festival capacity reached and a change to the headliner schedule alert. These events may require certain areas or units to react differently to these notifications. This provides meaningful behavior to the Observer pattern as different components can respond polymorphically to the same notification. The Festival is modelled as a Composite structure because the event contains areas with smaller components within them. The Quest Music Festival acts as the root of the structure and contains the Main Stage Area, Food Court Area, Kids Area, Gate Entrance Area and Bathroom Area. These areas are Composite units because they contain other festival components. The Concrete Leaf units are as follows: Main Stage, Security Team, Playground, Caretaker Team, Entrance Gate, Stall, Cleaner Team, Food Truck and do not contain festival components within them. The Composite Areas are as follows: Main Stage Area, Kids Area, Gate Entrance Area, Bathroom Area, Food Court Area. The resulting structure is below.

```
Quest Music Festival
|
|----Main Stage Area:
|       |--Main Stage
|       |--Security Team
|
|----Kids Area:
|       |--Playground
|       |--Caretaker Team
|
|----Gate Entrance Area:
|       |--Entrance Gate
|       |--Security Team
|
|----Bathroom Area:
|       |--Men's Bathroom
|            |--Stall
|            |--Stall
|            |--Stall
|       |--Women's Bathroom
|            |--Stall
|            |--Stall
|            |--Stall
|       |--Cleaner Team
|
|----Food Court Area:
        |--Taco Food Truck
        |--Chip n Dip Food Truck
        |--Mini Donuts Food Truck
```

_1.2_
-    Subject: Subject, Observer: Observer, ConcreteSubject: EventControl, ConcreteObserver: EventComponent, EventUnit and its subclasses; FoodTruck, SecurityTeam, MainStage, Playground, CleanerTeam, ToiletStall, EntranceGate, CaretakerTeam, EventGroup and its subclasses; QuestMusicFestival, MensBathroom, WomensBathroom, EntranceGateArea, KidsArea, MainStageArea, BathroomArea, FoodCourtArea
-    Component: EventComponent, Composite: EventGroup, Leaf: EventUnit, Client: EventControl
-    EventComponent participates in both the Observer and the Composite patterns acting as a bridge between them. As a ConcreteObserver in the Observer pattern, EventComponent implements the update operation used to receive pushed notifications from the Subject and allows each concrete component to react according to its own behaviour. It receives pushed notifications that it would need to act accordingly on. As a Component in the Composite pattern, EventComponent provides the common interface for both EventGroup and EventUnit and allows the client to treat individual units and groups uniformly.
-    EventControl participates in both the Observer and the Composite patterns. As a ConcreteSubject in the Observer pattern, it has the implementation of the subject being observed and it implements the functionality to store objects that are observing it and sends update notifications to these objects. As a Client in the Composite pattern, it manipulates the objects that comprise the composite.

_1.4_

-    (a)A genuine part-whole tree is hierarchial structure where individual objects and groups of objects are organized into a tree. The Component which is the EventComponent is the shared abstract base class for all items. The Leaf which is the EventUnit and the classes inheriting from it are individual objects with no children. A Composite represents a whole made up of Components, while a Leaf represents an individual Component. A Composite can itself be contained within another Composite, allowing the hierarchy to recurse.
-    (b)The structure uses polymorphism such that when EventControl interacts with an EventComponent, it does not need to distinguish between a Composite or Leaf. The appropriate update() implementation is invoked on the receiving object, allowing both Composite and Leaf objects to be treated uniformly.
-    (c)EventComponents are registered in the Subject's Observer registry. When EventControl issues a notification, it pushes the notification to each registered EventComponent through update(). Each component then responds according to its own implementation. The Subject will hold the registry of EventComponents and when a notification is issued by EventControl, the registered EventComponents receive the communication and act accordingly.
-    (d)EventControl does not need to know about the individual concrete classes, reducing tight coupling. It only sends a notification to the registered Observers, which then respond according to their own implementations. Therefore, new EventComponents or changes to existing components can be made without requiring changes to EventControl, supporting the Open/Closed Principle.
-    (e)The EventControl and EventComponent classes are part of both the Observer and Composite patterns. This is not a misuse of either pattern in both cases. The EventControl as the ConcreteSubject in the Observer pattern implements functionality to store objects that are observing it and sends update notifications to these objects. As a Client in the Composite pattern, it manipulates the objects that comprise the part-whole composite structure. The EventComponent, as the ConcreteObserver in the Observer pattern, implements the update operation used to receive pushed notifications and responds according to its concrete implementation. As a Component it provides the interface with which the client uses.