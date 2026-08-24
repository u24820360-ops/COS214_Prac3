#ifndef STATUS_H
#define STATUS_H

#include <string>
#include <vector>
#include <iostream>

/**
 * @class Status
 * - manages the status of the EventComponent object
 */
class Status
{
public:
/**
 * @brief return different message depending on the state of event component
 * @return string
 */
	virtual std::string getMessage()=0;
};

#endif