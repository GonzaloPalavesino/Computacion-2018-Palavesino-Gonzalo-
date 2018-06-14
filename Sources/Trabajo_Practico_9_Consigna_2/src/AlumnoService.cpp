/*
 * AlumnoService.cpp
 *
 *  Created on: 18 may. 2018
 *      Author: Gonzalo Palavesino
 */

#include "AlumnoService.h"

void AlumnoService::write(ofstream* file, Alumno* alumno) {
	*file << "#alumno" << " " << alumno->getNombre() << " " << alumno->getApellido() << " " << alumno->getLegajo() << endl;
}
