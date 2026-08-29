#ifndef FOODTRUCK_H
#define FOODTRUCK_H

#include <iostream>
#include <vector>
#include <string>

#include "EventComponent.h"
#include "Status.h"
#include "Open.h"
#include "Paused.h"
#include "Closed.h"
#include "Notification.h"

/**
 * @class FoodTruck
 * - inherits from EventComponent
 * - ConcreteLeaf in Composite GoF Design Pattern
 */
class FoodTruck : public EventComponent
{

public:
	/**
	 * @brief Constructor
	 * - create instance of FoodTruck
	 * @param menu List of food that is being served
	 * @param name identifier name for the truck
	 */
	FoodTruck(std::string name, std::vector<std::string> menu);
	~FoodTruck() {}

	/**
	 * @brief return the menu
	 * @return vector<string> List of food being served
	 */
	std::vector<std::string> getMenu();

	/**
	 * @brief set the menu
	 * @param menu
	 * @return void
	 */
	void setMenu(std::vector<std::string> menu);

	/**
	 * @brief add item to the menu
	 * @param item Name of food to be added to the menu
	 * @return void
	 */
	void updateMenu(std::string item);

	void display(std::string indent = "");

	Status *determineStatus(Notification notification);

	// Task4 updates:
	/**
	 * @brief Retrieve the current food stock level.
	 * @return int Remaining stock quantity.
	 */
	int getStockLevel() const;
	
	/**
	 * @brief Update the available stock level.
	 * @param stock New stock quantity.
	 */
	void setStockLevel(int stock);
	
	/**
	 * @brief Determine whether the truck requires restocking.
	 * @return bool true if stock has fallen below the operational threshold.
	 */
	bool needRestock() const;

private:
	FoodTruck();

	/**
	 * @brief list of foods being served eg Salvory rice, beef jerky, pork chop, chicken leg #Monastery special
	 */
	std::vector<std::string> menu;

	/**
	 * @brief Current quantity of food stock available for service.
	 */
	int stockLevel;
};

#endif // FOODTRuCK_H
