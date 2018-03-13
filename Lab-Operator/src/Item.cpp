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

Item::Item(int _id,std::string _name,int _price):id(_id),name(_name),price(_price){

}

Item::~Item() {
	// TODO Auto-generated destructor stub
}

void Item::show() {
	std::cout<<"Product: "<<this->id<<", "<<this->name<<", "<<this->price<<std::endl;
}




void Item::demo() {
	std::cout<<"Item demo:"<<std::endl;
	Item a(1,"Pan",20);
	Item b(2,"Phone",800);
	Item c(3,"Desk", 35);
//	std::cout << a << std::endl;


	Item item[] = {a,b,c};

	std::vector <Item> items(item, item+3);
	std::cout <<"Before operator ++ .."<<std::endl;
	for(auto item:items) {
		item.show();
	}
	std::cout << std::endl;
	std::cout << "a(Pan) and c(Dest) max" << std::endl;
	std::cout << a.max(c) << std::endl;

	std::cout << std::endl;
	std::cout <<"After operator ++ (price add).."<<std::endl;
	a+20;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << std::endl;
	std::cout << "a(Pan) and c(Dest) max" << std::endl;
	std::cout << a.max(c) << std::endl;
	std::cout << std::endl;
}
} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
