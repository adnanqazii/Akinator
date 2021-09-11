#include "pch.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>
#include "BinaryTree.h"
#include "Character.h"
#include "Form1.h"

using namespace System;

using namespace System::Windows::Forms;

[STAThread]

int main() {

	BinaryTree* Akinator = new BinaryTree;

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew App());

	return 0;
}