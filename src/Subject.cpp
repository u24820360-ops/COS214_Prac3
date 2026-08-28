#include "Subject.h"
#include <iostream>
using namespace std;

Subject::~Subject()
{
	auto iterator = this->observers.begin();
	while(iterator != this->observers.end()) 
	{
		(*iterator)->detach(); //set te observers subject to null cos this subject can no longer be observed
		++iterator;
	}
}

void Subject::attach(Observer *observer)
{
	if (observer)
	{
		//no duplicate allowed
		auto iterator = this->observers.begin();
		while (iterator != this->observers.end())
		{
			if ((*iterator) == observer)
				return;
			iterator++;
		}
		this->observers.push_back(observer);
	}
}

void Subject::detach(Observer *observer)
{
	if (observer)
	{
		auto iterator = this->observers.begin();
		while (iterator != this->observers.end())
		{
			if ((*iterator) == observer)
				iterator = this->observers.erase(iterator);
			else
				iterator++;
		}
	}
}

void Subject::notify()
{
	auto iterator = this->observers.begin();
	while (iterator != this->observers.end())
	{
		(*iterator)->update();
	}
}