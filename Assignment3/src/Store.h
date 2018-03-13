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
#include "Electronics.h"
#include "Bread.h"
#include "HealthyBread.h"
#include<iostream>
#include<string>
#include <algorithm>

namespace edu {
namespace neu {
namespace csye6205 {

class Store: public AbstractStore {
protected:
	std::vector<Item *> inventory;
//	std::vector<Electronics *> electronics;
//	std::vector<Bread *> bread;
//	std::vector<HealthyBread *> healthyBread;
	std::string name;
public:
	Store();
	virtual ~Store();

	void addItem(Item *item);
	void showInventory();
	void sortInventory();

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

//	const std::vector<Bread*>& getBread() const {
//		return bread;
//	}
//
//	void setBread(const std::vector<Bread*>& bread) {
//		this->bread = bread;
//	}
//
//	const std::vector<Electronics*>& getElectronics() const {
//		return electronics;
//	}
//
//	void setElectronics(const std::vector<Electronics*>& electronics) {
//		this->electronics = electronics;
//	}
//
//	const std::vector<HealthyBread*>& getHealthyBread() const {
//		return healthyBread;
//	}
//
//	void setHealthyBread(const std::vector<HealthyBread*>& healthyBread) {
//		this->healthyBread = healthyBread;
//	}
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* STORE_H_ */
