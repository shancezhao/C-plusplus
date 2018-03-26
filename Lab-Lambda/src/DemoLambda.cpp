/*
 * DemoLambda.cpp
 *
 *  Created on: Mar 14, 2018
 *      Author: zhaos
 */


#include "DemoLambda.h"

#include <iostream>
#include <vector>

using namespace std;

namespace edu {
namespace neu {
namespace csye6205 {

DemoLambda::DemoLambda() : m_criterion(3), m_count(0){
}

DemoLambda::DemoLambda(int count) : m_criterion(3) {
	// initializer list initializes immutable m_criterion
	m_count = count;
}

DemoLambda::~DemoLambda() {
}

int DemoLambda::getCount() const {
	return this->m_count;
}

void DemoLambda::setCount(int count) {
	m_count = count;
}

// immutable (const) criterion

const int DemoLambda::getCriterion() const {
	return m_criterion;
}
//void DemoLambda::simpleLambdaSort() {
//
//	std::cout << " " <<std::endl;
//	int myints[] = {32,71,12,45,26,80,53,33};
//	std::vector<int> myvector(myints,myints+8);
//	//using lambda as comparison function
//	std::cout <<" UseLambda::"<<std::endl;
//	for(auto n : myvector) std::cout<< n << " "; std::cout <<myvector.size() << " integer values";
//
//
//	std::sort(myvector.begin(),myvector.end(),[](const int a, const int b)
//					-> bool {return a < b;});
//
//	for(auto& i : myvector) std::cout<<*i;
////	std::sort(inventory.begin(),inventory.end(),[](const PItem_t& a, const PItem_t& b)
////				-> bool {return a->getDoubleKey() < b->getDoubleKey();});
////	for(auto& item : inventory) std::cout << *item <<std::endl;
//}
// variable criterion

//UseLambda::UseLambda(int criterion, int count){
//	m_criterion = criterion;
//	m_count = count;
//}
//
//int UseLambda::getCriterion() const {
//	return m_criterion;
//}
//
//void UseLambda::setCriterion(int criterion) {
//	m_criterion = criterion;
//}


int DemoLambda::accumulate() {
	cout << "\n UseLambda::accumulate()..." << endl;
	this->m_count = 0;
	const int myints[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	const int SIZE = sizeof(myints) / sizeof(int);
	cout << "SIZE: " <<SIZE << endl;
	std::vector<int> m_numbers(myints, myints + SIZE);
	for (int i : m_numbers) {
		if ( i > this->m_criterion) {
			this->m_count++;
		} // end if
	} // end for
	show();
	cout << "\n ... done!" << endl;
	return this->m_count;
}

int DemoLambda::accumulate2() {
	cout << "\n UseLambda::accumulate2()..." << endl;
	this->m_count = 0;
	const int myints[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	const int SIZE = sizeof(myints) / sizeof(int);
	std::vector<int> m_numbers(myints, myints + SIZE);
	for (int i : m_numbers) {
		// lambda statement ";" terminator is required
		[this] (int i) {
			if ( i > m_criterion) {
				this->m_count++;
			} // end if
		}(i);
	}	// end for
	show();
	cout << "\n ... done!" << endl;
	return this->m_count;
}

void DemoLambda::show() {
	cout << "Count of numbers greater than "<< getCriterion() << " is " << getCount() << endl;
}

bool is_greater_than_5(int value)
{
    return (value > 5);
}

void DemoLambda::countNumber() {
	cout << "\n DemoLambda::countNumber() ... " << endl;
    vector<int> numbers { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    auto greater_than_5_count = count_if(numbers.begin(), numbers.end(), is_greater_than_5);

    cout << "The number of elements greater than 5 is: "
        << greater_than_5_count << "." << endl;
	cout << "\n ... done!" << endl;
}

void DemoLambda::countNumberLambda() {
	cout << "\n DemoLambda::countNumberLambda() ... " << endl;
	   vector<int> numbers { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	    auto greater_than_5_count = count_if(numbers.begin(), numbers.end(), [](int x) { return (x > 5); });
	    cout << "The number of elements greater than 5 is: " << greater_than_5_count << "." << endl;
		cout << "\n ... done!" << endl;
}

void DemoLambda::sort() {
	std::cout << "UseLambda::sort()..."  << std::endl;

	int myints[] = {32,71,12,45,26,80,53,33};
	std::vector<int> myvector (myints, myints+8);               // 32 71 12 45 26 80 53 33

	// print out content:
	std::cout << "myvector contains:";
	for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it) {
		std::cout << ' ' << *it;
	}
	std::cout << " : " << myvector.size() << " values in total"<< std::endl;

	// using default comparison (operator <):
	std::sort (myvector.begin(), myvector.begin()+4);           //(12 32 45 71)26 80 53 33

	// print out content:
	std::cout << "myvector contains (sorting only first four integers using default comparison, i.e. operator '<':";
	for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it) {
		std::cout << ' ' << *it;
	}
	std::cout << " : " << myvector.size() << " values in total"<< std::endl;

	// using lambda as comparison function
	std::cout << "UseLambda::sort(): Use Lambda as a comparator" << std::endl;
	for (auto n : myvector) std::cout << n << " ";  std::cout << myvector.size() << " integer values in myvector ...."<< std::endl;
//	std::sort (myvector.begin()+4, myvector.end(), [](int x, int y) { return x < y; }); // 12 32 45 71(26 33 53 80)
	std::sort (myvector.begin(), myvector.end(), [](int x, int y) { return x < y; }); // 12 32 45 71(26 33 53 80)
	for (auto n : myvector) std::cout << n << " ";  std::cout << " sorted by ASCENDING integer values"<< std::endl;
	std::sort (myvector.begin(), myvector.end(), [](int x, int y) { return x > y; }); // 12 32 45 71(26 33 53 80)
	for (auto n : myvector) std::cout << n << " ";  std::cout << " sorted by DESCENDING integer values"<< std::endl;

	// using function for comparison
//	std::sort (myvector.begin()+4, myvector.end(), mySortfunction); // 12 32 45 71(26 33 53 80)

	// print out content:
//	std::cout << "myvector contains:";
//	for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it) {
//		std::cout << ' ' << *it;
//	}
//	std::cout << " : " << myvector.size() << " values in total"<< std::endl;

	// ASCENDING Sort: using object as comp
	std::sort (myvector.begin(), myvector.end(), [] (int i, int j) -> bool {return i<j;});     //(80 71 53 45 33 32 26 12)
//	std::sort (myvector.begin(), myvector.end(), mySortobject);     //(12 26 32 33 45 53 71 80)

	// print out content:
	std::cout << "myvector contains (ASCENDING):";
	for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it) {
		std::cout << ' ' << *it;
	}
	std::cout << " : " << myvector.size() << " values in total"<< std::endl;

	// DESCENDING Sort: using object as comp
	std::sort (myvector.begin(), myvector.end(), [] (int i, int j) -> bool {return i>j;});     //(80 71 53 45 33 32 26 12)
//	std::sort (myvector.begin(), myvector.end(), myDescendingSortobject);     //(80 71 53 45 33 32 26 12)

	// print out content:
	std::cout << "myvector contains (DESCENDING):";
	for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it) {
		std::cout << ' ' << *it;
	}
	std::cout << " : " << myvector.size() << " values in total"<< std::endl;

	return;
}
/**
 * void DemoLambda::simpleLambdaSort()
 *
 * CONSOLE OUTPUT:
 *
UseLambda::simpleLambdaSort()...
UseLambda::simpleLambdaSort(): Use Lambda as a comparator
32 71 12 45 26 80 53 33 8 integer values in myvector ....
12 26 32 33 45 53 71 80  sorted by ASCENDING integer values
80 71 53 45 33 32 26 12  sorted by DESCENDING integer values

DriverProject executing main...

	 DemoLambda::demo() starting...
UseLambda::simpleLambdaSort()...
UseLambda::simpleLambdaSort(): Use Lambda as a comparator
32 71 12 45 26 80 53 33 8 integer values in myvector ....
12 26 32 33 45 53 71 80  sorted by ASCENDING integer values
80 71 53 45 33 32 26 12  sorted by DESCENDING integer values
80 71 53 45 33 32 26 12  sorted by DESCENDING integer values

 DemoLambda::demo() done!
 */
void DemoLambda::simpleLambdaSort() {
	std::cout << "UseLambda::simpleLambdaSort()..."  << std::endl;

	int myints[] = {32,71,12,45,26,80,53,33};
	std::vector<int> myvector (myints, myints+8);               // 32 71 12 45 26 80 53 33

	// using lambda as comparison function
	std::cout << "UseLambda::simpleLambdaSort(): Use Lambda as a comparator" << std::endl;
	for (auto n : myvector) std::cout << n << " ";  std::cout << myvector.size() << " integer values in myvector ...."<< std::endl;

//	std::sort (myvector.begin()+4, myvector.end(), [](int x, int y) { return x < y; }); // 12 32 45 71(26 33 53 80)
	std::sort (myvector.begin(), myvector.end(), [](int x, int y) { return x < y; }); // 12 32 45 71(26 33 53 80)
	for (auto& n : myvector) std::cout << n << " ";  std::cout << " sorted by ASCENDING integer values"<< std::endl;

	std::sort (std::begin(myvector), std::end(myvector), [](int x, int y) { return x > y; }); // 12 32 45 71(26 33 53 80)
	for (auto& n : myvector) std::cout << n << " ";  std::cout << " sorted by DESCENDING integer values"<< std::endl;

	auto sortIntsDescendingOrder = [](int x, int y) { return x > y; };
	std::sort (std::begin(myints), std::end(myints), sortIntsDescendingOrder); // 12 32 45 71(26 33 53 80)
	for (auto& n : myvector) std::cout << n << " ";  std::cout << " sorted by DESCENDING integer values"<< std::endl;

	return;
}

int DemoLambda::captureContextLambda() {
	cout << "\n UseLambda::captureContextLambda()..." << endl;
	int age = 7;
	double pi = 3.14;

	/*
	 * capture context using lambda
	 */
	std::cout << "Capture context using lambda...." << std::endl;
	auto f = [age,pi](){
		int zip = 11234;

		std::cout << std::endl
				<< " age = " << age
				<< " pi = " << pi
				<< " zip = " << zip
				<< std::endl;
	};
	f();
	cout << "\n ... done!" << endl;
	return this->m_count;
}

void DemoLambda::nestedBlocks() {
	cout << "UseLambda::nestedBlocks()..." << endl;
	// outer block
	int age = 7;
	double pi = 3.14;

	{
		// nested inner block, outer block still in scope
		int zip = 11234;
		cout << endl << "age=" << age << " pi=" << pi << " zip=" << zip << endl;
	}
	cout << "UseLambda::nestedBlocks() done!" << endl;
}

void DemoLambda::demo() {
	cout << "\n\t DemoLambda::demo() starting..." << endl;
	DemoLambda obj;

	obj.accumulate();
	obj.accumulate2();
	obj.countNumber();
	obj.countNumberLambda();
	obj.nestedBlocks();
	obj.captureContextLambda();
	obj.sort();

	obj.simpleLambdaSort();

	cout << "\n DemoLambda::demo() done!" << endl;
	return;
}
} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
