/*
 * Persona.h
 *
 *  Created on: 6 jun. 2018
 *      Author: Ulq
 */

#ifndef PERSONA_H_
#define PERSONA_H_
using namespace std;
#include <iostream>

class Persona {

private:
	long dni;
	string nombre;
	string apellido;
public:
	Persona();
	Persona(long, string, string);
	void input();
	void show();
	const string& getApellido() const;
	void setApellido(const string& apellido);
	long getDni();
	void setDni(long dni);
	const string& getNombre() const;
	void setNombre(const string& nombre);
};

#endif /* PERSONA_H_ */
