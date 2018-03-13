/*
 * NortheasternU.h
 *
 *  Created on: Feb 2, 2018
 *      Author: zhaos
 */

#ifndef NORTHEASTERNU_H_
#define NORTHEASTERNU_H_

#include <iostream>
#include <string>
#include "UniversityBase.h"
#include "Employee.h"
#include "Student.h"
using namespace std;

namespace edu {
namespace neu {
namespace csye6205 {

class NortheasternU: public UniversityBase {
private:
	int _id;
	std::string _name;
	std::vector<Employee *> employees;	// pointers to employee objects
	std::vector<Student *> students;	// pointers to student objects
//	std::vector<AbstractPersonAPI *> employees;
//	std::vector<AbstractPersonAPI *> students;
public:
	NortheasternU();
	NortheasternU(int _id, std::string _name);
	virtual ~NortheasternU();
	int getId() const;
	void setId(int id);
	const std::string& getName() const;
	void setName(const std::string& name);

	void demo(std::vector<AbstractPersonAPI *> employees,std::vector<AbstractPersonAPI *> students);

	//void demo1(Employee *emPtr,Student *stPtr);
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* NORTHEASTERNU_H_ */
