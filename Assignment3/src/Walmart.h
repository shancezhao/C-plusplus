/*
 * Walmart.h
 *
 *  Created on: Feb 28, 2018
 *      Author: zhaos
 */

#ifndef WALMART_H_
#define WALMART_H_

#include "Store.h"
#include "Bread.h"
#include "Electronics.h"
#include "HealthyBread.h"
#include <sstream>
#include <algorithm>
#include <vector>
#include <iostream>
namespace edu {
namespace neu {
namespace csye6205 {

class Walmart: public Store {
protected:
	std::string name;
public:
	Walmart(std::string _name);
	virtual ~Walmart();
	static void demo();

	const std::string& getName() const {
		return name;
	}

	void setName(const std::string& name) {
		this->name = name;
	}
//	void addItem(Item *item);
//	void sortInventory();
	//void showInventory();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* WALMART_H_ */
