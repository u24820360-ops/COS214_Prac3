#ifndef CLOSED_H
#define CLOSED_H

#include <string>
#include <vector>
#include <iostream>

#include "Status.h"

/**
 * @class Closed
 * @brief Represents the Closed state for the event component
 */

class Closed : public Status
{
	std::string getMessage();
};

#endif