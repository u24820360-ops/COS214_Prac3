#include "MainStage.h"

using namespace std;

MainStage::MainStage(string name) : EventComponent(name) {}

Status *MainStage::determineStatus(Notification notification)
{
	switch (notification)
	{
	case Notification::OPEN:
		return new Open();
		
	case Notification::CLOSE:
		return new Closed();

	case Notification::WEATHER_ALERT:
		return new Closed();
	
	case Notification::SECURITY_ALERT:
		return new Paused;

	case Notification::SCHEDULE_CHANGE:
		return new Paused();

	case Notification::VIP_MODE:
		return new Open();

	default:
		return this->status;
	}
}

//Task4 updates:
bool MainStage::isVipOnly() const {
	return vipOnly;
}

void MainStage::setVipOnly(bool value) {
	vipOnly = value;
}