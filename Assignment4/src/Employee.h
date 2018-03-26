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
protected:
	float wage;
public:
	Employee();
	Employee(std::string _firstName, std::string _lastName, int _age,
			float _wage);
	virtual ~Employee();

	void show();

	float getWAGE() const {
			return wage;
	}

	float getWage() const {
		return wage;
	}

	void setWage(float wage) {
		this->wage = wage;
	}
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* EMPLOYEE_H_ */
