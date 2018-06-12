/*
 * Fecha.h
 *
 *  Created on: 31 may. 2018
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
	void sumardias(Fecha);
	void comparar(Fecha, Fecha);
	void input();
	void show();
	bool operator < (Fecha);
	Fecha operator += (int);
	int getAnho();
	void setAnho(int anho);
	int getDia();
	void setDia(int dia);
	int getMes();
	void setMes(int mes);
};

#endif /* FECHA_H_ */
