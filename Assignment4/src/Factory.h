/*
 * Factory.h
 *
 *  Created on: Mar 21, 2018
 *      Author: zhaos
 */

#ifndef FACTORY_H_
#define FACTORY_H_

#include <iostream>
#include <vector>
#include <algorithm>
#include "Store.h"
#include "Person.h"
#include "Item.h"

using namespace std;
namespace edu {
namespace neu {
namespace csye6205 {

class Factory: public Store {
protected:
	std::string name;
public:
	Factory();
	Factory(std::string _name);
	virtual ~Factory();

	void freePerson(Person *p);
	void freeObject(Item *i);
	static void demo();
	virtual vector<Person *> createPerson();
	virtual vector<Item *> createObject();

	const std::string& getName() const {
		return name;
	}

	void setName(const std::string& name) {
		this->name = name;
	}
};
} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* FACTORY_H_ */
