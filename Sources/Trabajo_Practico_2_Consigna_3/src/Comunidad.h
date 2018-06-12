/*
 * Comunidad.h
 *
 *  Created on: 6 jun. 2018
 *      Author: Ulq
 */

#ifndef COMUNIDAD_H_
#define COMUNIDAD_H_
#include "Persona.h"

class Comunidad {

private:
	Persona personas[3];
public:
	Comunidad();
	Comunidad(Persona);
	Persona* getPersonas();
	void arreglo (Persona);
	void show();

};

#endif /* COMUNIDAD_H_ */
