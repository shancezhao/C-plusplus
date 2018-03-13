/*
 * AbstractSchoolAPI.h
 *
 *  Created on: Feb 27, 2018
 *      Author: zhaos
 */

#ifndef ABSTRACTSCHOOLAPI_H_
#define ABSTRACTSCHOOLAPI_H_

#include <string>

namespace edu {
namespace neu {
namespace csye6205 {

class AbstractSchoolAPI {
public:
	AbstractSchoolAPI();
	virtual ~AbstractSchoolAPI();

	virtual std::string info() = 0;	// API: pure virtual
	virtual std::string show() = 0;	// API: pure virtual
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* ABSTRACTSCHOOLAPI_H_ */
