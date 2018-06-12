/*
 * Comunidad.cpp
 *
 *  Created on: 6 jun. 2018
 *      Author: Ulq
 */

#include "Comunidad.h"
using namespace std;
#include <iostream>

#include "Persona.h"
 Persona* Comunidad::getPersonas()  {
	return personas;
}

Comunidad::Comunidad() {

}

Comunidad::Comunidad(Persona personas) {
	this->personas[3]= personas;
}

void Comunidad::arreglo(Persona j) {

		j.input();


}

void Comunidad::show() {


		cout << *personas;
}
