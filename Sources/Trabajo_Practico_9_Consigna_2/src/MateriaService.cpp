/*
 * MateriaService.cpp
 *
 *  Created on: 8 jun. 2018
 *      Author: Gonzalo Palavesino
 */

#include "MateriaService.h"


void MateriaService::write(ofstream* file, Materia* materia) {

	*file << "#materia" << " " << materia->getNombre() << " " << materia->getCarreras() << " " << materia->getCurso() << " " << materia->getProfesor()  << endl;
}
