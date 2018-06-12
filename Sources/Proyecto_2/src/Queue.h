/*
 * Queue.h
 *
 *  Created on: 11 jun. 2018
 *      Author: Ulq
 */

#ifndef QUEUE_H_
#define QUEUE_H_
#include "QueueNode.h"

class Queue {
private:
	QueueNode* start;
	QueueNode* end;
public:
	Queue();
	void store(Alumno*);
	Alumno* retrieve();
	QueueNode* getEnd();
	void setEnd(QueueNode*);
	QueueNode* getStart();
	void setStart(QueueNode*);

	void show();
};

#endif /* QUEUE_H_ */
