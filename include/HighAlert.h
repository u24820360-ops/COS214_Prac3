#ifndef HIGHALERT_H
#define HIGHALERT_H

#include <string>
#include <vector>
#include <iostream>

#include "Status.h"

class HighAlert : public Status
{
public:
    std::string getMessage();
};

#endif // HIGHALERT_H
