/*
 * Persona.h
 *
 *  Created on: 6 jun. 2018
 *      Author: Ulq
 */

#ifndef PERSONA_H_
#define PERSONA_H_
#include "Fecha.h"

using namespace std;
#include <iostream>

class Persona {
	
private:
	long dni;
	string apellido;
	string nombre;
	Fecha nacimiento;
public:
	Persona();
	Persona(long, string, string, Fecha);
	void input();
	void show();
	const string& getApellido() const;
	void setApellido(const string& apellido);
	long getDni();
	void setDni(long dni);
	Fecha getNacimiento();
	void setNacimiento(Fecha nacimiento);
	const string& getNombre() const;
	void setNombre(const string& nombre);
};

#endif /* PERSONA_H_ */
