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


Student::Student(std::string _firstName, std::string _lastName, double _age, double _gpa) : Person(_firstName, _lastName, _age), gpa(_gpa) {
}

Student::~Student() {
	// TODO Auto-generated destructor stub
}

void Student::info(){
	std::cout<< "This is a student, name: "<< firstName << " "<< lastName << " age: " << age <<" GPA: "<< gpa << std::endl;
}

bool Student::sortByAge(Student *a, Student *b){
	return a->age > b->age;
}

bool Student::sortByGPA(Student *a, Student *b){
	return a->gpa > b->gpa;
}

void Student::demo(){
	std::cout<< "Student demo..." <<std::endl;
	Person p3("Winston","Smith",28);
	Student s1("Ann","Xu",32,3.4);
	std::vector<AbstractPersonAPI * > persons;
	persons.push_back(&p3);
	persons.push_back(&s1);
	std::cout << persons.size() << " persons." << std::endl;
	for (AbstractPersonAPI *ptr:persons) {
		ptr->info();
	}
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
