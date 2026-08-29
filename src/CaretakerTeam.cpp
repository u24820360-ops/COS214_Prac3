#include "CaretakerTeam.h"

using namespace std;

CaretakerTeam::CaretakerTeam(string name) : Personnel(name) {}

Status *CaretakerTeam::determineStatus(Notification notification)
{
	switch (notification)
	{
	case Notification::OPEN:
	//Task4 update:
	case Notification::LOST_CHILD_ALERT:
		return new Active();

	case Notification::CLOSE:
	case Notification::WEATHER_ALERT:
		return new Idle();

	
	default:
		return this->status;
	}
}