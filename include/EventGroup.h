#ifndef EVENTGROUP_H
#define EVENTGROUP_H

#include <iostream>
#include <vector>
#include <string>

#include "EventComponent.h"
#include "Cascade.h"
#include "Status.h"

class EventGroup : public EventComponent
{
public:
	/**
	 * @brief Constructor
	 * @param name name of EventGroup
	 */
	EventGroup(std::string name);
	~EventGroup();
	

	void add(EventComponent* child);
	virtual void update();//update all the children
	void remove(EventComponent* child);
	void setSubject(EventControl* subject);
	void display(std::string indent="");
	std::vector<EventComponent*> getChildren();


protected:
	std::vector<EventComponent *> children;

private:
	EventGroup();
};

#endif // EVENTGROUP_H
