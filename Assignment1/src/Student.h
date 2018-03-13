/*
 * Student.h
 *
 *  Created on: Jan 24, 2018
 *      Author: zhaos
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
#include <string>
#include "AbstractPersonAPI.h"
using namespace std;

namespace edu {
namespace neu {
namespace csye6205 {

class Student : public AbstractPersonAPI{
private:

	double gpa;
public:
	Student();
	Student(std::string firstName,std::string lastName, int age,double gpa);

	virtual ~Student();
	virtual void info();
	virtual void demo();
	void show();

	double getGpa() const {
		return gpa;
	}

	void setGpa(double gpa) {
		this->gpa = gpa;
	}

};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* STUDENT_H_ */
