//============================================================================
// Name        : DriverProject1.cpp
// Author      : zhaos
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "SimpleFactory.h"
using namespace std;
using namespace edu::neu::csye6205;

int main() {
	cout << "\t	!!!Assignment 2!!!\n" << endl; // prints !!!Assignment 2!!!

	SimpleFactory::demo();

	SimpleFactory::demo2();
	return 0;

	/*
	 *
	  		!!!Assignment 2!!!

	SimpleFactory demo starting...
	2 explosive devices to explode.
	 This is the student part.
	 This is the employee part.
	SimpleFactory demo done!

	demo2 - Factory Pattern start starting...
	 This is the student part.
	 This is the employee part.
	demo2 - Factory Pattern done!

	 *
	 */
}
