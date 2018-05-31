/*
 * Complejo.cpp
 *
 *  Created on: 31 may. 2018
 *      Author: Ulq
 */

#include "Complejo.h"
#include <iostream>
using namespace std ;

int Complejo::getImag() {
	return imag;
}

void Complejo::setImag(int imag) {
	this->imag = imag;
}

int Complejo::getReal() {
	return real;
}

void Complejo::setReal(int real) {
	this->real = real;
}

void Complejo::input() {

	cout << "Ingrese su la parte real del numero : " ;
	cin >> real;
	cout << "\nAhora Ingrese la parte Imaginaria : " ;
	cin >> imag;
}

void Complejo::show() {

	cout << "Su numero es :" << endl;
	cout << real << " + " << imag << " i" << endl;
}
