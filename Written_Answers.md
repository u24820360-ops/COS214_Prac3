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
-    Subject: , Observer: , ConcreteSubject: , ConcreteObserver: 
-    Component: , Composite: , Leaf: 