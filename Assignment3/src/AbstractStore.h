/*
 * AbstractStore.h
 *
 *  Created on: Feb 28, 2018
 *      Author: zhaos
 */

#ifndef ABSTRACTSTORE_H_
#define ABSTRACTSTORE_H_

#include "Item.h"
#include "iostream"
namespace edu {
namespace neu {
namespace csye6205 {

class AbstractStore {
public:
	AbstractStore();
	virtual ~AbstractStore();
	virtual void addItem(Item *item) = 0;
	virtual void sortInventory() = 0;
	virtual void showInventory() = 0;
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* ABSTRACTSTORE_H_ */
