/*
 * Fecha.h
 *
 *  Created on: 6 jun. 2018
 *      Author: Ulq
 */

#ifndef FECHA_H_
#define FECHA_H_

class Fecha {

private:
	int dia;
	int mes;
	int anho;

public:
	Fecha();
	Fecha(int, int, int);
	void input();
	void show();
	int getAnho() const;
	void setAnho(int anho);
	int getDia() const;
	void setDia(int dia);
	int getMes() const;
	void setMes(int mes);
};

#endif /* FECHA_H_ */
