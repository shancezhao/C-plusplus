/*
 * EmployeeFactory.cpp
 *
 *  Created on: Feb 12, 2018
 *      Author: zhaos
 */

#include "EmployeeFactory.h"

namespace edu {
namespace neu {
namespace csye6205 {

EmployeeFactory::EmployeeFactory() {
	// TODO Auto-generated constructor stub

}

EmployeeFactory::~EmployeeFactory() {
	// TODO Auto-generated destructor stub
}

//vector<Employee *> EmployeeFactory::assignObject() {
//	vector<vector<string> > strArray;
//	ifstream inFile("employee.csv", ios::in);
//	string lineStr;
//	vector<Employee *> employees;
//	Employee *obj_e = nullptr;
//	obj_e = new Employee();
//	while (getline(inFile, lineStr)) {
//		stringstream ss(lineStr);
//		string str;
//		vector<string> lineArray;
//		while (getline(ss, str, ',')){
//			lineArray.push_back(str);
//			cout << str;
//		}
//		strArray.push_back(lineArray);
//	}
//
//	for (int i = 1; i < strArray.size(); i++) {
//		for (int j = 0; j < strArray[0].size(); j++) {
//			if (j % 4 == 0) {
//				obj_e->setFirstName(strArray[i][j]);
//			}
//			if (j % 4 == 1) {
//				obj_e->setLastName(strArray[i][j]);
//			}
//			if (j % 4 == 2) {
//				obj_e->setAge(stoi(strArray[i][j]));
//			}
//			if (j % 4 == 3) {
//				cout << strArray[i][j] << endl;
//				obj_e->setWage(stod(strArray[i][j]));
//			}
//			employees.push_back(obj_e);
//		}
//	}
//	return employees;
//}

vector<Person *> EmployeeFactory::createPerson() {
	vector<vector<string> > strArray = WriteCSV::readE();
	Employee *obj_e = nullptr;
	obj_e = new Employee();
	vector<Person *> employees;

	for (int i = 1; i < strArray.size(); i++) {
		for (int j = 0; j < strArray[0].size(); j++) {
			if (j % 4 == 0) {
				obj_e->setFirstName(strArray[i][j]);
			}
			if (j % 4 == 1) {
				obj_e->setLastName(strArray[i][j]);
			}
			if (j % 4 == 2) {
				obj_e->setAge(stoi(strArray[i][j]));
			}
			if (j % 4 == 3) {
				obj_e->setWage(stod(strArray[i][j]));
			}
		}
		employees.push_back(obj_e);
		obj_e = new Employee();
	}

	return employees;
}

void EmployeeFactory::freePerson(Employee *obj_e) {
	delete obj_e;
	obj_e = nullptr;
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
