/*
 * Persona.cpp
 *
 *  Created on: 6 jun. 2018
 *      Author: Ulq
 */

#include "Persona.h"

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

Fecha Persona::getNacimiento() {
	return nacimiento;
}

void Persona::setNacimiento(Fecha nacimiento) {
	this->nacimiento = nacimiento;
}

const string& Persona::getNombre() const {
	return nombre;
}

void Persona::input() {

	cout << "Ingrese los datos de la Persona." << endl;
	cout << "\nD.N.I: ";
	cin >> dni;
	cout << "\nNombre : ";
	cin >> nombre;
	cout << "\nApellido : ";
	cin >> apellido;
	cout << "\nFecha de Nacimiento : " << endl;
	nacimiento.input();
}

void Persona::show() {

	cout << "\nDatos de la Persona." << endl;
	cout << "\nNombre : " << nombre << endl;
	cout << "Apellido : " << apellido << endl;
	cout << "D.N.I : " << nombre << endl;
	cout << "Fecha de nacimiento  : ";
	nacimiento.show();

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

Persona::Persona(long dni, string nombre, string apellido, Fecha nacimiento) {
	// TODO Auto-generated destructor stub
	this->dni = dni;
	this->nombre = nombre;
	this->apellido = apellido;
	this->nacimiento = nacimiento;
}

