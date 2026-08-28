#ifndef ENTRANCEGATE_H
#define ENTRANCEGATE_H

#include <iostream>
#include <vector>
#include <string>

#include "EventComponent.h"
#include "Notification.h"
#include "Status.h"
#include "Closed.h"
#include "Open.h"

/**
 * @class EntranceGate
 * - inherits from EventUnit
 * @brief Concrete leaf for EventComponent in Composite GoF Design Pattern
 */
class EntranceGate : public EventComponent {
private:

public:
	~EntranceGate() {}
	
	/**
	 * @brief Constructor
	 * @param name name of the EventComponent
	 */
	EntranceGate(std::string name);
	
	void display(std::string indent);
	Status* determineStatus(Notification notification);
	
	
	private:
	EntranceGate();
};

#endif // ENTRANCEGATE_H
