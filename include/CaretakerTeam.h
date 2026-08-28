#ifndef CARETAKERTEAM_H
#define CARETAKERTEAM_H

#include <iostream>
#include <vector>
#include <string>

#include "Personnel.h"
#include "Status.h"
#include "Idle.h"
#include "Active.h"

class CaretakerTeam: public Personnel
{
public:
	CaretakerTeam(std::string name);
	virtual ~CaretakerTeam() {}
	Status *determineStatus(Notification notification);
	virtual void setStatus(Notification notification);

private:
	CaretakerTeam();
};

#endif // CARETAKERTEAM_H
