#ifndef PAUSED_H
#define PAUSED_H

#include <string>
#include <vector>
#include <iostream>

#include "Status.h"

class Paused : public Status
{
public:
    std::string getMessage();
};

#endif // PAUSED_H
