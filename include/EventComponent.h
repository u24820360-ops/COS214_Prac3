#ifndef EVENTCOMPONENT_H
#define EVENTCOMPONENT_H

#include <iostream>
#include <vector>
#include <string>

#include "Observer.h"
#include "Subject.h"
#include "Notification.h"
#include "Status.h"
#include "EventControl.h"

/**
 * @class EventComponent
 * @brief interface describing the behaviour of leaves and composites for the EventFlow System
 * inherits from observer class and observes EventControl in Observer Pattern
 * @note GoF Design Pattern, Participation -> Component
 */
class EventComponent : public Observer
{
public:
	virtual ~EventComponent() {};

	/**
	 * @brief Constructor: create instance of of event class.
	 * note that you cannot instantiate object of abstract class
	 * @param name identifier name for given EventComponent
	 */
	EventComponent(std::string name);

	/**
	 * @brief add EventComponent to children vector in EventGroup for composite evnt type
	 * - Does nothing for leaf EventComponent because it doea not contain a vector of EventComponent
	 * @param child Even component to be added to vector of event components for EventGroup
	 */
	virtual void add(EventComponent *child);

	//inherited from observer superclass
	void update();

	/**
	 * @brief print information for EventComponent
	 * @param indent Level of indention for nested components
	 * @return void
	 */
	virtual void display(std::string indent="")=0;

	/**
	 * @brief return name of EventComponent
	 * @return string
	 */
	std::string getName();
	
	/**
	 * @brief return vector of children EventComponents
	 * @return vector<EventComponent*>
	 */
	virtual std::vector<EventComponent*> getChildren();

	/**
	 * @brief update EventComponent name
	 * @param name new name
	 * @return void 
	 */
	void setName(std::string name);
	
	/**
	 * @brief return status of VeentComponent
	 * @return Status EventComponent status
	 */
	Status getStatus();
	
	/**
	 * @brief set status to new passed in status
	 * - sets status based on the notification passed in
	 * @param Notification new status
	 * @return void
	 */
	virtual void setStatus(Notification notification)=0;
	
	/**
	 * @brief set Subject to passed in subject parameter
	 * @param subject new subject
	 * @return void
	 */
	void setSubject(EventControl *subject);
	
	
protected:
	/**
	 * @brief subject beign observed
	 */
	EventControl *subject;
	std::string name;
	Notification notification;
	int capacity;
	Status status;

private:
	EventComponent();
};

#endif 
