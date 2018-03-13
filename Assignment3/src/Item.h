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

namespace edu {
namespace neu {
namespace csye6205 {

class Item {
protected:
	int itemNumber;
	double price;
	std::string name;
	std::string type;
public:
	Item(int _itemNumber,double _price,std::string _name,std::string _type);
	virtual ~Item();

	static bool sort(Item *a, Item *b);

	virtual float getCal() const {
		return 0;
	}
	friend std::ostream &operator<<(std::ostream& output, const Item& i) {
			std::string str = "Item: " + std::to_string(i.getItemNumber())
						+ ", " + i.getName()
						+ " price: " + std::to_string(i.getPrice());
			if(i.getCal() != 0) {
				str = str + ", calories: " + std::to_string(i.getCal());
			}
			output << str;
			return output;
	}


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

	const std::string& getType() const {
		return type;
	}

	void setType(const std::string& type) {
		this->type = type;
	}
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* ITEM_H_ */
//Description	Resource	Path	Location	Type
//must use '.*' or '->*' to call pointer-to-member function in 'bool (edu::neu::csye6205::Item::*)(edu::neu::csye6205::Item*, edu::neu::csye6205::Item*)>*)this)->__gnu_cxx::__ops::_Iter_comp_iter<bool (edu::neu::csye6205::Item::*)(edu::neu::csye6205::Item*, edu::neu::csye6205::Item*)>::_M_comp (...)', e.g. '(... ->* ((__gnu_cxx::__ops::_Iter_comp_iter<bool (edu::neu::csye6205::Item::*)(edu::neu::csye6205::Item*, edu::neu::csye6205::Item*)>*)this)->__gnu_cxx::__ops::_Iter_comp_iter<bool (edu::neu::csye6205::Item::*)(edu::neu::csye6205::Item*, edu::neu::csye6205::Item*)>::_M_comp) (...)'	DriverPorject1		line 123, external location: c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\bits\predefined_ops.h	C/C++ Problem
