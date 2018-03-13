/*
 * Electronics.cpp
 *
 *  Created on: Feb 28, 2018
 *      Author: zhaos
 */

#include "Electronics.h"

namespace edu {
namespace neu {
namespace csye6205 {

Electronics::Electronics(int _itemNumber,double _price,std::string _name):Item(_itemNumber, _price, _name, "Electronics"){
	// TODO Auto-generated constructor stub

}

Electronics::~Electronics() {
	// TODO Auto-generated destructor stub
}

//void Electronics::show() {
//	std::cout<< "This is a electronics, name: "<< name  << " price: " << price <<" itemNumber: "<< itemNumber << std::endl;
//}


//bool Electronics::sort(Electronics *a,Electronics *b) {
//	return a->price > b->price;
//}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
