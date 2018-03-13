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
    std::cout << this->inventory.size() << " items in " << this->getName() << " Inventory" << std::endl;
    for (Item *itemPtr : this->inventory) {
        std::cout << *itemPtr << std::endl;
    }
}

void Store::addItem(Item *item) {
	this->inventory.push_back(item);
}

void Store::sortInventory(){
	std::sort(inventory.begin(), inventory.end(), Item::sort);
}
} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
