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

Item::Item(int _itemNumber,double _price,std::string _name, std::string _type):itemNumber(_itemNumber),price(_price),name(_name),type(_type){

}

Item::~Item() {
	// TODO Auto-generated destructor stub
}

bool Item::sort(Item *a, Item *b) {
	if(a->type == "Bread" && b->type == "Bread") {
		return a->getItemNumber()<b->getItemNumber();
	}
	else if(a->type == "HealthyBread" && b->type == "HealthyBread") {
		return a->getCal()<b->getCal();
	}
	else
		return a->getPrice()<b->getPrice();
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
