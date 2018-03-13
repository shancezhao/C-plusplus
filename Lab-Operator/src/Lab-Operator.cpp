//============================================================================
// Name        : Lab-Operator.cpp
// Author      : Zhao
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cart.h"
#include "Item.h"
#include "Complex.h"

using namespace std;
using namespace edu::neu::csye6205;

int main() {
	cout << "Week6-Lab-Sort..." << endl; // prints Week6-Lab-Sort...


	Item::demo();
	std::cout << std::endl;
	std::cout<<"Cart demo .. "<<std::endl;
	Cart<Item>::demo();
	std::cout << std::endl;
	Complex complex1(2,2);
	Complex complex2(3,7);
	Complex complex3=complex1 + complex2;
	Complex complex4=complex1 * complex2;
	std::cout<<"Complex demo .. "<<std::endl;
	std::cout << complex3 <<std::endl;
	std::cout << complex4 <<std::endl;
	return 0;
}
