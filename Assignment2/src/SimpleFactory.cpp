/*
 * SimpleFactory.cpp
 *
 *  Created on: Feb 9, 2018
 *      Author: zhaos
 */

#include "SimpleFactory.h"
#include <vector>
#include "Student.h"
#include "Employee.h"
#include "StudentFactory.h"
#include "EmployeeFactory.h"

namespace edu {
namespace neu {
namespace csye6205 {

SimpleFactory::SimpleFactory() {
	// TODO Auto-generated constructor stub

}

SimpleFactory::~SimpleFactory() {
	// TODO Auto-generated destructor stub
}

Person *SimpleFactory::getObject(int criteria) {
	Person *p = (Person*) nullptr;

		switch (criteria) {
		case 0:		// person
			p = new Student();
			break;
		case 1:		// student
			p = new Employee();
			break;
		}
		return (p);
}

void SimpleFactory::freeObject(Person *p) {
	delete p;
	return;
}

Person* SimpleFactory::createObject() {
	Person *obj_p = nullptr;
	obj_p = new Person();
	return obj_p;
}
void SimpleFactory::demo() {
	cout << "\tSimpleFactory demo starting..." << endl;
	SimpleFactory obj;
	Person *p0, *p1;
	p0 = obj.getObject(0);
	p1 = obj.getObject(1);

	vector<Person *> v = vector<Person *>();
	v.push_back(p0);
	v.push_back(p1);

	cout <<"\t" << v.size() << " explosive devices to explode." << endl;
	for (Person *p : v) {
		p->show();
	}

	obj.freeObject(p0);
	obj.freeObject(p1);
	cout << "\tSimpleFactory demo done!\n" << endl;
}

void SimpleFactory::demo2() {

	cout << "\tdemo2 - Factory Pattern start starting..." << endl;
	Person* person;
	SimpleFactory obj;
	StudentFactory sf;
	EmployeeFactory ef;
	person = sf.createObject();
	person->show();
	delete(person);

	person = ef.createObject();
	person->show();
	delete(person);
	cout << "\tdemo2 - Factory Pattern done!\n" << endl;
}
} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
