#ifndef HIGHALERT_H
#define HIGHALERT_H

#include <string>
#include <vector>
#include <iostream>

#include "Status.h"

/**
 * @class HighAlert
 * @brief Represents the HighAlert state for the event component
 */

class HighAlert : public Status
{
public:
    std::string getMessage();
};

#endif // HIGHALERT_H
