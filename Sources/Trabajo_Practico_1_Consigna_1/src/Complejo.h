/*
 * Complejo.h
 *
 *  Created on: 31 may. 2018
 *      Author: Ulq
 */

#ifndef COMPLEJO_H_
#define COMPLEJO_H_

class Complejo {

private:
	int real;
	int imag;

public:
	void input();
	void show();
	int getImag();
	void setImag(int imag);
	int getReal();
	void setReal(int real);
};

#endif /* COMPLEJO_H_ */
