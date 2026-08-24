#include "Playground.h"

using namespace std;

Playground::Playground(string name) : EventUnit(name) {}

Status *Playground::determineStatus(Notification notification)
{
	switch (notification)
	{
	case Notification::OPEN:
		return new Open();
	case Notification::CLOSE:
	case Notification::WEATHER_ALERT:
		return new Closed();
	case Notification::SECURITY_ALERT:
		return new Paused();
	default:
		return this->status;
	}
}