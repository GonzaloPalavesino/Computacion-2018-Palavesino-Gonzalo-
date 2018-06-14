/*
 * NodeStack.h
 *
 *  Created on: 11 jun. 2018
 *      Author: Gonzalo Palavesino
 */

#ifndef NODESTACK_H_
#define NODESTACK_H_
#include "Examen.h"

class NodeStack {

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
