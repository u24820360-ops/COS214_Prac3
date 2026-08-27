#include "EventComponent.h"
#include <iostream>

using namespace std;
EventComponent::EventComponent(string name)
{
	this->name = name;
	this->subject = subject;
	this->capacity = 0;
	this->occupancy = 0;
	this->status = nullptr;
	this->notification = Notification::UNDEFINED;
}

EventComponent::~EventComponent()
{
	this->subject->detach(this); // remove this observer from subject
}

void EventComponent::update()
{
	if (this->subject)
	{
		this->notification = this->subject->getNotification();
		this->capacity = this->subject->getCapacity();
		this->setStatus(this->determineStatus(this->subject->getNotification()));
		cout << endl
			 << "Notification received" << endl;
		this->display();
	}
}

void EventComponent::detach()
{
	if (this->subject)
		this->subject = nullptr;
}

string EventComponent::getName() { return this->name; }

void EventComponent::setName(string name)
{
	this->name = name;
}

Status *EventComponent::getStatus()
{
	return this->status;
}

void EventComponent::setStatus(Status *status)
{
	if (this->status)
		delete this->status;
	this->status = status;
}

void EventComponent::setSubject(EventControl *subject)
{
	this->subject = subject;
}

void EventComponent::display(string indent)
{
	cout << this->name << endl
		 << indent << "Status: " << this->status << endl;
}

Status *EventComponent::determineStatus(Notification notification)
{
	return new Cascade();
}
