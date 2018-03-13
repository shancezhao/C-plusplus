/*
 * HealthyBread.h
 *
 *  Created on: Feb 28, 2018
 *      Author: zhaos
 */

#ifndef HEALTHYBREAD_H_
#define HEALTHYBREAD_H_

#include "Item.h"
#include <algorithm>

namespace edu {
namespace neu {
namespace csye6205 {

class HealthyBread: public Item {
protected:
	double calories;
public:
	HealthyBread(int _itemNumber,double _price,double _calories,std::string _name);
	virtual ~HealthyBread();
	float getCal() const{
			return calories;
	}

//	void show();
	//static bool sortByPrice(HealthyBread *a, HealthyBread *b);

	void setCalories(double calories) {
		this->calories = calories;
	}
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* HEALTHYBREAD_H_ */
