#include "CleaningTeam.h"

using namespace std;

CleaningTeam::CleaningTeam(string name) : Personnel(name) {}

Status *CleaningTeam::determineStatus(Notification notification)
{
	switch (notification)
	{
	case Notification::OPEN:
		return new Active();
	case Notification::CLOSE:
		return new Idle();

	//Task4 update:
	case Notification::CAPACITY_ALERT:
		return new HighAlert();

	default:
		return this->status;
	}
}

void CleaningTeam::setStatus(Notification notification) {
	this->status = determineStatus(notification);
}
