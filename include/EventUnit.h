#ifndef EVENTUNIT_H
#define EVENTUNIT_H

#include <iostream>
#include <vector>
#include <string>

#include "EventComponent.h"

/**
 * @class EventUnit
 * @brief GoF Leaf abstract class in Composite pattern
 * - inherits from EventComponent and defines a single unit of EventComponent
 */
class EventUnit : public EventComponent
{
public:
	virtual ~EventUnit() {}

protected:
	EventUnit(std::string name);
	EventUnit();
};

#endif // EVENTUNIT_H
