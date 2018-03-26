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
protected:
	std::string firstName;
	std::string lastName;
	int age;
public:
	Person();
	Person(std::string _firstName, std::string _lastName, int _age);
	virtual ~Person();

	void show();
	friend std::ostream &operator<<(std::ostream& output, const Person& p);
	virtual float getWAGE() const {
		return 0;
	}


	int getAge() const {
		return age;
	}

	void setAge(int age) {
		this->age = age;
	}

	const std::string& getFirstName() const {
		return firstName;
	}

	void setFirstName(const std::string& firstName) {
		this->firstName = firstName;
	}

	const std::string& getLastName() const {
		return lastName;
	}

	void setLastName(const std::string& lastName) {
		this->lastName = lastName;
	}
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* PERSON_H_ */
