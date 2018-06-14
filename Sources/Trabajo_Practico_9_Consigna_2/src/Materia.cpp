/*
 * Materia.cpp
 *
 *  Created on: 8 jun. 2018
 *      Author: Gonzalo Palavesino
 */

#include "Materia.h"
#include <iostream>
using namespace std;
#include <sstream>

 string Materia::getCarreras()  {
	return carreras;
}

void Materia::setCarreras(string carreras) {
	this->carreras = carreras;
}

string Materia::getCurso() {
	return curso;
}

void Materia::setCurso(string curso) {
	this->curso = curso;
}

string Materia::getNombre() {
	return nombre;
}

void Materia::setNombre(string nombre) {
	this->nombre = nombre;
}

string Materia::getProfesor(){
	return profesor;
}

void Materia::setProfesor(string profesor) {
	this->profesor = profesor;
}

Materia::Materia() {
	// TODO Auto-generated constructor stub
	nombre = "";
	carreras = "";
	curso = "";
	profesor = "";

}

Materia::Materia(string nombre, string carreras, string curso, string profesor) {
	// TODO Auto-generated destructor stub
	this->nombre = nombre;
	this->carreras = carreras;
	this->curso = curso;
	this->profesor = profesor;
}

string Materia::toString() {
	stringstream ss;

		ss << "Nombre: " << nombre << " - Carrera: " << carreras << " - Curso: " << curso << " - Profesor: " << profesor;

		return ss.str();
}

bool Materia::operator >(Materia p) {
	return this->nombre > p.nombre;
}

bool Materia::operator <=(Materia p) {
	return this->nombre <= p.nombre;
}

bool Materia::operator ==(Materia p) {
	return this->nombre == p.nombre;
}

bool Materia::operator !=(Materia p) {
	return this->nombre != p.nombre;
}
