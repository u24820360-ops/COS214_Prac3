#include "EventControl.h"
#include <iostream>

EventControl::EventControl(int capacity)
{
	this->capacity = capacity;
	this->notification = Notification::CLOSE;
}

Notification EventControl::getNotification() { return this->notification; }

void EventControl::updateNotification(Notification notification)
{
	this->notification = notification;
	this->notify();
}

void EventControl::setCapacity(int capacity)
{
	this->capacity = capacity;
}

int EventControl::getCapacity()
{
	return this->capacity;
}

void EventControl::admit(int people)
{
	int remaining = this->capacity - this->occupancy;
	if (remaining > 0)
	{
		if (people > remaining)
		{
			this->occupancy += remaining;
			this->updateNotification(Notification::CAPACITY_ALERT);
		}
		else
		{
			this->occupancy += people;
		}
	}
	else
	{
		this->updateNotification(Notification::CAPACITY_ALERT);
	}
}
