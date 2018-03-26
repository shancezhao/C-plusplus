/*
 * Book.cpp
 *
 *  Created on: Mar 21, 2018
 *      Author: zhaos
 */

#include "Book.h"

namespace edu {
namespace neu {
namespace csye6205 {

Book::Book() {

}

Book::Book(int _itemNumber, double _price, std::string _name, std::string _isbn) :
		Item(_itemNumber, _price, _name), isbn(_isbn) {
	// TODO Auto-generated constructor stub
}

Book::~Book() {
	// TODO Auto-generated destructor stub
}

void Book::show() {
	std::cout << "\t This is the Book part." << std::endl;
	std::cout << "Item Number" << this->itemNumber << ", Book Name: "
			<< this->name << ", isbn: " << this->isbn << ", price: "
			<< this->price << std::endl;
}
} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
