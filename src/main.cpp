#include <iostream>
#include <vector>

#include "EventControl.h"
#include "EventGroup.h"
#include "MainStage.h"
#include "FoodTruck.h"
#include "SecurityTeam.h"
#include "Playground.h"

int main()
{
    EventControl eventControl(1000);

    std::vector<std::string> menu;
    menu.push_back("Burger");
    menu.push_back("Fries");
    menu.push_back("Soft Drink");

    EventGroup* festival =
        new EventGroup("Music & Art Festival");

    EventGroup* mainStageZone =
        new EventGroup("Main Stage Zone");

    EventGroup* foodCourt =
        new EventGroup("Food Court");

    MainStage* stage =
        new MainStage("Main Stage");

    FoodTruck* foodTruck =
        new FoodTruck("Burger Truck", menu);

    SecurityTeam* security =
        new SecurityTeam("Festival Security");

    stage->setSubject(&eventControl);
    security->setSubject(&eventControl);
    foodTruck->setSubject(&eventControl);

    eventControl.attach(stage);
    eventControl.attach(security);
    eventControl.attach(foodTruck);

    festival->add(mainStageZone);
    festival->add(foodCourt);

    mainStageZone->add(stage);
    mainStageZone->add(security);

    foodCourt->add(foodTruck);

    std::cout << "\n WEATHER ALERT \n";
    eventControl.updateNotification(
        Notification::WEATHER_ALERT
    );

    std::cout << "\n LOST CHILD ALERT \n";
    eventControl.updateNotification(
        Notification::LOST_CHILD_ALERT
    );

    std::cout << "\n LOW STOCK ALERT \n";
    eventControl.updateNotification(
        Notification::LOW_STOCK_ALERT
    );

	//Task4.2 update:
    std::cout << "\n RUNTIME REORGANISATION \n";

    foodCourt->remove(foodTruck);
    mainStageZone->add(foodTruck);

    std::cout
        << "Burger Truck moved to Main Stage Zone"
        << std::endl;

	//Task4.3 update:
    std::cout << "\n VIP MODE \n";

    bool vipMode = true;

    if(vipMode)
    {
        eventControl.updateNotification(
            Notification::VIP_MODE
        );
    }

    std::cout << "\nABOUT TO DELETE FESTY\n";

    delete festival;

    std::cout << "\nFESTY GONE\n";

    return 0;
}