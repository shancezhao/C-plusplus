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
private:
	int id;
	std::string name;
	int price;
public:
	Item(int _id,std::string _name,int _price);
	virtual ~Item();

	static void demo();

	void show();

	template <typename T>
	T max(T a) {
		if(a.price>this->price) return a;
		else return *this;

	}
	// overloaded operators: called w/o creating object
	friend Item operator+(Item &it,const int a) {
		//price add a
		it.setPrice(it.getPrice()+a);
		return it;	//常被用在成员函数operator= 中，用来返回对象的指针(避免使用临时对象)
	}
	friend std::ostream &operator<<(std::ostream& output, const Item& i) {
			std::string str = "Item: " + std::to_string(i.getId())
						+ ", " + i.getName()
						+ " price: " + std::to_string(i.getPrice());

			output << str;
			return output;
		//	return output << i.getName() << ", " <<i.getPrice() ;
	}

	int getId() const {
		return id;
	}
	void setId(int id) {
		this->id = id;
	}

	const std::string& getName() const {
		return name;
	}

	void setName(const std::string& name) {
		this->name = name;
	}

	int getPrice() const {
		return price;
	}

	void setPrice(int price) {
		this->price = price;
	}


};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* ITEM_H_ */
