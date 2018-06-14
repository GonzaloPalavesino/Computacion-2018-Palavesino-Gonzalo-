//============================================================================
// Name        : Proyecto_2.cpp
// Author      : Gonzalo Palavesino
// Version     :
// Copyright   : Your copyright notice
// Description : project, Ansi-style
//============================================================================

#include <iostream>


#include "Carrera.h"
using namespace std;
#include "FileService.h"


int main() {


	(new FileService())->generate();
	Carrera* carrera = new Carrera();// Lista de Alumnos de la Carrera de Informatica
	(new FileService())->read(carrera);
	carrera->finalshow();





	return 0;
}
