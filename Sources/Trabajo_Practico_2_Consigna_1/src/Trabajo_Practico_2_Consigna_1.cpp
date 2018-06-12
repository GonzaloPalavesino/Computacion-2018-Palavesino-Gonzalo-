//============================================================================
// Name        : Trabajo_Practico_2_Consigna_1.cpp
// Author      : Gonzalo Palavesino
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Fecha.h"
using namespace std;

int main() {

	int a;
	Fecha f1(01,01,1980);
	Fecha f2;


	f2.input();
	f2.show();
	cout << "\nAhora Digite :" << endl;
	cout << "1: Si desea comparar ambas fechas. " << endl;
	cout << "2: Si desea sumarles dias a la fecha actual." << endl;
	cin >> a;
	switch (a)
	{

	case 1 :
		f2.comparar(f1,f2);
		break;
	case 2 :
		f2.sumardias(f2);
		break;
	default :
		cout << "Opcion Incorrecta. Vuelva a intentar." << endl;
		break;

	}





	return 0;
}
