#ifndef CARETAKERTEAM_H
#define CARETAKERTEAM_H

#include <iostream>
#include <vector>
#include <string>

#include "Personnel.h"
#include "Status.h"
#include "Idle.h"
#include "Active.h"

/**
 * @class CaretakerTeam
 * @brief Concrete EventComponent/Personnel
 */

class CaretakerTeam: public Personnel
{
public:
	/**
	 * @brief Constructs a CaretakerTeam
	 * @param name name of the CareTakerTeam
	 */
	CaretakerTeam(std::string name);
	virtual ~CaretakerTeam() {}
	Status *determineStatus(Notification notification);

private:
	CaretakerTeam();
};

#endif // CARETAKERTEAM_H
