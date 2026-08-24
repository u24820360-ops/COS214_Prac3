#ifndef PLAYGROUND_H
#define PLAYGROUND_H

#include <iostream>
#include <vector>
#include <string>

#include "EventUnit.h"
#include "Notification.h"
#include "Status.h"
#include "Closed.h"
#include "Open.h"
#include "Paused.h"

/**
 * @class Playground
 * @brief Concrete EventUnit (Leaf)
 * -inherits from EventUnit
 */
class Playground : public EventUnit
{
public:
	virtual ~Playground() {}
	Playground(std::string name);
	Status *determineStatus(Notification notification);	
private:
	Playground();
};

#endif
