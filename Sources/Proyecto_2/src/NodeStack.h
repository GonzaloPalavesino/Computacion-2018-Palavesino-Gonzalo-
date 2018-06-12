/*
 * NodeStack.h
 *
 *  Created on: 11 jun. 2018
 *      Author: Ulq
 */

#ifndef NODESTACK_H_
#define NODESTACK_H_
#include "Examen.h"

class NodeStack {
public:
private:
	Examen* value;
	NodeStack* next;
public:
	NodeStack();
	NodeStack* getNext();
	void setNext(NodeStack* next);
	Examen* getValue();
	void setValue(Examen* value);
};

#endif /* NODESTACK_H_ */
