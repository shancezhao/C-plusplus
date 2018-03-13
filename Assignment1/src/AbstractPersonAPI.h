/*
 * AbstractPersonAPI.h
 *
 *  Created on: Jan 24, 2018
 *      Author: zhaos
 */

#ifndef ABSTRACTPERSONAPI_H_
#define ABSTRACTPERSONAPI_H_
#include <iostream>
#include <string> 	// std::string
#include <vector>
using namespace std;

namespace edu {
namespace neu {
namespace csye6205 {

class AbstractPersonAPI {
protected:
	std::string firstName;
	std::string lastName;
	int age;
public:
	AbstractPersonAPI();
	AbstractPersonAPI(std::string firstName,std::string lastName, int age);
	virtual ~AbstractPersonAPI();

	int getAge() const;

	void setAge(int age);

	const std::string& getFirstName() const;

	void setFirstName(const std::string& firstName);

	const std::string& getLastName() const;

	void setLastName(const std::string& lastName);

	virtual void info()=0;
	virtual void show();
//	virtual void addEmployee(AbstractPersonAPI *employeePtr);
//	virtual void addStudent(AbstractPersonAPI *studentPtr);
//	virtual std::string showStudents();
//	virtual std::string showEmployees();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* ABSTRACTPERSONAPI_H_ */
