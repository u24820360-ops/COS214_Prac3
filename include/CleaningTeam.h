#ifndef CLEANINGTEAM_H
#define CLEANINGTEAM_H

#include <iostream>
#include <vector>
#include <string>

#include "Status.h"
#include "Active.h"
#include "Idle.h"
#include "HighAlert.h"
#include "Notification.h"
#include "EventUnit.h"

/**
 * @class CleaningTeam
 * @brief Concrete EventUnit/Personnel 
 */
class CleaningTeam:EventUnit{
public:
	CleaningTeam(std::string name);
	virtual ~CleaningTeam() {}
	Status* determineStatus(Notification notification);
	
	private: 
	CleaningTeam();
};

#endif // CLEANINGTEAM_H
