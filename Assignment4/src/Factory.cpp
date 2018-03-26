/*
 * Factory.cpp
 *
 *  Created on: Mar 21, 2018
 *      Author: zhaos
 */

#include "Factory.h"
#include "EmployeeFactory.h"
#include "BookFactory.h"
#include "Person.h"

namespace edu {
namespace neu {
namespace csye6205 {
Factory::Factory(std::string _name) :
				name(_name) {
			// TODO Auto-generated constructor stub
}

Factory::Factory() {
	// TODO Auto-generated constructor stub

}

Factory::~Factory() {
	// TODO Auto-generated destructor stub
}

void Factory::freePerson(Person *p) {
	delete p;
	return;
}

void Factory::freeObject(Item *i) {
	delete i;
	return;
}

vector<Person *> Factory::createPerson() {

}
vector<Item *> Factory::createObject() {

}

void Factory::demo() {
	std::cout << "\n  Barnes and Nobel Store Starting!!!" << std::endl;
	WriteCSV* create = new WriteCSV();
	create->writeE();
	create->writeB();
	Factory obj("Barnes and Nobel Store");

//	vector<AbstractStore *> abstores;
//	abstores.push_back(&obj);
//	Store *store = &obj;

	//Employee
	EmployeeFactory ef;
	vector<Person *> persons;
	persons = ef.createPerson();
	for (Person *a : persons) {
		obj.addStaff(a);
	}

	//show Employee
	obj.showStaff();
	cout <<endl<< "\t<<<<<<<<<<Item<<<<<<<<<<" << endl;


	//Book
	BookFactory bf;
	vector<Item *> items;
	items = bf.createObject();

	for (Item *it : items) {
		obj.addItem(it);
		//show original Book
		cout << *it << endl;
	}
	cout<<endl;
	cout << "\t Sort Book By Name.." << endl;
	obj.sortInventorybyName();
	obj.showInventory();
	cout<<endl;
	cout << "\t Sort Book By Price.." << endl;
	obj.sortInventorybyPrice();
	obj.showInventory();
}

//must use '.*' or '->*' to call pointer-to-member function in '((__gnu_cxx::__ops::_Iter_comp_iter<bool (edu::neu::csye6205::Item::*)(edu::neu::csye6205::Item, edu::neu::csye6205::Item)>*)this)->__gnu_cxx::__ops::_Iter_comp_iter<bool (edu::neu::csye6205::Item::*)(edu::neu::csye6205::Item, edu::neu::csye6205::Item)>::_M_comp (...)', e.g. '(... ->* ((__gnu_cxx::__ops::_Iter_comp_iter<bool (edu::neu::csye6205::Item::*)(edu::neu::csye6205::Item, edu::neu::csye6205::Item)>*)this)->__gnu_cxx::__ops::_Iter_comp_iter<bool (edu::neu::csye6205::Item::*)(edu::neu::csye6205::Item, edu::neu::csye6205::Item)>::_M_comp) (...)'

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
