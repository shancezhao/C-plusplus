/*
 * NortheasternU.h
 *
 *  Created on: Feb 2, 2018
 *      Author: zhaos
 */

#ifndef NORTHEASTERNU_H_
#define NORTHEASTERNU_H_

#include "UniversityBase.h"

#include <iostream>
#include <string>

using namespace std;

namespace edu {
namespace neu {
namespace csye6205 {

class NortheasternU: public UniversityBase {

public:
	NortheasternU();
	NortheasternU(int _id, std::string _name);
	virtual ~NortheasternU();


	static void demo();
	void sortStudentByAge();
	void sortStudentByGpa();
	void sortEmployeeByWage();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* NORTHEASTERNU_H_ */
