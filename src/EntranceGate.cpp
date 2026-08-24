#include "EntranceGate.h"
#include <iostream>

using namespace std;

EntranceGate::EntranceGate(string name) : EventUnit(name) {}

void EntranceGate::display(string indent)
{
	cout << this->name << endl
		 << indent << "Event Capacity: " << this->capacity << endl
		 << indent << "Remaining space: " << this->occupancy << endl
		 << indent << "Status: " << endl;
}

Status *EntranceGate::determineStatus(Notification notification)
{
	switch (notification)
	{
	case Notification::CLOSE:
	case Notification::SECURITY_ALERT:
	case Notification::CAPACITY_ALERT:
		return new Closed();
	case Notification::OPEN:
	case Notification::SCHEDULE_CHANGE:
	case Notification::WEATHER_ALERT:
		return new Open();

	default:
		return new Closed();
	}
}
