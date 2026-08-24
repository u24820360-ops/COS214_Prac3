#ifndef IDLE_H
#define IDLE_H

#include <string>
#include <vector>
#include <iostream>

#include "Status.h"

class Idle : public Status
{
public:
    std::string getMessage();
};

#endif // IDLE_H
