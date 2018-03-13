/*
 * Person.h
 *
 *  Created on: Feb 9, 2018
 *      Author: zhaos
 */

#ifndef PERSON_H_
#define PERSON_H_

#include "AbstractPersonAPI.h"
#include <iostream>
#include <string>

using namespace std;
namespace edu {
namespace neu {
namespace csye6205 {

class Person: public AbstractPersonAPI {
//protected:
//	std::string firstName;
//	std::string lastName;
//	int age;
public:
	Person();
	//Person(std::string firstName,std::string lastName, int age);
	virtual ~Person();

//	int getAge() const;
//
//	void setAge(int age);
//
//	const std::string& getFirstName() const;
//
//	void setFirstName(const std::string& firstName);
//
//	const std::string& getLastName() const;
//
//	void setLastName(const std::string& lastName);

	void show();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* PERSON_H_ */
