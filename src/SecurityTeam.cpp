
#include "SecurityTeam.h"

using namespace std;

SecurityTeam::SecurityTeam(string name) : EventUnit(name) {}

Status *SecurityTeam::determineStatus(Notification notification)
{
	switch (notification)
	{
	case Notification::OPEN:
		return new Active();
	case Notification::CLOSE:
		return new Idle();
	case Notification::SECURITY_ALERT:
		return new HighAlert();

	//Task4 updates:
	case Notification::LOST_CHILD_ALRET:
		return new HighAlert();

	case Notification::CAPACITY_ALERT:
		return new HighAlert();
	default:
		return this->status;
	}
}
