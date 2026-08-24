#ifndef MAINSTAGE_H
#define MAINSTAGE_H

#include <iostream>
#include <vector>
#include <string>

#include "EventUnit.h"
#include "Paused.h"
#include "Closed.h"
#include "Open.h"

/**
 * @class MainStage
 * @brief ConncreteLeaf in GoF Composite Deigin Pattern
 * -inherits from EvenUnit
 */
class MainStage : EventUnit
{
public:
/**
 * @brief Constructor
 * @param name name of stage
 */
	MainStage(std::string name);
	virtual ~MainStage() {}
	Status* determineStatus(Notification notification);

private:
	MainStage();
};

#endif // MAINSTAGE_H
