#include "EventComponent.h"
#include <iostream>

using namespace std;
EventComponent::EventComponent(std::string name)
{
	this->name = name;
	this->subject = nullptr;
	this->capacity = 0;
	this->status = Status::UNDEFINED;
	this->notification = Notification::UNDEFINED;
}

void EventComponent::add(EventComponent *child)
{
	// do nothing by default
}

void EventComponent::update()
{
	if (this->subject)
	{
		this->notification = this->subject->getNotification();
		this->capacity = this->subject->getCapacity();
		this->setStatus(this->subject->getNotification());
	}
}

string EventComponent::getName() { return this->name; }

vector<EventComponent *> EventComponent::getChildren()
{
	return {}; // empty for non composite EventComponents
}

void EventComponent::setName(std::string name)
{
	this->name = name;
}

Status EventComponent::getStatus()
{
	return this->status;
}

void EventComponent::setSubject(EventControl *subject)
{
	this->subject = subject;
}
