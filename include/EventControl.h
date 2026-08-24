#ifndef EVENTCONTROL_H
#define EVENTCONTROL_H

#include <iostream>
#include <vector>
#include <string>

#include "Subject.h"
#include "Notification.h"

/**
 * @class EventControl
 * @brief EventCotrol for guiding the actions of the different sections/participants in EventFlow
 * @note ConcreteSubject in observer design pattern
 */
class EventControl : public Subject
{
public:
	/**
	 * @brief Constructor: create instance of EventControl
	 * @param capacity maximum number of people allowed to be in the even
	 */
	EventControl(int capacity);
	virtual ~EventControl() {};
	/**
	 * @brief return notification for givent EventControl
	 * @return Notification
	 */
	Notification getNotification();
	
	/**
	 * @brief set EventControl notification to passed in notification
	 * @param notification new notification
	 * @return void
	 */
	void updateNotification(Notification notification);
	
	/**
	 * @brief return the capacity of EventControl
	 * @return capacity
	 */
	int getCapacity();
	
	/**
	 * @brief set the capacit yof EventControl
	 * @param capcity new capacity
	 * @return void
	 */
	void setCapacity(int capacity);
	
	/**
	 * @brief admit named number of people into event
	 * increment occupancy by that number of people
	 * @param poeple count of people being admited into the event
	 * @return void
	 */
	void admit(int people);

private:
	EventControl();
	Notification notification;
	int capacity;
	int occupancy;
};

#endif // EVENTCONTROL_H
