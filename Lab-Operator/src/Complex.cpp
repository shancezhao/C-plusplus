/*
 * Complex.cpp
 *
 *  Created on: Feb 28, 2018
 *      Author: zhaos
 */

#include "Complex.h"

namespace edu {
namespace neu {
namespace csye6205 {

Complex::Complex(double re, double im) : re(re), im(im) {

}

Complex::~Complex() {
	// TODO Auto-generated destructor stub
}

Complex Complex::operator +(const Complex & complex) {
	Complex _complex;
	_complex.re = this->re + complex.re;
	_complex.im = this->im + complex.im;

	return _complex;
}


Complex operator*(const Complex& complex1,const Complex& complex2) {
	Complex _complex;
	_complex.re = complex1.re * complex2.re - complex1.im* complex2.im;
	_complex.im = complex1.re * complex2.im + complex1.im * complex2.re;

	return _complex;
}

std::ostream& operator <<(std::ostream& out,const Complex& complex) {
	out <<"real: "<<complex.re <<", imaginary: "<<complex.im;

	return out;
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
