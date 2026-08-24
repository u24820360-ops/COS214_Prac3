#ifndef ACTIVE_H
#define ACTIVE_H

#include <string>
#include <vector>
#include <iostream>

#include "Status.h"

class Active : public Status
{
public:
    std::string getMessage();
};

#endif // ACTIVE_H
