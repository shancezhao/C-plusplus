/*
 * WriteCSV.h
 *
 *  Created on: Mar 21, 2018
 *      Author: zhaos
 */

#ifndef WRITECSV_H_
#define WRITECSV_H_

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include "Employee.h"
using namespace std;
namespace edu {
namespace neu {
namespace csye6205 {

class WriteCSV {
public:
	WriteCSV();
	virtual ~WriteCSV();
	void static writeE();
	static vector<vector<string> > readE();
	void static writeB();
	static vector<vector<string> > readB();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* WRITECSV_H_ */
