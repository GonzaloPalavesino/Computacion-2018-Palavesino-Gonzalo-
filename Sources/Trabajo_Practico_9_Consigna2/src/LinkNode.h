/*
 * LinkNode.h
 *
 *  Created on: 11 jun. 2018
 *      Author: Gonzalo Palavesino
 */

#ifndef LINKNODE_H_
#define LINKNODE_H_
#include "Materia.h"
#include "Queue.h"

class LinkNode {
private:
	Materia* value;
	LinkNode* next;
	Queue* queue;
public:
	LinkNode();
	LinkNode* getNext();
	void setNext(LinkNode* next);
	Materia* getValue();
	void setValue(Materia* value);
	Queue* getQueue();
	void setQueue(Queue* queue);
};

#endif /* LINKNODE_H_ */
