//============================================================================
// Name        : Assignment1-3.cpp
// Author      : Zhao
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <string>
#include "Employee.h"
#include "Student.h"
#include "NortheasternU.h"
#include "AbstractSchoolAPI.h"

using namespace std;
using namespace edu::neu::csye6205;

int main() {
	cout << "------------C++ Assignment1------------" << endl; // prints C++ Assignment1
		Employee *e1 = new Employee("EfirstName1","ElastName1",37,1);
		Employee *e2 = new Employee("EfirstName2","ElastName2",40,2);
		Student *s1 = new Student("Sfirst1","Slast1",18,3.8);
		Student *s2 = new Student("Sfirst2","Slast2",20,4.0);
		NortheasternU n1;
	//	n1.demo1(e1, s1);
	//	n1.demo1(e2, s2);


		std::vector<AbstractPersonAPI *> employees;
		std::vector<AbstractPersonAPI *> students;
		employees.push_back(e1);
		employees.push_back(e2);
		students.push_back(s1);
		students.push_back(s2);
		n1.demo(employees, students);
		return 0;
}


/**
 * CONSOLE OUTPUT
 */
