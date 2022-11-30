#ifndef QueueData
#define QueueData

#include<stdio.h>
#include<iostream>

template <typename QueueElement> class Queue {

private:
	struct QueueNode
	{
		int data;
		struct QueueNode* next;
	};

	QueueNode* front;
	QueueNode* rear;
	int theItems;

public:
	Queue();
	~Queue();
	void enqueue(const QueueElement& n);
	void dequeue();
	bool isEmpty()const;
	void displayQueue();
	void clear();
};


#endif
