/*
 * Student.h
 *
 *  Created on: Feb 9, 2018
 *      Author: zhaos
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include "Person.h"

#include <iostream>

using namespace std;
namespace edu {
namespace neu {
namespace csye6205 {

class Student: public Person {
public:
	Student();
	virtual ~Student();

	void show();

};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* STUDENT_H_ */
