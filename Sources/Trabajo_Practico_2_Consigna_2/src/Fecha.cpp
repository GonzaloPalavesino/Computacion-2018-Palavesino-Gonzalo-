/*
 * Fecha.cpp
 *
 *  Created on: 6 jun. 2018
 *      Author: Ulq
 */

#include "Fecha.h"
using namespace std;
#include <iostream>


int Fecha::getAnho() const {
	return anho;
}

void Fecha::setAnho(int anho) {
	this->anho = anho;
}

int Fecha::getDia() const {
	return dia;
}

void Fecha::setDia(int dia) {
	this->dia = dia;
}

int Fecha::getMes() const {
	return mes;
}

void Fecha::setMes(int mes) {
	this->mes = mes;
}

Fecha::Fecha() {
	// TODO Auto-generated constructor stub
	dia = 1;
	mes = 1;
	anho = 1980;

}

Fecha::Fecha(int dia, int mes, int anho) {
	// TODO Auto-generated destructor stub
	this->dia = dia;
	this->mes = mes;
	this->anho = anho;
}

void Fecha::input() {

	cout << "Ingrese el dia : ";
	cin >> dia;
	cout << "\nIngrese el mes : ";
	cin >> mes;
	cout << "\nIngrese el año : ";
	cin >> anho;
}

void Fecha::show() {

	cout << dia << "/" << mes << "/" << anho << endl;
}
