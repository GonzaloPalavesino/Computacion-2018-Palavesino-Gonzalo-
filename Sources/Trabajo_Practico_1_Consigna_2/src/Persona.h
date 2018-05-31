/*
 * Persona.h
 *
 *  Created on: 31 may. 2018
 *      Author: Ulq
 */
#include <iostream>
using namespace std;

#ifndef PERSONA_H_
#define PERSONA_H_

class Persona {

private:
	long dni;
	string nombre;
	string apellido;

public:
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
