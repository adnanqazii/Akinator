#pragma once
#include <iostream>

using namespace std;

#define QUEUE_SIZE 1000

#ifndef QUEUE_H
#define QUEUE_H

template <class T>
class Queue {
	T* data;
	int front;
	int rear;

public:
	Queue() 
	{
		data = new T[QUEUE_SIZE];
		front = 0;
		rear = 0;
	}

	bool isEmpty()
	{
		if (front >= rear)
		{
			return true;
		}
		return false;
	}
	bool isFull()
	{
		if (rear >= QUEUE_SIZE - 1)
		{
			return true;
		}
		return false;
	}

	void enqueue(T data)
	{
		if (this->isFull())
		{
			cout << "Error! The Queue is Full" << endl;
			return;
		}
		else {
			this->data[rear] = data;
			rear++;
			return;
		}
	}
	T dequeue()
	{
		if (this->isEmpty())
		{
			cout << "Error! The Queue is Empty" << endl;
		}
		else {
			front++;
			return this->data[front - 1];
		}
	}
	T peek()
	{
		if (this->isEmpty())
		{
			cout << "Error! The Queue is Empty" << endl;
		}
		else {
			return this->data[front];
		}
	}
};

#endif // !QUEUE_H
