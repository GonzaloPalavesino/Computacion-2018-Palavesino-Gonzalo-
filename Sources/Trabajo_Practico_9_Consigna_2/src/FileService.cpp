/*
 * FileService.cpp
 *
 *  Created on: 18 may. 2018
 *      Author: Gonzalo Palavesino
 */

#include "FileService.h"
#include "AlumnoService.h"
#include "ExamenService.h"
#include <fstream>
#include "MateriaService.h"
using namespace std;

string FileService::getFilename(){
	return filename;
}

FileService::FileService() {
	filename = "alumnos.txt";
}

void FileService::setFilename(string filename) {
	this->filename = filename;
}

void FileService::generate() {
	ofstream file;

	file.open(filename, ios::out);
	if (file.is_open()) {


			(new MateriaService())->write(&file, new Materia("Informatica", "Ingenieria", "A" , "Ramirez"));
			(new AlumnoService())->write(&file, new Alumno("Pedero", "Perez", 10));
			(new ExamenService())->write(&file,	new Examen("Fisica", "18/05/2019", 8, 1, 45));
			(new ExamenService())->write(&file,	new Examen("Calculo", "18/05/2019", 8, 1, 45));


			(new AlumnoService())->write(&file, new Alumno("Gonzalo", "Palavesino", 20));
			(new ExamenService())->write(&file,	new Examen("Fisica", "18/05/2019", 9, 6, 45));
			(new ExamenService())->write(&file,	new Examen("Calculo", "18/05/2019", 8, 1, 45));




	}
	file.close();
}

void FileService::read(Carrera* carrera) {
	ifstream file;

	file.open(filename, ios::in);
	if (file.is_open()) {
		string selector;
		file >> selector;
		while (file.eof() == false) {
			if (selector == "#materia") {
				string nombre;
				string carreras;
				string curso;
				string profesor;
				file >> nombre >> carreras >> curso >> profesor;
				carrera->getMaterias()->add(new Materia(nombre, carreras, curso, profesor));
						}
			if (selector == "#alumno") {
				string nombre;
				string apellido;
				int legajo;
				file >> nombre >> apellido >> legajo;
				carrera->getMaterias()->getStart()->getQueue()->store(new Alumno(nombre, apellido, legajo));
			}
			if (selector == "#examen") {
				string materia;
				string fecha;
				int nota;
				int libro;
				int folio;
				file >> materia >> fecha >> nota >> libro >> folio;
				carrera->getMaterias()->getStart()->getQueue()->getEnd()->getStack()->push(new Examen(materia, fecha, nota, libro, folio));
			}
			file >> selector;
		}
	}
	file.close();
}
