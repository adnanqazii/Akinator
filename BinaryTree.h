#pragma once
#include "pch.h"
#include <iostream>
#include <vector>
#include "Character.h"
#include "Node.h"

#ifndef BINARYTREE_H
#define BINARYTREE_H

using namespace System;

class BinaryTree
{
	node* root;
	node* focusNode;
	int count;
	vector<string> questionList;
	vector<string> answerList;

public:
	BinaryTree()
	{
		root = NULL;
		focusNode = NULL;
		count = 0;
	}
	void pushQuestion(string question)
	{
		this->questionList.push_back(question);
	}
	bool focusNodeIsEmpty()
	{
		if (focusNode == NULL)
			return true;
		else
			return false;
	}
	void InitializefocusNode()
	{
		this->focusNode = root;
		this->count = 0;
	}
	nodeType getFocusNodeType()
	{
		return this->focusNode->type;
	}
	void moveToYes()
	{
		focusNode = focusNode->yes;
	}
	void moveToNo()
	{
		focusNode = focusNode->no;
	}

	String^ getData()
	{
		if (focusNode == NULL)
		{
			return "Sorry! No such character exists in our record";
			
		}
		else if (focusNode->type == QUESTION)
		{
			count++;
			
			string q = "Q";
			q += to_string(count);
			q += ". ";

			q += questionList[focusNode->data-1];

			String^ str = gcnew String(q.c_str());

			return str;
		}
		else {
			string ans = answerList[focusNode->data - 1];

			String^ str = gcnew String(ans.c_str());

			return str;
		}
	}

	void addCharacter(Character* player)
	{
		if (player == NULL)
		{
			return;
		}
		else {
			answerList.push_back(player->name);
			root = addCharacter(player, root);
			return;
		}
	}
	node* addCharacter(Character* player, node* focusNode)
	{
		if (player->questions.isEmpty())
		{
			int answerNumber = this->answerList.size();
			focusNode = new node(answerNumber, ANSWER);
			return focusNode;
		}
		else if (focusNode == NULL)
		{
			focusNode = new node(player->questions.peek(), QUESTION);
		}
		else if (focusNode->data != player->questions.peek())
		{
			player->questions.dequeue();
			player->answers.dequeue();
			addCharacter(player, focusNode);
		}

		player->questions.dequeue();
		if (player->answers.dequeue())
		{
			focusNode->yes = addCharacter(player, focusNode->yes);
		}
		else {
			focusNode->no = addCharacter(player, focusNode->no);
		}
		return focusNode;
	}

	bool askQuestion(int questionNumber)
	{
		bool ans;

		cout << questionList[questionNumber - 1] << endl;
		cout << "1. YES" << endl;
		cout << "0. NO" << endl;
		cin >> ans;

		return ans;
	}
};

#endif // !BINARYTREE_H