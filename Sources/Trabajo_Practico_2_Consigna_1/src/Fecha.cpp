/*
 * Fecha.cpp
 *
 *  Created on: 31 may. 2018
 *      Author: Ulq
 */

#include "Fecha.h"
#include <iostream>
using namespace std;

int Fecha::getAnho() {
	return anho;
}

void Fecha::setAnho(int anho) {
	this->anho = anho;
}

int Fecha::getDia() {
	return dia;
}

void Fecha::setDia(int dia) {
	this->dia = dia;
}

int Fecha::getMes() {
	return mes;
}


void Fecha::setMes(int mes) {
	this->mes = mes;
}

Fecha::Fecha() {
	// TODO Auto-generated constructor stub
	dia = 01;
	mes = 01;
	anho = 1980;

}

Fecha::Fecha(int dia, int mes, int anho) {
	// TODO Auto-generated destructor stub
	this -> dia = dia;
	this -> mes = mes;
	this -> anho = anho;
}

void Fecha::input() {



	cout << "Fecha actual del sistema (F1) : " << endl;
	cout << dia << "/" << mes << "/" << anho << endl;
	cout << "Ahora Ingrese una nueva fecha (F2).  " << endl;
	cout << "\nDia : ";
	cin >> dia;
	cout << "\nMes : ";
	cin >> mes;
	cout << "\nAño :";
	cin >> anho;



}

void Fecha::show() {


	cout << "\nFecha actual en el sistema : " << endl;
	cout << dia << "/" << mes << "/" << anho << endl;

}

bool Fecha::operator <(Fecha fecha) {

	if (anho < fecha.anho)
			return true;
	if (anho > fecha.anho)
			return false;
	if (mes < fecha.mes)
			return true;
	if (mes > fecha.mes)
			return false;
	if (dia < fecha.dia)
			return true;
	return false;
}

Fecha Fecha::operator +=(int dias) {

	int diasmes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

		dia += dias;

		while (dia > diasmes[mes - 1]) {
			if (mes == 2) {
				if (dia > 28) {
					mes++;
					dia-=28;
				}
			}
			if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
				if (dia > 31) {
					mes++;
					dia -= 31;
				}
			}
			if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
				if (dia > 30) {
					mes++;
					dia -= 30;
				}
			}
			if (mes > 12) {
				mes -= 12;
				anho++;
			}
		}
		return *this;
}

void Fecha::sumardias(Fecha f2) {

	int a;
	cout << "Ingrese la cantidad de dias a sumar : ";
	cin >> a;
	f2 += a;
	f2.show();


}

void Fecha::comparar(Fecha f1, Fecha f2) {


	if (f1 < f2)
		cout << "F1 es menor que F2" << endl;
	else
		cout << "F1 es mayor que F2" << endl;

}
