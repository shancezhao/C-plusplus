/*
 * Employee.cpp
 *
 *  Created on: Feb 9, 2018
 *      Author: zhaos
 */

#include "Employee.h"

namespace edu {
namespace neu {
namespace csye6205 {

Employee::Employee() {

}
Employee::Employee(std::string _firstName, std::string _lastName, int _age,
		float _wage) :
		Person(_firstName, _lastName, _age), wage(_wage) {
	// TODO Auto-generated constructor stub

}

Employee::~Employee() {
	// TODO Auto-generated destructor stub
}

void Employee::show() {
	std::cout << std::endl;
	std::cout << "\t This is the employee part." << std::endl;
	std::cout << this->firstName << " " << this->lastName << ", age: "
			<< this->age << ", wage: " << this->wage << std::endl;
}

//void Employee::createPerson() {
//
//}
} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
