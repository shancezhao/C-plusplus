/*
 * BookFactory.cpp
 *
 *  Created on: Mar 21, 2018
 *      Author: zhaos
 */

#include "BookFactory.h"

namespace edu {
namespace neu {
namespace csye6205 {

BookFactory::BookFactory() {
	// TODO Auto-generated constructor stub

}

BookFactory::~BookFactory() {
	// TODO Auto-generated destructor stub
}

vector<Item *> BookFactory::createObject() {
	vector<vector<string> > strArray = WriteCSV::readB();
	Book *obj_b = nullptr;
	obj_b = new Book();
	vector<Item *> items;

	for (int i = 1; i < strArray.size(); i++) {
		for (int j = 0; j < strArray[0].size(); j++) {
			if (j % 4 == 0) {
				obj_b->setItemNumber(stoi(strArray[i][j]));
			}
			if (j % 4 == 1) {
				obj_b->setName(strArray[i][j]);
			}
			if (j % 4 == 2) {
				obj_b->setPrice(stod(strArray[i][j]));
			}
			if (j % 4 == 3) {
				obj_b->setIsbn(strArray[i][j]);
			}
		}
		items.push_back(obj_b);
		obj_b = new Book();
	}

	return items;
}

void BookFactory::freeObject(Book *obj_b) {
	delete obj_b;
	obj_b = nullptr;
}
} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
