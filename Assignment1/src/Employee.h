/*
 * Employee.h
 *
 *  Created on: Jan 24, 2018
 *      Author: zhaos
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include "AbstractPersonAPI.h"
#include <iostream>
#include <string> 	// std::string
using namespace std;

namespace edu {
namespace neu {
namespace csye6205 {

class Employee: public AbstractPersonAPI {
private:
	int id;
public:
	Employee();
	Employee(std::string firstName,std::string lastName, int age,int id);
	virtual ~Employee();
	int getId() const;
	void setId(int id);
	virtual void info();
	virtual void demo();
	void show();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* EMPLOYEE_H_ */
