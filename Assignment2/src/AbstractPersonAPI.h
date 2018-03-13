/*
 * AbstractPersonAPI.h
 *
 *  Created on: Feb 9, 2018
 *      Author: zhaos
 */

#ifndef ABSTRACTPERSONAPI_H_
#define ABSTRACTPERSONAPI_H_

#include <iostream>

using namespace std;
namespace edu {
namespace neu {
namespace csye6205 {

class AbstractPersonAPI {
public:
	AbstractPersonAPI();
	virtual ~AbstractPersonAPI();

	virtual void show();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* ABSTRACTPERSONAPI_H_ */
