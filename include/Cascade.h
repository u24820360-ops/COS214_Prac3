#ifndef CASCADE_H
#define CASCADE_H

#include <string>
#include <vector>
#include <iostream>

#include "Status.h"

class Cascade : public Status
{
public:
    std::string getMessage();
};

#endif // CASCADE_H
