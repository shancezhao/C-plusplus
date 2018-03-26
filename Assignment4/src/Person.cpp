/*
 * Person.cpp
 *
 *  Created on: Feb 9, 2018
 *      Author: zhaos
 */

#include "Person.h"

namespace edu {
namespace neu {
namespace csye6205 {

Person::Person() {

}

Person::Person(std::string _firstName, std::string _lastName, int _age) :
		firstName(_firstName), lastName(_lastName), age(_age) {

}

Person::~Person() {
	// TODO Auto-generated destructor stub
}
std::ostream &operator<<(std::ostream& output, const Person& p) {
	std::string str = "Name: " + p.getFirstName() + " " + p.getLastName()
			+ ", age:" + std::to_string(p.getAge());
	if (!p.getWAGE()==0) {
		str = str + ", wage: " + std::to_string(p.getWAGE());
	}
	output << str;
	return output;
}

void Person::show() {
	cout << "\tThis is the Person part." << endl;
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
