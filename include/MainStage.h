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
/**
 * @brief Check whether the stage is currently restricted to VIP attendees.
 *
 * VIP mode may be enabled during overcrowding or special performances.
 *
 * @return true if VIP-only access is active.
 */
	bool isVipOnly() const;
/**
 * @brief Enable or disable VIP-only access.
 *
 * Used as an event-specific feature for crowd management.
 *
 * @param value New VIP access state.
 */
	void setVipOnly(bool value);

private:
	MainStage();
	//Task4 update:
/**
 * @brief Indicates whether the stage is operating in VIP-only mode.
 */
	bool vipOnly;
};

#endif // MAINSTAGE_H
