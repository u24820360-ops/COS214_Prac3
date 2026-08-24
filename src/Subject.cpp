#include "Subject.h"
#include <iostream>
using namespace std;

Subject::~Subject() {
	//do nothing, you are not reposnible for handling your memory
}

void Subject::attach(Observer *observer)
{
	if (observer)
		this->observers.push_back(observer);
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