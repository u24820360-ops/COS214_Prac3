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
#include "Personnel.h"

/**
 * @class SecurityTeam
 * @brief Concrete EventComponent/Personnel 
 */
class SecurityTeam: public Personnel {
public:
	SecurityTeam(std::string name);
	virtual ~SecurityTeam() {}
	Status* determineStatus(Notification notification);
	
	private: 
	SecurityTeam();
};

#endif