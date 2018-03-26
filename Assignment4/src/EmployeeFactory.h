/*
 * EmployeeFactory.h
 *
 *  Created on: Feb 12, 2018
 *      Author: zhaos
 */

#ifndef EMPLOYEEFACTORY_H_
#define EMPLOYEEFACTORY_H_

#include <iostream>
#include "Factory.h"
#include "Employee.h"
#include "WriteCSV.h"

using namespace std;
namespace edu {
namespace neu {
namespace csye6205 {

class EmployeeFactory: public Factory {
public:
	EmployeeFactory();
	virtual ~EmployeeFactory();
//	AbstractPersonAPI *createObject(std::string firstName, std::string lastName, int age, double wage);
	vector<Person *> createPerson();
	void freePerson(Employee* obj);
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* EMPLOYEEFACTORY_H_ */
