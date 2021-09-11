#pragma once
#include <iostream>
#include <fstream>
#include "BinaryTree.h"

using namespace std;

void readQuestionsFromFile(BinaryTree* Akinator)
{
	ifstream fileIn;
	fileIn.open("files/questions.txt", ios::in);

	string s;
	while (!fileIn.eof())
	{
		getline(fileIn, s);
		if (s.empty())
		{
			break;
		}
		Akinator->pushQuestion(s);
	}

	return;
}

Character* readCharacterFromFile(string filename)
{
	ifstream fileIn;
	fileIn.open(filename, ios::in);

	if (!fileIn)
	{
		return NULL;
	}

	string name;
	getline(fileIn, name);

	Character* player = new Character(name);

	int qNo;
	bool ans;
	int temp = 0;
	while (!fileIn.eof())
	{
		fileIn >> qNo >> ans;
		if (qNo == temp)
		{
			break;
		}
		player->pushQuestion(qNo, ans);
		temp = qNo;
	}

	return player;
}

void setCharacters(BinaryTree* Akinator)
{
	ifstream fileIn;
	fileIn.open("files/characters/characterCount.txt", ios::in);

	int count;
	fileIn >> count;

	string filename;
	Character* player;

	for (int i = 1; i <= count; i++)
	{
		filename = "files/characters/";
		filename += "character";
		filename += to_string(i);
		filename += ".txt";
		player = readCharacterFromFile(filename);
		Akinator->addCharacter(player);
	}
}