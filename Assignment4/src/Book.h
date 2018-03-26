/*
 * Book.h
 *
 *  Created on: Mar 21, 2018
 *      Author: zhaos
 */

#ifndef BOOK_H_
#define BOOK_H_

#include "Item.h"
#include <algorithm>
#include <iostream>
#include <string>

namespace edu {
namespace neu {
namespace csye6205 {

class Book: public Item {
protected:
	std::string isbn;
public:
	Book();
	Book(int _itemNumber, double _price, std::string _name, std::string _isbn);
	virtual ~Book();

	void show();
	string getISBN() const {
		return isbn;
	}

	std::string getIsbn() const {
		return isbn;
	}

	void setIsbn(std::string isbn) {
		this->isbn = isbn;
	}
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* BOOK_H_ */
