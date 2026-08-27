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
#include "EventComponent.h"

/**
 * @class SecurityTeam
 * @brief Concrete EventUnit/Personnel 
 */
class SecurityTeam: public EventComponent {
public:
	SecurityTeam(std::string name);
	virtual ~SecurityTeam() {}
	Status* determineStatus(Notification notification);
	
	private: 
	SecurityTeam();
};

#endif