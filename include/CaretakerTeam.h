#ifndef CARETAKERTEAM_H
#define CARETAKERTEAM_H

#include <iostream>
#include <vector>
#include <string>

#include "EventUnit.h"
#include "Status.h"
#include "Idle.h"
#include "Active.h"

class CaretakerTeam : EventUnit
{
public:
	CaretakerTeam(std::string name);
	virtual ~CaretakerTeam() {}
	Status *determineStatus(Notification notification);

private:
	CaretakerTeam();
};

#endif // CARETAKERTEAM_H
