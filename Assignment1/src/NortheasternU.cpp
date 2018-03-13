/*
 * NortheasternU.cpp
 *
 *  Created on: Feb 2, 2018
 *      Author: zhaos
 */
/**
 * UniversityBase base class
 *  1. Derive a NortheasternU class from this UniversityBase class.
 * 	A. Implement a demo() method:
 * 		1. add Employee objects.
 * 		2. add Student objects.
 * 		3. show the state.
 * 		4. demonstrating polymorphism
 * 			a. Employee object IS-A AbstractPersonAPI
 * 			a. Student object IS-A AbstractPersonAPI
 * 		B.
 *  2.
 */

#include "NortheasternU.h"

namespace edu {
namespace neu {
namespace csye6205 {

NortheasternU::NortheasternU() {
	// TODO Auto-generated constructor stub

}
NortheasternU::NortheasternU(int _id, std::string _name) :
		UniversityBase(_id, _name) {
	this->_id = _id;
	this->_name = _name;
}
NortheasternU::~NortheasternU() {
	// TODO Auto-generated destructor stub
}
int NortheasternU::getId() const {
	return _id;
}
void NortheasternU::setId(int _id) {
	this->_id = _id;
}
const std::string& NortheasternU::getName() const {
	return _name;
}

void NortheasternU::setName(const std::string& _name) {
	this->_name = _name;
}

void NortheasternU::demo(std::vector<AbstractPersonAPI *> employees,
		std::vector<AbstractPersonAPI *> students) {
	NortheasternU obj;
	UniversityBase *upty = &obj;

	for (AbstractPersonAPI *e : employees) {
		upty->addEmployee(e);
//		e->show();
	}
	for (AbstractPersonAPI *s : students) {
		upty->addStudent(s);
//		s->show()
	}
	std::vector<AbstractSchoolAPI *> v;
	v.push_back(upty);
	for (AbstractSchoolAPI *abs : v) {
		abs->show();
	}

}
//void NortheasternU::demo1(Employee *e1,Student *s1) {
//
////	this->employees.push_back(e1);
////	this->students.push_back(s1);
//
//	NortheasternU obj;
//	UniversityBase *upty = & obj;
//	upty->addEmployee(e1);
//	upty->addStudent(s1);
//
//	std::vector <AbstractSchoolAPI * > v;
//	v.push_back(upty);
//	for(AbstractSchoolAPI *abs : v){
//			abs->show();
//	}
//
//	std::cout<< "Show the Employee's information:"<<endl;
//	std::cout<<e1->getFirstName()<<" "<<e1->getLastName()
//			<<", age is "<<e1->getAge()<<", id is "<<e1->getId()<<endl;
//
//
//	std::cout<< "Show the Student's information:"<<endl;
//	std::cout<<s1->getFirstName()<<" "<<s1->getLastName()
//			<<", age is "<<s1->getAge()<<", gpa is "<<s1->getGpa()<<endl<<endl;
//
//}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
