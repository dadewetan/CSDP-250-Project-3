#include<stdio.h>
#include<iostream>
#include"QueueData.h"
using namespace std;

template<typename QueueElement> Queue<QueueElement>::Queue() 
{
	front = NULL;
	rear = NULL;
	int theItems = 0;
}

template<typename QueueElement> Queue<QueueElement>::~Queue()
{
	clear();
}

template<typename QueueElement> void Queue<QueueElement>::clear()
{
	int data;
	while (!isEmpty())
	dequeue(data);
}

template<typename QueueElement> bool Queue<QueueElement>::isEmpty()const
{
	if (front == rear)
	{
		cout << "Empty" << endl;
	}
}

template<typename QueueElement> void Queue<QueueElement>::enqueue(const QueueElement& n)
{
	QueueNode* newNode;
	newNode = new QueueNode;
	newNode->data = n;
	newNode->next = NULL;

	if (isEmpty())
	{
		front = newNode;
		rear = newNode;
	}

	else {
		rear->next = newNode;
		rear = newNode;
	}
	theItems++;
}

template<typename QueueElement> void Queue<QueueElement>::displayQueue() {
	if (isEmpty()) {
		cout << "Empty" << endl;
	}
	else {
		QueueNode* p = front;
		while (p != NULL)
		{
			cout << p->data << " ";
			p = p->next;
		}
	}
}

template<typename QueueElement> void Queue<QueueElement>::dequeue() {

	QueueNode* temp = NULL;
	
	if (isEmpty())
	{
		cout << "Queue empty. \n" << endl;
	}

	else
		temp = front->data;
	    temp = front;
		front = front->next;
		delete temp;
		theItems--;

}