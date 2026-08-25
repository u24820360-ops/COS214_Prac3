#include "MainStage.h"

using namespace std;

MainStage::MainStage(string name) : EventUnit(name) {}

Status *MainStage::determineStatus(Notification notification)
{
	switch (notification)
	{
	case Notification::OPEN:
	case Notification::VIP_MODE:
		return new Open();
		
	case Notification::CLOSE:
	case Notification::WEATHER_ALERT:
		return new Closed();
	
	case Notification::SECURITY_ALERT:
	case Notification::SCHEDULE_CHANGE:
		return new Paused();

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