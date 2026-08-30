#ifndef PLAYGROUND_H
#define PLAYGROUND_H

#include <iostream>
#include <vector>
#include <string>

#include "EventComponent.h"
#include "Notification.h"
#include "Status.h"
#include "Closed.h"
#include "Open.h"
#include "Paused.h"

/**
 * @class Playground
 * @brief Concrete EventComponent (Leaf)
 * -inherits from EventComponent
 */
class Playground : public EventComponent
{
public:
	virtual ~Playground() {}
	/**
	 * @brief Constructs a Playground
	 * @param name name of the Playground
	 */
	Playground(std::string name);
	Status *determineStatus(Notification notification);	
private:
	Playground();
};

#endif
