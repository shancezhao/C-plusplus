/*
 * Employee.h
 *
 *  Created on: Jan 24, 2018
 *      Author: zhaos
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include "Person.h"
#include <iostream>
#include <string> 	// std::string
#include <vector>
using namespace std;

namespace edu {
namespace neu {
namespace csye6205 {

class Employee: public Person {
private:
	double wage;
public:
	Employee();
	Employee(std::string _firstName, std::string _lastName, double _age, double _wage);
	virtual ~Employee();
	virtual void info();

	static bool sortByWage(Employee *a, Employee *b);

	static void demo();

	double getWage() const {
		return wage;
	}

	void setWage(double wage) {
		this->wage = wage;
	}
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* EMPLOYEE_H_ */
