#pragma once
#include <iostream>

using namespace std;

#ifndef NODE_H
#define NODE_H

enum nodeType {
	QUESTION = 0, ANSWER = 1
};

class node {
	int data;
	nodeType type;
	node* yes;
	node* no;
public:
	node(int data, nodeType type)
	{
		this->data = data;
		this->type = type;
		this->yes = NULL;
		this->no = NULL;
	}
	friend class BinaryTree;
};

#endif // !NODE_H