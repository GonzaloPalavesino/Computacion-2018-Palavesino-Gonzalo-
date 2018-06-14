/*
 * NodeStack.cpp
 *
 *  Created on: 11 jun. 2018
 *      Author: Gonzalo Palavesino
 */

#include "NodeStack.h"

#include <iostream>

using namespace std;

NodeStack* NodeStack::getNext() {
	return next;
}

void NodeStack::setNext(NodeStack* next) {
	this->next = next;
}

Examen* NodeStack::getValue() {
	return value;
}

void NodeStack::setValue(Examen* value) {
	this->value = value;
}

NodeStack::NodeStack() {
	// TODO Auto-generated constructor stub
	value = 0;
	next = NULL;
}


