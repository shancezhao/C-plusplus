/*
 * AbstractPersonAPI.cpp
 *
 *  Created on: Jan 24, 2018
 *      Author: zhaos
 */

#include "AbstractPersonAPI.h"
#include <iostream>

namespace edu {
namespace neu {
namespace csye6205 {

AbstractPersonAPI::AbstractPersonAPI() {
	// TODO Auto-generated constructor stub

}
AbstractPersonAPI::AbstractPersonAPI(std::string firstName,std::string lastName, int age){
	this->firstName=firstName;
	this->lastName=lastName;
	this->age=age;
}
AbstractPersonAPI::~AbstractPersonAPI() {
	// TODO Auto-generated destructor stub
}

//void info(){
//	std::cout<<"This is an AbstractPerson."<<std::endl;
//}
const std::string& AbstractPersonAPI::getFirstName() const {
	return firstName;
}
void AbstractPersonAPI::setFirstName(const std::string& firstName) {
	this->firstName=firstName;
}

const std::string& AbstractPersonAPI::getLastName() const {
	return lastName;
}

void AbstractPersonAPI::setLastName(const std::string& lastName) {
	this->lastName = lastName;
}

int AbstractPersonAPI::getAge() const {
	return age;
}
void AbstractPersonAPI::setAge(int age) {
	this->age = age;
}

void AbstractPersonAPI::show(){
	std::cout<<"This is an AbstractPerson."<<std::endl;
}
} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
