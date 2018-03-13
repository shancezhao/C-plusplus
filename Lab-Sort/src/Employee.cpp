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

Employee::Employee(std::string _firstName, std::string _lastName, double _age, double _wage) : Person(_firstName,_lastName,_age),wage(_wage) {

}

Employee::~Employee() {
	// TODO Auto-generated destructor stub
}

void Employee::info(){
	std::cout<< "This is a employee, name: "<< firstName << " "<< lastName << ", age: " << age <<", wage: "<< wage << std::endl;
}
void Employee::demo() {
	std::cout << "\n\t Employee::demo() starting ..." << std::endl;

	Employee e1("Zoe","Lan", 20, 8000);
	Person p2("Paul","Zhang",32);

	std::vector<AbstractPersonAPI * > persons;
	persons.push_back(&e1);
	persons.push_back(&p2);
	std::cout << persons.size() << " persons." << std::endl;
	for(AbstractPersonAPI *ptr:persons)
	{
		ptr->info();
	}
}

bool Employee::sortByWage(Employee *a,Employee *b) {
	return a->wage > b->wage;
}


} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
