/*
 * EmployeeFactory.cpp
 *
 *  Created on: Feb 12, 2018
 *      Author: zhaos
 */

#include "EmployeeFactory.h"

namespace edu {
namespace neu {
namespace csye6205 {

EmployeeFactory::EmployeeFactory() {
	// TODO Auto-generated constructor stub

}

EmployeeFactory::~EmployeeFactory() {
	// TODO Auto-generated destructor stub
}

Employee* EmployeeFactory::createObject() {
	Employee *obj_e = nullptr;
	obj_e = new Employee();
	return obj_e;
}

void EmployeeFactory::freeObject(Employee *obj_e) {
	delete obj_e;
	obj_e = nullptr;
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
