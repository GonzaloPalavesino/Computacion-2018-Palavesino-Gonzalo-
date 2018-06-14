/*
 * Carrera.cpp
 *
 *  Created on: 11 jun. 2018
 *      Author: Gonzalo Palavesino
 */

#include "Carrera.h"

Carrera::Carrera() {
	materias = new Link();
}

Link* Carrera::getMaterias() {
	return materias;
}

void Carrera::setMaterias(Link* materias) {
	this->materias = materias;
}

void Carrera::finalshow() {
	materias->show();


}
