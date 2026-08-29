#include <iostream>
#include <vector>

#include "EventControl.h"
#include "EventGroup.h"
#include "MainStage.h"
#include "CaretakerTeam.h"
#include "CleaningTeam.h"
#include "FoodTruck.h"
#include "SecurityTeam.h"
#include "ToiletStall.h"
#include "EntranceGate.h"
#include "Playground.h"

int main()
{
	EventControl eventControl(1000);

	std::vector<std::string> menu;
	menu.push_back("Burger");
	menu.push_back("Fries");
	menu.push_back("Soft Drink");

	EventGroup *festival =
		new EventGroup("Music & Art Festival");

	EventGroup *mainStageZone =
		new EventGroup("Main Stage Zone");

	EventGroup *foodCourt =
		new EventGroup("Food Court");

	MainStage *stage =
		new MainStage("Main Stage");

	FoodTruck *foodTruck =
		new FoodTruck("Burger Truck", menu);

	SecurityTeam *security =
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
		Notification::WEATHER_ALERT);

	std::cout << "\n LOST CHILD ALERT \n";
	eventControl.updateNotification(
		Notification::LOST_CHILD_ALERT);

	std::cout << "\n LOW STOCK ALERT \n";
	eventControl.updateNotification(
		Notification::LOW_STOCK_ALERT);

	// Task4.2 update:
	std::cout << "\n RUNTIME REORGANISATION \n";

	foodCourt->remove(foodTruck);
	mainStageZone->add(foodTruck);

	std::cout
		<< "Burger Truck moved to Main Stage Zone"
		<< std::endl;

	// Task4.3 update:
	std::cout << "\n VIP MODE \n";

	bool vipMode = true;

	if (vipMode)
	{
		eventControl.updateNotification(
			Notification::VIP_MODE);
	}

	delete festival;

	EventControl evc(1000);

	std::vector<std::string> tacoMenu;
	tacoMenu.push_back("Tacos al Pastor");
	tacoMenu.push_back("Carne Asada Tacos");
	tacoMenu.push_back("Birria Tacos");

	std::vector<std::string> chipNDipMenu;
	chipNDipMenu.push_back("Maxi Chips");
	chipNDipMenu.push_back("Midi Chips");
	chipNDipMenu.push_back("Mini Chips");

	std::vector<std::string> miniDonutsMenu;
	miniDonutsMenu.push_back("Chocolate Sauce Donuts");
	miniDonutsMenu.push_back("Vanilla Donuts");
	miniDonutsMenu.push_back("Sprinkles on Donuts");

	EventGroup* fest = new EventGroup("Quest Music Festival");

	EventGroup* mainStageArea = new EventGroup("Main Stage Area");

	EventGroup* foodCourtArea = new EventGroup("Food Court Area");

	MainStage* stageUnit = new MainStage("Main Stage");

	FoodTruck* foodTruckUnit1 = new FoodTruck("Taco Tuesday Truck", tacoMenu);
	FoodTruck* foodTruckUnit2 = new FoodTruck("Chip 'N Dip Truck", chipNDipMenu);
	FoodTruck* foodTruckUnit3 = new FoodTruck("Mini Donuts Truck", miniDonutsMenu);

	SecurityTeam* gateSecurity = new SecurityTeam("Entrance Gate Security");
	SecurityTeam* stageSecurity = new SecurityTeam("Main Stage Security");

	EventGroup* kidsArea = new EventGroup("Kids Area");

	Playground* playground = new Playground("Kids Playground");

	CaretakerTeam* caretakerTeam = new CaretakerTeam("Entrance Gate Security");

	CleaningTeam* cleanerTeam = new CleaningTeam("Bathroom Cleaning Team");

	EntranceGate* gateUnit = new EntranceGate("Entrance Gates");

	EventGroup* entranceArea = new EventGroup("Entrance Gate Area");

	ToiletStall* toiletStallUnit1 = new ToiletStall("Toilet Stall");
	ToiletStall* toiletStallUnit2 = new ToiletStall("Toilet Stall");
	ToiletStall* toiletStallUnit3 = new ToiletStall("Toilet Stall");
	ToiletStall* toiletStallUnit4 = new ToiletStall("Toilet Stall");

	EventGroup* mensBathroom = new EventGroup("Men's Bathroom");
	EventGroup* womensBathroom = new EventGroup("Women's Bathroom");

	EventGroup* bathroomArea = new EventGroup("Bathroom Area");

	stageUnit->setSubject(&evc);
	foodTruckUnit1->setSubject(&evc);
	foodTruckUnit2->setSubject(&evc);
	foodTruckUnit3->setSubject(&evc);
	gateSecurity->setSubject(&evc);
	stageSecurity->setSubject(&evc);
	playground->setSubject(&evc);
	cleanerTeam->setSubject(&evc);
	caretakerTeam->setSubject(&evc);
	gateUnit->setSubject(&evc);
	toiletStallUnit1->setSubject(&evc);
	toiletStallUnit2->setSubject(&evc);
	toiletStallUnit3->setSubject(&evc);
	toiletStallUnit4->setSubject(&evc);

	evc.attach(stageUnit);
	evc.attach(foodTruckUnit1);
	evc.attach(foodTruckUnit2);
	evc.attach(foodTruckUnit3);
	evc.attach(gateSecurity);
	evc.attach(stageSecurity);
	evc.attach(playground);
	evc.attach(caretakerTeam);
	evc.attach(cleanerTeam);
	evc.attach(gateUnit);
	evc.attach(toiletStallUnit1);
	evc.attach(toiletStallUnit2);
	evc.attach(toiletStallUnit3);
	evc.attach(toiletStallUnit4);

	womensBathroom->add(toiletStallUnit1);
	womensBathroom->add(toiletStallUnit2);
	mensBathroom->add(toiletStallUnit3);
	mensBathroom->add(toiletStallUnit4);
	bathroomArea->add(mensBathroom);
	bathroomArea->add(womensBathroom);
	bathroomArea->add(cleanerTeam);
	fest->add(bathroomArea);

	foodCourtArea->add(foodTruckUnit1);
	foodCourtArea->add(foodTruckUnit2);
	foodCourtArea->add(foodTruckUnit3);
	fest->add(foodCourtArea);

	entranceArea->add(gateSecurity);
	entranceArea->add(gateUnit);
	fest->add(entranceArea);

	mainStageArea->add(stageSecurity);
	mainStageArea->add(stageUnit);
	fest->add(mainStageArea);

	kidsArea->add(playground);
	kidsArea->add(caretakerTeam);
	fest->add(kidsArea);
	
	fest->display();

	std::cout << "\n OPEN \n";
	evc.updateNotification(
		Notification::OPEN
	);

	std::cout << "\n LOST CHILD ALERT \n";
	evc.updateNotification(
		Notification::LOST_CHILD_ALERT
	);

	std::cout << "\n LOW STOCK ALERT \n";
	evc.updateNotification(
		Notification::LOW_STOCK_ALERT
	);

	std::cout << "\n WEATHER ALERT \n";
	evc.updateNotification(
		Notification::WEATHER_ALERT
	);

	std::cout << "\n SECURITY_ALERT \n";
	evc.updateNotification(
		Notification::SECURITY_ALERT
	);

	std::cout << "\n CAPACITY ALERT \n";
	evc.updateNotification(
		Notification::CAPACITY_ALERT
	);

	std::cout << "\n UNDEFINED \n";
	evc.updateNotification(
		Notification::UNDEFINED
	);

	std::cout << "\n SCHEDULE CHANGE \n";
	evc.updateNotification(
		Notification::SCHEDULE_CHANGE
	);

	std::cout << "\n CLOSE \n";
	evc.updateNotification(
		Notification::CLOSE
	);

	delete fest;

	return 0;
} 