/*
 * BookFactory.h
 *
 *  Created on: Mar 21, 2018
 *      Author: zhaos
 */

#ifndef BOOKFACTORY_H_
#define BOOKFACTORY_H_

#include <iostream>
#include <string>
#include "Book.h"
#include "WriteCSV.h"
#include "Factory.h"
namespace edu {
namespace neu {
namespace csye6205 {

class BookFactory: public Factory {
public:
	BookFactory();
	virtual ~BookFactory();

	vector<Item *> createObject();
	void freeObject(Book* obj);
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* BOOKFACTORY_H_ */
