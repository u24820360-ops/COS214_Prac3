#ifndef SUBJECT_H
#define SUBJECT_H

#include <iostream>
#include <vector>
#include <string>

class Observer;

/**
 * @class Subject
 * @brief Subject interface for classes to be observed in the for proper execution of eventflow
 * @note Design Pattern: Observer -> participation: subject
 */
class Subject
{
public:
	virtual ~Subject();

	/**
	 * @brief Add an observer to the the list of observers observing named subject
	 * @param observer pointer to an observer that is observing this subject in the observer pattern
	 */
	void attach(Observer *observer);

	/**
	 * @brief remove an observer from the list of observer observing the named subject
	 * @param observer Pointer to an oserver object to be removed
	 */
	void detach(Observer *observer);

	/**
	 * @brief loop through the list of observer and update them of the state change
	 * runs observer->update() for all observers observing the subject
	 */
	void notify();

private:
	/**
	 * @brief List of observers observing the subject
	 */
	std::vector<Observer *> observers;

protected:
	Subject() {};
};

#endif // SUBJECT_H
