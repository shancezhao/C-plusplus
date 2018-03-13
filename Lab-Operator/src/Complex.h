/*
 * Complex.h
 *
 *  Created on: Feb 28, 2018
 *      Author: zhaos
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
namespace edu {
namespace neu {
namespace csye6205 {

class Complex {
private:
	double re;//real part
	double im;//imaginary part
public:
	Complex(double re = 0.0, double im = 0.0);
	virtual ~Complex();

	Complex operator+(const Complex&); // use member function
	friend Complex operator*(const Complex&,const Complex&);	//use global function
	friend std::ostream& operator<<(std::ostream&,const Complex&);	//use global function
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* COMPLEX_H_ */
