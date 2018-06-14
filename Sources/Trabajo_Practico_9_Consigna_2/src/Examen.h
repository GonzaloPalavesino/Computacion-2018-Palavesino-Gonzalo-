/*
 * Examen.h
 *
 *  Created on: 8 jun. 2018
 *      Author: Gonzalo Palavesino
 */

#ifndef EXAMEN_H_
#define EXAMEN_H_
#include <iostream>
using namespace std;

class Examen {

private:
	string materia;
	string fecha;
	int libro;
	int nota;
	int folio;

public:
	Examen();
	Examen(string, string, int, int, int);
	string getFecha();
	void setFecha(string fecha);
	int getFolio();
	void setFolio(int folio);
	int getLibro();
	void setLibro(int libro);
	string getMateria();
	void setMateria(string materia);
	int getNota();
	void setNota(int nota);
	string toString();

};

#endif /* EXAMEN_H_ */
