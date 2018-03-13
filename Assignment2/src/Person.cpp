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

//Person::Person(std::string firstName,std::string lastName, int age){
//	this->firstName=firstName;
//	this->lastName=lastName;
//	this->age=age;
//}

Person::~Person() {
	// TODO Auto-generated destructor stub
}

//const std::string& Person::getFirstName() const {
//	return firstName;
//}
//void Person::setFirstName(const std::string& firstName) {
//	this->firstName=firstName;
//}
//
//const std::string& Person::getLastName() const {
//	return lastName;
//}
//
//void Person::setLastName(const std::string& lastName) {
//	this->lastName = lastName;
//}
//
//int Person::getAge() const {
//	return age;
//}
//void Person::setAge(int age) {
//	this->age = age;
//}

void Person::show() {
	cout << "\t This is the Person part." << endl;
//	cout << "Show: Student IS-A Person ONLY HERE." << endl;
//	Person *ptr;
//	Student g1;
//	ptr = g1;
//	Employee a1;
////	ptr = static_cast<Explosion*>(&a1); // private inheritance NOT IS-A
//	return;
}
} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
