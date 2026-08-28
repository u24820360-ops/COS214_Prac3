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
#include "Personnel.h"

/**
 * @class CleaningTeam
 * @brief Concrete EventUnit/Personnel 
 */
class CleaningTeam: public Personnel {
public:
	CleaningTeam(std::string name);
	virtual ~CleaningTeam() {}
	Status* determineStatus(Notification notification);
	virtual void setStatus(Notification notification);
	
	private: 
	CleaningTeam();
};

#endif // CLEANINGTEAM_H
