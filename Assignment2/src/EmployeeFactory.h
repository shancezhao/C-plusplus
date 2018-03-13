/*
 * EmployeeFactory.h
 *
 *  Created on: Feb 12, 2018
 *      Author: zhaos
 */

#ifndef EMPLOYEEFACTORY_H_
#define EMPLOYEEFACTORY_H_

#include <iostream>
#include "SimpleFactory.h"
#include "Employee.h"

namespace edu {
namespace neu {
namespace csye6205 {

class EmployeeFactory: public SimpleFactory {
public:
	EmployeeFactory();
	virtual ~EmployeeFactory();
	Employee* createObject();
	void freeObject(Employee* obj);
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* EMPLOYEEFACTORY_H_ */
