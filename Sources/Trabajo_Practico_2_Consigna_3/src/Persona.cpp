/*
 * Persona.cpp
 *
 *  Created on: 6 jun. 2018
 *      Author: Ulq
 */

#include "Persona.h"
using namespace std;
#include <iostream>

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

Persona::Persona() {
	// TODO Auto-generated constructor stub
	dni = 0;
	nombre = " ";
	apellido = " ";

}

Persona::Persona(long dni, string nombre, string apellido) {
	// TODO Auto-generated destructor stub
	this->dni = dni;
	this->nombre = nombre;
	this->apellido = apellido;
}

void Persona::input() {

	cout << "Ingrese los datos de la persona." << endl;
	cout << "\nNombre : ";
	cin >> nombre;
	cout << "\nApellido : ";
	cin >> apellido;
	cout << "\nD.N.I : " ;
	cin >> dni;
}

void Persona::show() {

	cout << "\n Datos de la persona :  " << endl;
	cout << "Nombre : " << nombre << endl;
	cout << "Apellido : " << apellido << endl;
	cout << "D.N.I : " << dni << endl;
}
