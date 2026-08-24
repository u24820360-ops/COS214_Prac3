#include "CleaningTeam.h"

using namespace std;

CleaningTeam::CleaningTeam(string name) : EventUnit(name) {}

Status *CleaningTeam::determineStatus(Notification notification)
{
	switch (notification)
	{
	case Notification::OPEN:
		return new Active();
	case Notification::CLOSE:
		return new Idle();

	default:
		return this->status;
	}
}
