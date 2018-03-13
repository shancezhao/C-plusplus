/*
 * StudentFactory.cpp
 *
 *  Created on: Feb 12, 2018
 *      Author: zhaos
 */

#include "StudentFactory.h"

namespace edu {
namespace neu {
namespace csye6205 {

StudentFactory::StudentFactory() {
	// TODO Auto-generated constructor stub

}

StudentFactory::~StudentFactory() {
	// TODO Auto-generated destructor stub
}

Student* StudentFactory::createObject() {
	Student *obj_s = nullptr;
	obj_s = new Student();
	return obj_s;
}

void StudentFactory::freeObject(Student *obj_s) {
	delete obj_s;
	obj_s = nullptr;
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
