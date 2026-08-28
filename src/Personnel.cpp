#include "Personnel.h"
#include <iostream>

using namespace std;

Personnel::Personnel(string name) : EventComponent(name) {}

vector<string> Personnel::getPersonnel() { return this->personnel; }

void Personnel::setPersonnel(vector<string> personnel) { this->personnel = personnel; }

void Personnel::addPersonnel(string personnel) { this->personnel.push_back(personnel); }

void Personnel::display(string indent) 
{
	cout << this->name << endl
	<< "Personnel List: " << endl;
	
	auto iterator=this->personnel.begin();
	while(iterator != this->personnel.end()) 
	{
		cout << indent << "+ " << (*iterator) <<endl;
		iterator++;
	}
}