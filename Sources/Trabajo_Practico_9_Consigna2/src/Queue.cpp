/*
 * Queue.cpp
 *
 *  Created on: 11 jun. 2018
 *      Author: Gonzalo Palavesino
 */

#include "Queue.h"

#include <iostream>

using namespace std;

QueueNode* Queue::getEnd() {
	return end;
}

void Queue::setEnd(QueueNode* end) {
	this->end = end;
}

QueueNode* Queue::getStart() {
	return start;
}

void Queue::store(Alumno* value) {
	// Creo nodo nuevo
	QueueNode* newQueueNode = new QueueNode();
	newQueueNode->setValue(value);
	newQueueNode->setStack(new Stack());
	// Hago que el puntero del último (end) apunte al nuevo
	if (end != NULL)
		end->setNext(newQueueNode);
	// Hago que el último (end) apunte al nuevo
	end = newQueueNode;
	// Si start es NULO entonces start tambien apunta el nuevo
	if (start == NULL)
		start = newQueueNode;
}

Alumno* Queue::retrieve() {
	// Si la cola está vacía devuelvo -255
	if (start == NULL)
		return NULL;
	// Variables auxiliares para no perder la referencia
	QueueNode* aux = start;
	Alumno* value = start->getValue();
	// Corro el start al nodo siguiente
	start = start->getNext();
	// Verifico si start es NULO
	if (start == NULL)
		end = NULL;
	// Elimino el nodo
	delete aux;
	// Devuelvo el valor recuperado
	return value;
}

void Queue::setStart(QueueNode* start) {
	this->start = start;
}

Queue::Queue() {
	// TODO Auto-generated constructor stub
	this->start = this->end = NULL;
}

void Queue::show() {
	QueueNode* xx = start;

	while (xx != NULL) {
		cout << "Direccion: " << xx << " - Valor: " << xx->getValue()->toString() << " - Next: " << xx->getNext() << endl;

		xx->getStack()->show();
		xx = xx->getNext();

		cout << endl;
	}

}
