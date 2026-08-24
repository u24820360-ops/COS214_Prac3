#include "ToiletStall.h"

using namespace std;

ToiletStall::ToiletStall(string name) : EventUnit(name) {};

Status *ToiletStall::determineStatus(Notification notification)
{
	switch (notification)
	{
	case Notification::OPEN:
		return new Open();
	case Notification::CLOSE:
		return new Closed();
	default:
		return this->status;
	}
}
