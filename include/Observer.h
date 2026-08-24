#ifndef OBSERVER_H
#define OBSERVER_H

#include "Subject.h"

/**
 * @class Observer
 * @brief Observer interface for concrete observer with a subject to observe
 * @note GoF design pattern: Observer -> Participation: Observer
 */
class Observer
{
public:
	/**
	 * @brief Handle memory dynamic management for Observer class
	 */
	virtual ~Observer() {}
	/**
	 * 
	 * @brief update the observer when the subject changes
	 * @return void
	 */
	virtual void update() = 0;
	
	
protected:
	Observer();
};

#endif // OBSERVER_H
