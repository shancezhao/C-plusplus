/*
 * Person.cpp
 *
 *  Created on: Feb 27, 2018
 *      Author: zhaos
 */

#include "Person.h"
#include <iostream>
#include <vector>

namespace edu {
namespace neu {
namespace csye6205 {

Person::Person(std::string _firstName, std::string _lastName, double _age):firstName(_firstName),lastName(_lastName),age(_age) {
	// TODO Auto-generated constructor stub

}

Person::~Person() {
	// TODO Auto-generated destructor stub
}

void Person::info() {
	std::cout<< "This is a Person, name: "<< firstName << " "<< lastName << " age: " << age << std::endl;
}

void Person::demo() {
	std::cout<<"Person demo..."<<std::endl;
	Person p1("Qi","L",22);
	std::vector<AbstractPersonAPI * > persons;
	persons.push_back(&p1);

	std::cout<<"Persons size: "<<persons.size()<<std::endl;
	for(AbstractPersonAPI *ptr:persons) {
		ptr->info();	// polymorphism
	}
}
} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
