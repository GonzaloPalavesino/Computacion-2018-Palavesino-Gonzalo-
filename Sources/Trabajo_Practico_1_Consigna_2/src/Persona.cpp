/*
 * Persona.cpp
 *
 *  Created on: 31 may. 2018
 *      Author: Ulq
 */

#include "Persona.h"
#include <iostream>
using namespace std;

const string& Persona::getApellido() const {
	return apellido;
}

void Persona::setApellido(const string& apellido) {
	this->apellido = apellido;
}

long Persona::getDni() {
	return dni;
}

void Persona::setDni(long dni) {
	this->dni = dni;
}

const string& Persona::getNombre() const {
	return nombre;
}

void Persona::setNombre(const string& nombre) {
	this->nombre = nombre;
}

void Persona::input() {

	cout << "Ingrese el Nombre de la persona : ";
	cin >> nombre;
	cout << "\nApellido de la persona: ";
	cin >> apellido;
	cout << "\nPor ultimo,  ingrese el D.N.I. de la persona : ";
	cin >> dni;
}

void Persona::show() {

	cout << "\nLos Datos de la persona que ingreso son : " << endl;
	cout << "Nombre : " << nombre << endl;
	cout << "Apellido : " << apellido << endl;
	cout << "D.N.I: " << dni;
}
