#ifndef CLOSED_H
#define CLOSED_H

#include <string>
#include <vector>
#include <iostream>

#include "Status.h"

class Closed : public Status
{
	std::string getMessage();
};

#endif