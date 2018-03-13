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
#include <vector>
#include "Person.h"
using namespace std;

namespace edu {
namespace neu {
namespace csye6205 {

class Student : public Person{
private:
	double gpa;
public:
	Student();
	Student(std::string _firstName, std::string _lastName, double _age, double _gpa);

	virtual ~Student();
	virtual void info();

	static bool sortByAge(Student *a, Student *b);
	static bool sortByGPA(Student *a, Student *b);

	static void demo();

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
