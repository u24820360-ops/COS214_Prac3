#ifndef TOILETSTALL_H
#define TOILETSTALL_H

#include <iostream>
#include <vector>
#include <string>

#include "Status.h"
#include "Closed.h"
#include "Open.h"
#include "EventComponent.h"
#include "Notification.h"

/**
 * @class ToiletStall
 * -inherits from EventComponent
 * -Concrete leaf in Composite GoF Design Pattern
 */
class ToiletStall: public EventComponent {
private:

public:
	/**
	 * @brief Constructs a ToiletStall
	 * @param name name of the ToiletStall
	 */
	ToiletStall(std::string name);
	virtual ~ToiletStall() {};
	Status* determineStatus(Notification notification);
	
private:
ToiletStall();
};

#endif // TOILETSTALL_H
