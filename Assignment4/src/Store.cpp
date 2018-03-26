/*
 * Store.cpp
 *
 *  Created on: Feb 28, 2018
 *      Author: zhaos
 */

#include "Store.h"

namespace edu {
namespace neu {
namespace csye6205 {

Store::Store() {
	// TODO Auto-generated constructor stub

}

Store::~Store() {
	// TODO Auto-generated destructor stub
}
void Store::showInventory() {
	std::cout << this->inventory.size() << " items in " << " Inventory" << std::endl;
	for (Item *itemPtr : this->inventory) {
		std::cout << *itemPtr << std::endl;
	}
}
void Store::showStaff() {
	std::cout << this->staff.size() << " staff in " << " Staff" << std::endl;
	for (Person *personPtr : this->staff) {
		std::cout << *personPtr << std::endl;
	}
}
void Store::addItem(Item *item) {
	this->inventory.push_back(item);
}
void Store::addStaff(Person *person) {
	this->staff.push_back(person);
}
//void Store::sortInventorybyPrice() {
//	std::sort(inventory.begin(), inventory.end(), [](const Item &it1, const Item &it2)
//			{
//				if(it1.getPrice() >= it2.getPrice()) {
//					return true;
//				}
////				else if (it1.getPrice() == it2.getPrice()) {
////					return false;
////				}
//				return false;
//			});
//}


//void Store::sortInventorybyPrice(){
//	std::sort(inventory.begin(), inventory.end(), Item::sortbyPrice);
//}
void Store::sortInventorybyPrice(){
	std::sort(inventory.begin(), inventory.end(), [] (Item *a, Item *b)->bool{return a->getPrice()>=b->getPrice();});
}

void Store::sortInventorybyName() {
	std::sort(inventory.begin(), inventory.end(), Item::sortbyName);
}
//void Store::sortInventory(){
//	std::sort(inventory.begin(),inventory.end(),[](const Item& a, const Item& b)
//			-> bool {return a.getPrice() < b.getPrice();});
//}
} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
