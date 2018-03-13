/*
 * Bread.h
 *
 *  Created on: Feb 28, 2018
 *      Author: zhaos
 */

#ifndef BREAD_H_
#define BREAD_H_

#include "Item.h"
#include <algorithm>

namespace edu {
namespace neu {
namespace csye6205 {

class Bread: public Item {
public:
	Bread(int _itemNumber,double _price,std::string _name);
	virtual ~Bread();
//	void show();
//static bool sortByPrice(Bread *a, Bread *b);
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* BREAD_H_ */
