/*
 * Employee.cpp
 *
 *  Created on: Jan 24, 2018
 *      Author: zhaos
 */

#include "Employee.h"
#include <iostream>
using namespace std;
namespace edu {
namespace neu {
namespace csye6205 {

Employee::Employee(std::string firstName,std::string lastName, int age,int id) : AbstractPersonAPI(firstName,lastName,age){
	this->id=id;
}

Employee::~Employee() {
	// TODO Auto-generated destructor stub
}

void Employee::info(){

}
void Employee::demo() {
	std::cout << "\n\t Employee::demo() starting ..." << std::endl;
}
int Employee::getId() const {
	return id;
}
void Employee::setId(int id) {
	this->id=id;
}
void Employee::show() {
	std::cout<<"This is an Employee.. ";
		std::cout<<this->getFirstName()<<" "<<Employee::getLastName()
					<<", my age is "<<Employee::getAge()<<", id is "<<Employee::getId()<<endl;
}
} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
