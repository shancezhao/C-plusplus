/*
 * Student.cpp
 *
 *  Created on: Jan 24, 2018
 *      Author: zhaos
 */

#include <iostream>
#include "Student.h"
namespace edu {
namespace neu {
namespace csye6205 {


Student::Student(std::string firstName,std::string lastName, int age,double gpa) : AbstractPersonAPI(firstName,lastName,age)
{
	this->gpa=gpa;
}

Student::~Student() {
	// TODO Auto-generated destructor stub
}

void Student::info(){

}

void Student::demo(){

}
void Student::show() {
	std::cout << "I am a student. "
				<<"My name is " << this->firstName<<" "<<this->lastName
				<<", gpa is "<<this->gpa<<"."
				<< std::endl;
}
} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
