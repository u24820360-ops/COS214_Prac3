#ifndef CASCADE_H
#define CASCADE_H

#include <string>
#include <vector>
#include <iostream>

#include "Status.h"

/**
 * @class Cascade
 * @brief Represents the Cascade state for the event component
 */

class Cascade : public Status
{
public:
    std::string getMessage();
};

#endif // CASCADE_H
