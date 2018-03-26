/*
 * Item.h
 *
 *  Created on: Feb 28, 2018
 *      Author: zhaos
 */

#ifndef ITEM_H_
#define ITEM_H_

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
namespace edu {
namespace neu {
namespace csye6205 {


class Item {
protected:
	int itemNumber;
	double price;
	std::string name;

public:
	Item();
	Item(int _itemNumber, double _price, std::string _name);
	virtual ~Item();
//	static bool sort(Item *a, Item *b);

	virtual void show();

//	static bool sortbyPrice(Item *a, Item *b);

//	static bool sortbyPrice(Item *it1, Item *it2) {
//		[it1,it2] () {
//			return it1->getPrice()>=it2->getPrice();
//		};
//	}
//	static bool sortbyPrice=[](Item *it1,Item *it2)->bool{return it1->getPrice()>=it2->getPrice();}
	static bool sortbyPrice(Item *a, Item *b);
	static bool sortbyName(Item *a, Item *b);

	virtual string getISBN() const {
		return NULL;
	}

	friend std::ostream &operator<<(std::ostream& output, const Item& i);

	const std::string& getName() const {
		return name;
	}

	void setName(const std::string& name) {
		this->name = name;
	}

	double getPrice() const {
		return price;
	}

	void setPrice(double price) {
		this->price = price;
	}

	int getItemNumber() const {
		return itemNumber;
	}

	void setItemNumber(int itemNumber) {
		this->itemNumber = itemNumber;
	}

};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* ITEM_H_ */
//Description	Resource	Path	Location	Type
