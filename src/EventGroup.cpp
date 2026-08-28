#include "EventGroup.h"

using namespace std;

EventGroup::EventGroup(string name) : EventComponent(name) {}

EventGroup::~EventGroup()
{
	auto iterator = this->children.begin();
	while (iterator != this->children.end())
	{
		if ((*iterator))
			delete (*iterator);
		++iterator;
	}
}

void EventGroup::setSubject(EventControl* subject) 
{
	this->subject=subject;
	if(this->subject) this->update();
	
	//make the children subscribe to the same subject
	auto iterator = this->children.begin();
	while(iterator != this->children.end()) 
	{
		(*iterator)->setSubject(subject);
	}
	
}

void EventGroup::add(EventComponent *child)
{
	if (child)
	{
		// duplicates not allowed
		auto iterator = this->children.begin();
		while (iterator != this->children.end())
		{
			if (child == (*iterator))
				return;
			iterator++;
		}
		this->children.push_back(child);
	}
}

void EventGroup::update() 
{
	cout << "[C]: " << this->name << endl;
	auto iterator=this->children.begin();
	while(iterator != this->children.end()) 
	{
		(*iterator)->update();
		++iterator;
	}
}

void EventGroup::remove(EventComponent *target)
{
	if (target)
	{
		auto iterator = this->children.begin();
		while (iterator != this->children.end())
		{
			if ((*iterator) == target)
				iterator = this->children.erase(iterator);
			else
				++iterator;
		}
	}
}

void EventGroup::display(string indent)
{
	cout << indent << "G: " << this->name << endl
		 << indent << (status? this->status->getMessage() : "null") << endl;
	cout << "++++ Child Items +++" << endl;
	auto iterator = this->children.begin();
	while (iterator != this->children.end())
	{
		(*iterator)->display(indent + "\t");
		++iterator;
	}
	cout << "+++++++++++" << endl;
	
}

vector<EventComponent *> EventGroup::getChildren()
{
	return this->children;
}
