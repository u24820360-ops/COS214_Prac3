#ifndef OPEN_H
#define OPEN_H

#include <string>
#include <vector>
#include <iostream>

#include "Status.h"

/**
 * @class Open
 * @brief Represents the Open state for the event component
 */

class Open : public Status
{
public:
    std::string getMessage();
};

#endif // OPEN_H
