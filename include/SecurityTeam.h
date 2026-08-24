#ifndef SECURITYTEAM_H
#define SECURITYTEAM_H

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
 * @class SecurityTeam
 * @brief Concrete EventUnit/Personnel 
 */
class SecurityTeam:EventUnit{
public:
	SecurityTeam(std::string name);
	virtual ~SecurityTeam() {}
	Status* determineStatus(Notification notification);
	
	private: 
	SecurityTeam();
};

#endif