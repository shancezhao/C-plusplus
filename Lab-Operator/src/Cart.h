/*
 * Cart.h
 *
 *  Created on: Feb 28, 2018
 *      Author: zhaos
 */

#ifndef CART_H_
#define CART_H_

#include <algorithm>
#include <iostream>
#include <vector>
#include "Item.h"


namespace edu {
namespace neu {
namespace csye6205 {
using namespace std;

template<typename T>
class Cart {
private:
	vector<T> ts;
public:
	Cart() {

	}
	virtual ~Cart(){

	}

	void addT(T item) {
		ts.push_back(item);
	}

	void show() {
//		std::cout << "Cart::show()" << std::endl;
		for (auto item : ts) {
			item.show();
		}
	}

	static void demo() {
		T a(4,"item1",10);
		T b(5,"item2",60);
		//Cart<Item> c;
		Cart c;
		c.addT(a);
		c.addT(b);
		c.show();
	}
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* CART_H_ */
