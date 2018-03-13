/*
 * UniversityBase.cpp
 *
 *  Created on: Jan 31, 2018
 *      Author: danielgmp
 */

#include <iostream>		// std::cout, std::endl
#include <string>		// std::string
#include <sstream>		// std::stringstream
#include "UniversityBase.h"

namespace edu {
namespace neu {
namespace csye6205 {

UniversityBase::UniversityBase() : id(1), name("default university") {
}

UniversityBase::UniversityBase(int _id, std::string _name) : id(_id), name(_name) {
}

UniversityBase::~UniversityBase() {
}

void UniversityBase::addEmployee(Employee *ePtr) {
	this->employees.push_back(ePtr);
}

void UniversityBase::addStudent(Student *sPtr) {
	this->students.push_back(sPtr);
}

std::string UniversityBase::showEmployees() {
	std::stringstream ss;
//	ss << "Employees: ";
	ss << this->employees.size() << " employees: ";
	std::cout << this->employees.size() << " employees: " << std::endl;
	for (AbstractPersonAPI * p : this->employees) {
//		ss << p->info() << ", ";
		p->info();
	}
//	std::cout << ss.str() << std::endl;
	return ss.str();
}

std::string UniversityBase::showStudents() {
	std::stringstream ss;
//	ss << "Students: ";
	ss << this->students.size() << " students: ";
	std::cout << this->students.size() << " students: " << std::endl;
	for (AbstractPersonAPI * p : this->students) {
//		ss << p->info() << ", ";
		p->info();
	}
//	std::cout << ss.str() << std::endl;
	return ss.str();
}

std::string UniversityBase::info() {
	std::stringstream ss;
	ss << "University: ";
	return ss.str();
}

std::string UniversityBase::show() {
	std::cout << this->info() << std::endl;
	this->showEmployees();
	this->showStudents();
	return this->info();
}

int UniversityBase::getId() const {
	return id;
}

void UniversityBase::setId(int id) {
	this->id = id;
}

const std::string& UniversityBase::getName() const {
	return name;
}

void UniversityBase::setName(const std::string& name) {
	this->name = name;
}

void UniversityBase::demo() {
	std::cout << "\n\t UniversityBase::demo() starting ..." << std::endl;
	std::cout << "\n UniversityBase::demo() done!" << std::endl;
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
