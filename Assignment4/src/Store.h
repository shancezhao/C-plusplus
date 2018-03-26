/*
 * Store.h
 *
 *  Created on: Feb 28, 2018
 *      Author: zhaos
 */

#ifndef STORE_H_
#define STORE_H_

#include "AbstractStore.h"
#include "Item.h"
#include "Person.h"
#include<iostream>
#include<string>
#include <algorithm>

namespace edu {
namespace neu {
namespace csye6205 {

class Store: public AbstractStore {
protected:
	std::vector<Item *> inventory;
	std::vector<Person *> staff;
	std::string name;
public:
	Store();
	virtual ~Store();

	void addItem(Item *item);
	void addStaff(Person *person);
	void showInventory();
	void showStaff();
	void sortInventorybyPrice();
	void sortInventorybyName();

	const std::vector<Item*>& getInventory() const {
		return inventory;
	}

	void setInventory(const std::vector<Item*>& inventory) {
		this->inventory = inventory;
	}

	const std::string& getName() const {
		return name;
	}

	void setName(const std::string& name) {
		this->name = name;
	}

	const std::vector<Person*>& getStaff() const {
		return staff;
	}

	void setStaff(const std::vector<Person*>& staff) {
		this->staff = staff;
	}
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* STORE_H_ */
