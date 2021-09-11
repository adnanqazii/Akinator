#pragma once
#include <iostream>
#include <string>
#include "Queue.h"
#include "BinaryTree.h"

using namespace std;

#ifndef CHARACTER_H
#define CHARACTER_H

class Character {
	string name;
	Queue<int> questions;
	Queue<bool> answers;

public:
	Character(string name)
	{
		this->name = name;
	}
	void pushQuestion(int questionNumber, bool answer)
	{
		questions.enqueue(questionNumber);
		answers.enqueue(answer);
	}
	friend class BinaryTree;
};

#endif // !CHARACTER_H