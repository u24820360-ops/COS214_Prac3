#include "EventComponent.h"
#include <iostream>

using namespace std;
EventComponent::EventComponent(std::string name)
{
	this->name = name;
	this->subject = nullptr;
	this->capacity = 0;
	this->occupancy = 0;
	this->status = nullptr;
	this->notification = Notification::UNDEFINED;
}

void EventComponent::update()
{
	if (this->subject)
	{
		this->notification = this->subject->getNotification();
		this->capacity = this->subject->getCapacity();
		this->setStatus(this->determineStatus(this->subject->getNotification()));
	}
}

string EventComponent::getName() { return this->name; }

void EventComponent::setName(std::string name)
{
	this->name = name;
}

Status* EventComponent::getStatus()
{
	return this->status;
}

void EventComponent::setStatus(Status* status) 
{
	if(this->status) delete this->status;
	this->status=status;
}

void EventComponent::setSubject(EventControl *subject)
{
	this->subject = subject;
}

void EventComponent::display (string indent ) 
{
	cout << this->name << endl
	<<indent << "Status: " << this->status << endl;
}
