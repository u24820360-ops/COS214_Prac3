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
	virtual void add(EventComponent *child) {}

	/**
	 * @brief remove target EventComponent from children list
	 * - does nothing for leaf components
	 * @param target the child to be removed from the children list
	 * @return void
	 */
	virtual void remove(EventComponent *target) {}

	// inherited from observer superclass
	void update();

	/**
	 * @brief print information for EventComponent
	 * @param indent Level of indention for nested components
	 * @return void
	 */
	virtual void display(std::string indent = "");

	/**
	 * @brief return name of EventComponent
	 * @return string
	 */
	std::string getName();

	/**
	 * @brief return vector of children EventComponents
	 * @return vector<EventComponent*>
	 */
	virtual std::vector<EventComponent *> getChildren() { return {}; }

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
	Status* getStatus();

	/**
	 * @brief set status to new passed in status
	 * - sets status based on the notification passed in
	 * @param status new status
	 * @return void
	 */
	void setStatus(Status* status);
	
	/**
	 * @brief Determine the appropriate next state base on notification
	 * @param notification Notification from subject
	 * @return Status* new status
	 */
	virtual Status* determineStatus(Notification Notification)=0; 

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
	int occupancy;
	Status* status;

private:
	EventComponent();
};

#endif
