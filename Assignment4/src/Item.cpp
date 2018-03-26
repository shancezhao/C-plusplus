/*
 * Item.cpp
 *
 *  Created on: Feb 28, 2018
 *      Author: zhaos
 */

#include "Item.h"

namespace edu {
namespace neu {
namespace csye6205 {

Item::Item() {
}

Item::Item(int _itemNumber, double _price, std::string _name) :
		itemNumber(_itemNumber), price(_price), name(_name) {

}

Item::~Item() {
	// TODO Auto-generated destructor stub
}

//bool Item::sortbyPrice(Item *a, Item *b) {
//	return a->getPrice() < b->getPrice();
//
//}


bool Item::sortbyName(Item *a, Item *b) {
	return a->getName() < b->getName();
}

std::ostream &operator<<(std::ostream& output, const Item& i) {
	std::string str = "Item Number: " + std::to_string(i.getItemNumber())
			+ ", Name: " + i.getName() + ", Price: "
			+ std::to_string(i.getPrice());
	if (!i.getISBN().empty()) {
		str = str + " Isbn: " + i.getISBN();
	}
	output << str;
	return output;
}

void Item::show() {
	cout << "\t This is the Item part." << endl;
}
} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
