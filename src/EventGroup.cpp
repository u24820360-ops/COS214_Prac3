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
	cout << this->name << endl
		 << "\t" << this->status << endl;

	auto iterator = this->children.begin();
	int list = 1;
	while (iterator != this->children.end())
	{
		cout << "[" << list++ << "] ";
		(*iterator)->display("\t");
		++iterator;
	}
}

vector<EventComponent *> EventGroup::getChildren()
{
	return this->children;
}
