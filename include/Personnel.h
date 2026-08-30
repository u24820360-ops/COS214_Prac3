#ifndef PERSONNEL_H
#define PERSONNEL_H

#include <iostream>
#include <vector>
#include <string>

#include "EventComponent.h"

/**
 * @class Personnel
 * @brief The Base Class for the Personnel teams
 */

class Personnel : public EventComponent
{
public:
	/**
	 * @brief Destructor
	 */
	virtual ~Personnel() {}
	
	/**
	 * @brief return a vector list of people in personnel team
	 * @return vector<string>
	 */
	std::vector<std::string> getPersonnel();
	
	/**
	 * @brief set personnel list to passed in parameter
	 * - replaces the entire personnel list
	 * @param personnel vector<string> of personnel names
	 */
	void setPersonnel(std::vector<std::string> personnel);
	
	/**
	 * @brief add one person to personnel list
	 * @param personnel name of person to be added
	 */
	void addPersonnel(std::string personnel);
	
	//functions described in superclass
	
	void display(std::string indent="");
	
	virtual Status* determineStatus(Notification notification)=0;

protected:
	/**
	 * @brief list of names of people working in that team
	 */
	std::vector<std::string> personnel;

	/**
	 * @brief Constructor
	 * @param name name of the Personnel team eg "Stage Security"
	 */
	Personnel(std::string name);

private:
	Personnel();
};

#endif 
