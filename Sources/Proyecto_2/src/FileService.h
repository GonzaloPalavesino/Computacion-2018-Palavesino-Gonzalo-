/*
 * FileService.h
 *
 *  Created on: 18 may. 2018
 *      Author: daniel
 */

#ifndef FILESERVICE_H_
#define FILESERVICE_H_

#include <iostream>
#include "Carrera.h"

using namespace std;

class FileService {
public:
	FileService();
	string getFilename();
	void setFilename(string filename);
	void generate();
	void read(Carrera*);
private:
	string filename;
};

#endif /* FILESERVICE_H_ */
