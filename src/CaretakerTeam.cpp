#include "CaretakerTeam.h"

using namespace std;

CaretakerTeam::CaretakerTeam(string name) : EventUnit(name) {}

Status *CaretakerTeam::determineStatus(Notification notification)
{
	switch (notification)
	{
	case Notification::OPEN:
		return new Active();
	case Notification::CLOSE:
	case Notification::WEATHER_ALERT:
		return new Idle();

	//Task4 update:
	case Notification::LOST_CHILD_ALRET:
		return new Active();

	default:
		return this->status;
	}
}
