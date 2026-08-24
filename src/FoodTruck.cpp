#include "FoodTruck.h"

using namespace std;

FoodTruck::FoodTruck(string name, vector<string> menu) : EventUnit(name), menu(menu) {}

vector<string> FoodTruck::getMenu() { return this->menu; }

void FoodTruck::setMenu(vector<string> menu)
{
	this->menu = menu;
}

void FoodTruck::updateMenu(string item)
{
	this->menu.push_back(item);
}

void FoodTruck::display(string indent)
{
	cout << this->name << endl
		 << "FEAST WITH US: " << endl;

	int list = 1;
	auto iterator = this->menu.begin();
	while (iterator != this->menu.end())
	{
		cout << indent << "[" << list++ << "]" << (*iterator) << endl;
		++iterator;
	}
}

Status* FoodTruck::determineStatus(Notification notification)
{
	switch (notification)
	{
	case Notification::WEATHER_ALERT:
	case Notification::SCHEDULE_CHANGE:
	case Notification::CAPACITY_ALERT:
	case Notification::OPEN:
		return new Open();
	
	case Notification::SECURITY_ALERT:
	case Notification::CLOSE:
		return new Closed();
	
	//Task4 update:
	case Notification::LOW_STOCK_ALERT:
		return new Paused();

	default:
		return new Closed();
	}
}

//Task4 updates:
int FoodTruck::getStockLevel() const {
	return stockLevel;
}

void FoodTruck::setStockLevel(int stock) {
	stockLevel = stock;
}

bool FoodTruck::needRestock() const {
	return stockLevel < 20;
}