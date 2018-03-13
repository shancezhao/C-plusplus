/*
 * Employee.h
 *
 *  Created on: Feb 9, 2018
 *      Author: zhaos
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include "Person.h"

#include <iostream>

using namespace std;
namespace edu {
namespace neu {
namespace csye6205 {

class Employee: public Person {
public:
	Employee();
	virtual ~Employee();

	void show();

//	void createPerson();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* EMPLOYEE_H_ */
