#ifndef OPEN_H
#define OPEN_H

#include <string>
#include <vector>
#include <iostream>

#include "Status.h"

class Open : public Status
{
public:
    std::string getMessage();
};

#endif // OPEN_H
