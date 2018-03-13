/*
 * StudentFactory.h
 *
 *  Created on: Feb 12, 2018
 *      Author: zhaos
 */

#ifndef STUDENTFACTORY_H_
#define STUDENTFACTORY_H_

#include <iostream>
#include <string>
#include "SimpleFactory.h"
#include "Student.h"

namespace edu {
namespace neu {
namespace csye6205 {

class StudentFactory: public SimpleFactory {
public:
	StudentFactory();
	virtual ~StudentFactory();
	Student* createObject();
	void freeObject(Student* obj);
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* STUDENTFACTORY_H_ */
