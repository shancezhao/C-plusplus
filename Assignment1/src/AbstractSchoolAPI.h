/*
 * AbstractSchoolAPI.h
 *
 *  Created on: Jan 31, 2018
 *      Author: danielgmp
 */

#ifndef ABSTRACTSCHOOLAPI_H_
#define ABSTRACTSCHOOLAPI_H_

#include <iostream>
#include <string> 	// std::string
#include "AbstractPersonAPI.h"
using namespace std;

namespace edu {
namespace neu {
namespace csye6205 {

class AbstractSchoolAPI {
public:
	/**
	 * Pure Virtual methods:
	 * 1. must not be implemented by defining class (AbstractSchoolAPI)
	 * 2. must be implemented by derived class (UniversityBase)
	 */
	AbstractSchoolAPI();
	virtual ~AbstractSchoolAPI();

//	virtual void addEmployee(AbstractPersonAPI *employeePtr);
//	virtual void addStudent(AbstractPersonAPI *studentPtr);
//	virtual std::string showStudents();
//	virtual std::string showEmployees();

	virtual std::string info() = 0;	// API: pure virtual
	virtual std::string show() = 0;	// API: pure virtual
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* ABSTRACTSCHOOLAPI_H_ */
