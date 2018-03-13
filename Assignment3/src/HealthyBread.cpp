/*
 * HealthyBread.cpp
 *
 *  Created on: Feb 28, 2018
 *      Author: zhaos
 */

#include "HealthyBread.h"

namespace edu {
namespace neu {
namespace csye6205 {

HealthyBread::HealthyBread(int _itemNumber,double _price,double _calories,std::string _name):Item(_itemNumber, _price, _name,"HealthyBread"),calories(_calories) {
	// TODO Auto-generated constructor stub

}

HealthyBread::~HealthyBread() {
	// TODO Auto-generated destructor stub
}

//void HealthyBread::show() {
//	std::cout<< "This is a healthyBread, name: "<< name  << ", price: " << price <<", calories: "<< calories <<", itemNumber: "<< itemNumber << std::endl;
//}

//bool HealthyBread::sortByPrice(HealthyBread *a,HealthyBread *b) {
//		return a->price > b->price;
//	}
} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
