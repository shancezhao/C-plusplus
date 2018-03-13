/*
 * SimpleFactory.h
 *
 *  Created on: Feb 9, 2018
 *      Author: zhaos
 */

#ifndef SIMPLEFACTORY_H_
#define SIMPLEFACTORY_H_

#include <iostream>
#include "Person.h"
using namespace std;

namespace edu {
namespace neu {
namespace csye6205 {

class SimpleFactory {
public:
	SimpleFactory();
	virtual ~SimpleFactory();

	Person *getObject(int criteria);
	void freeObject(Person *p);

	static void demo();
	static void demo2();
	virtual Person* createObject();

};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* SIMPLEFACTORY_H_ */
