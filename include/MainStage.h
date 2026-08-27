#ifndef MAINSTAGE_H
#define MAINSTAGE_H

#include <iostream>
#include <vector>
#include <string>

#include "EventComponent.h"
#include "Paused.h"
#include "Closed.h"
#include "Open.h"

/**
 * @class MainStage
 * @brief ConncreteLeaf in GoF Composite Deigin Pattern
 * -inherits from EvenUnit
 */
class MainStage : public EventComponent
{
public:
/**
 * @brief Constructor
 * @param name name of stage
 */
	MainStage(std::string name);
	virtual ~MainStage() {}
	Status* determineStatus(Notification notification);

	//Task4 updates:
	bool isVipOnly() const;
	void setVipOnly(bool value);

private:
	MainStage();
	//Task4 update:
	bool vipOnly;
};

#endif // MAINSTAGE_H
