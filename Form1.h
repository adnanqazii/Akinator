#pragma once
#include "filing.h"
#include "BInaryTree.h"
#include <string>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

void startProgram();

BinaryTree* Akinator = new BinaryTree;

public ref class App : public System::Windows::Forms::Form
{
		
public:
	App()
	{
		InitializeComponent();

		this->BackgroundImage = Image::FromFile("BG.jpg");
		this->gamePanel->BackgroundImage = Image::FromFile("questionPage.png");
		this->resultPanel->BackgroundImage = Image::FromFile("resultPage.jpg");
		
		this->gamePanel->Hide();
		this->resultPanel->Hide();
		this->ok->Hide();

		startProgram();
	}

protected:
	/// <summary>
	/// Clean up used resources.
	/// </summary>
	~App()
	{
		if (components)
		{
			delete components;
		}
	}

private: 


	System::Windows::Forms::Button^ exit;

private: System::Windows::Forms::Button^ play;
private: System::Windows::Forms::Panel^ gamePanel;







private: System::Windows::Forms::TextBox^ questionText;
private: System::Windows::Forms::Button^ no;
private: System::Windows::Forms::Button^ yes;
private: System::Windows::Forms::Button^ ok;





private: System::Windows::Forms::Button^ close;
private: System::Windows::Forms::Panel^ resultPanel;
private: System::Windows::Forms::Button^ quit;


private: System::Windows::Forms::Button^ home;
private: System::Windows::Forms::Button^ characterName;
private: System::Windows::Forms::Button^ resultText;





	/// <summary>
	/// Required designer variable.
	/// </summary>
	System::ComponentModel::Container^ components;

	#pragma region Windows Form Designer generated code
			
	/// <summary>
	/// Required method for designer assistance.
	/// The content of the method must not be changed with the code editor.
	/// </summary>
	void InitializeComponent(void)
	{
		this->play = (gcnew System::Windows::Forms::Button());
		this->exit = (gcnew System::Windows::Forms::Button());
		this->gamePanel = (gcnew System::Windows::Forms::Panel());
		this->resultPanel = (gcnew System::Windows::Forms::Panel());
		this->characterName = (gcnew System::Windows::Forms::Button());
		this->quit = (gcnew System::Windows::Forms::Button());
		this->home = (gcnew System::Windows::Forms::Button());
		this->close = (gcnew System::Windows::Forms::Button());
		this->ok = (gcnew System::Windows::Forms::Button());
		this->questionText = (gcnew System::Windows::Forms::TextBox());
		this->no = (gcnew System::Windows::Forms::Button());
		this->yes = (gcnew System::Windows::Forms::Button());
		this->resultText = (gcnew System::Windows::Forms::Button());
		this->gamePanel->SuspendLayout();
		this->resultPanel->SuspendLayout();
		this->SuspendLayout();
		// 
		// play
		// 
		this->play->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
			static_cast<System::Int32>(static_cast<System::Byte>(30)));
		this->play->FlatAppearance->BorderSize = 0;
		this->play->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->play->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->play->ForeColor = System::Drawing::Color::Cornsilk;
		this->play->Location = System::Drawing::Point(86, 452);
		this->play->Name = L"play";
		this->play->Size = System::Drawing::Size(275, 66);
		this->play->TabIndex = 1;
		this->play->Text = L"Play";
		this->play->UseVisualStyleBackColor = false;
		this->play->Click += gcnew System::EventHandler(this, &App::play_Click);
		// 
		// exit
		// 
		this->exit->BackColor = System::Drawing::Color::Cornsilk;
		this->exit->FlatAppearance->BorderColor = System::Drawing::Color::Gold;
		this->exit->FlatAppearance->BorderSize = 0;
		this->exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->exit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
			static_cast<System::Int32>(static_cast<System::Byte>(30)));
		this->exit->Location = System::Drawing::Point(86, 561);
		this->exit->Name = L"exit";
		this->exit->Size = System::Drawing::Size(275, 66);
		this->exit->TabIndex = 2;
		this->exit->Text = L"Quit";
		this->exit->UseVisualStyleBackColor = false;
		this->exit->Click += gcnew System::EventHandler(this, &App::exit_Click);
		// 
		// gamePanel
		// 
		this->gamePanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
			static_cast<System::Int32>(static_cast<System::Byte>(117)));
		this->gamePanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		this->gamePanel->Controls->Add(this->resultPanel);
		this->gamePanel->Controls->Add(this->close);
		this->gamePanel->Controls->Add(this->ok);
		this->gamePanel->Controls->Add(this->questionText);
		this->gamePanel->Controls->Add(this->no);
		this->gamePanel->Controls->Add(this->yes);
		this->gamePanel->Dock = System::Windows::Forms::DockStyle::Fill;
		this->gamePanel->Location = System::Drawing::Point(0, 0);
		this->gamePanel->Name = L"gamePanel";
		this->gamePanel->Size = System::Drawing::Size(1347, 721);
		this->gamePanel->TabIndex = 4;
		this->gamePanel->TabStop = true;
		// 
		// resultPanel
		// 
		this->resultPanel->BackColor = System::Drawing::Color::YellowGreen;
		this->resultPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		this->resultPanel->Controls->Add(this->resultText);
		this->resultPanel->Controls->Add(this->characterName);
		this->resultPanel->Controls->Add(this->quit);
		this->resultPanel->Controls->Add(this->home);
		this->resultPanel->Dock = System::Windows::Forms::DockStyle::Fill;
		this->resultPanel->Location = System::Drawing::Point(0, 0);
		this->resultPanel->Name = L"resultPanel";
		this->resultPanel->Size = System::Drawing::Size(1347, 721);
		this->resultPanel->TabIndex = 10;
		// 
		// characterName
		// 
		this->characterName->BackColor = System::Drawing::Color::Transparent;
		this->characterName->FlatAppearance->BorderSize = 0;
		this->characterName->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
		this->characterName->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
		this->characterName->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->characterName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->characterName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
			static_cast<System::Int32>(static_cast<System::Byte>(27)));
		this->characterName->Location = System::Drawing::Point(496, 254);
		this->characterName->Name = L"characterName";
		this->characterName->Size = System::Drawing::Size(337, 50);
		this->characterName->TabIndex = 12;
		this->characterName->Text = L"Character Name";
		this->characterName->UseVisualStyleBackColor = false;
		// 
		// quit
		// 
		this->quit->BackColor = System::Drawing::Color::White;
		this->quit->DialogResult = System::Windows::Forms::DialogResult::Cancel;
		this->quit->FlatAppearance->BorderSize = 0;
		this->quit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->quit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->quit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
			static_cast<System::Int32>(static_cast<System::Byte>(45)));
		this->quit->Location = System::Drawing::Point(554, 491);
		this->quit->Name = L"quit";
		this->quit->Size = System::Drawing::Size(218, 66);
		this->quit->TabIndex = 11;
		this->quit->Text = L"Quit";
		this->quit->UseVisualStyleBackColor = false;
		this->quit->Click += gcnew System::EventHandler(this, &App::exit_Click);
		// 
		// home
		// 
		this->home->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
			static_cast<System::Int32>(static_cast<System::Byte>(45)));
		this->home->FlatAppearance->BorderSize = 0;
		this->home->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->home->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->home->ForeColor = System::Drawing::Color::White;
		this->home->Location = System::Drawing::Point(554, 396);
		this->home->Name = L"home";
		this->home->Size = System::Drawing::Size(218, 66);
		this->home->TabIndex = 8;
		this->home->Text = L"Back to Home";
		this->home->UseVisualStyleBackColor = false;
		this->home->Click += gcnew System::EventHandler(this, &App::home_Click);
		// 
		// close
		// 
		this->close->BackColor = System::Drawing::Color::Red;
		this->close->FlatAppearance->BorderSize = 0;
		this->close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->close->ForeColor = System::Drawing::Color::White;
		this->close->Location = System::Drawing::Point(1284, -9);
		this->close->Name = L"close";
		this->close->Size = System::Drawing::Size(63, 58);
		this->close->TabIndex = 10;
		this->close->Text = L"x";
		this->close->UseVisualStyleBackColor = false;
		this->close->Click += gcnew System::EventHandler(this, &App::exit_Click);
		// 
		// ok
		// 
		this->ok->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
			static_cast<System::Int32>(static_cast<System::Byte>(90)));
		this->ok->FlatAppearance->BorderSize = 0;
		this->ok->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
			static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(80)));
		this->ok->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
			static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(80)));
		this->ok->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->ok->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->ok->ForeColor = System::Drawing::Color::White;
		this->ok->Location = System::Drawing::Point(345, 533);
		this->ok->Name = L"ok";
		this->ok->Size = System::Drawing::Size(168, 57);
		this->ok->TabIndex = 4;
		this->ok->Text = L"Ok";
		this->ok->UseVisualStyleBackColor = false;
		this->ok->Click += gcnew System::EventHandler(this, &App::ok_Click);
		// 
		// questionText
		// 
		this->questionText->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
			static_cast<System::Int32>(static_cast<System::Byte>(117)));
		this->questionText->BorderStyle = System::Windows::Forms::BorderStyle::None;
		this->questionText->Cursor = System::Windows::Forms::Cursors::Default;
		this->questionText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->questionText->ForeColor = System::Drawing::Color::White;
		this->questionText->Location = System::Drawing::Point(12, 338);
		this->questionText->Multiline = true;
		this->questionText->Name = L"questionText";
		this->questionText->ReadOnly = true;
		this->questionText->Size = System::Drawing::Size(859, 82);
		this->questionText->TabIndex = 7;
		this->questionText->Text = L"The Question will show here";
		this->questionText->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// no
		// 
		this->no->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
			static_cast<System::Int32>(static_cast<System::Byte>(90)));
		this->no->FlatAppearance->BorderSize = 0;
		this->no->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
			static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(80)));
		this->no->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
			static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(80)));
		this->no->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->no->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->no->ForeColor = System::Drawing::Color::White;
		this->no->Location = System::Drawing::Point(345, 573);
		this->no->Name = L"no";
		this->no->Size = System::Drawing::Size(168, 57);
		this->no->TabIndex = 6;
		this->no->Text = L"No";
		this->no->UseVisualStyleBackColor = false;
		this->no->Click += gcnew System::EventHandler(this, &App::no_Click);
		// 
		// yes
		// 
		this->yes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
			static_cast<System::Int32>(static_cast<System::Byte>(90)));
		this->yes->FlatAppearance->BorderSize = 0;
		this->yes->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
			static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(80)));
		this->yes->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
			static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(80)));
		this->yes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->yes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->yes->ForeColor = System::Drawing::Color::White;
		this->yes->Location = System::Drawing::Point(345, 485);
		this->yes->Name = L"yes";
		this->yes->Size = System::Drawing::Size(168, 57);
		this->yes->TabIndex = 5;
		this->yes->Text = L"Yes";
		this->yes->UseVisualStyleBackColor = false;
		this->yes->Click += gcnew System::EventHandler(this, &App::yes_Click);
		// 
		// resultText
		// 
		this->resultText->BackColor = System::Drawing::Color::Transparent;
		this->resultText->FlatAppearance->BorderSize = 0;
		this->resultText->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
		this->resultText->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
		this->resultText->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->resultText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->resultText->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
			static_cast<System::Int32>(static_cast<System::Byte>(45)));
		this->resultText->Location = System::Drawing::Point(258, 178);
		this->resultText->Name = L"resultText";
		this->resultText->Size = System::Drawing::Size(817, 50);
		this->resultText->TabIndex = 13;
		this->resultText->Text = L"The Character you are thinking about is";
		this->resultText->UseVisualStyleBackColor = false;
		// 
		// App
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(114)),
			static_cast<System::Int32>(static_cast<System::Byte>(56)));
		this->ClientSize = System::Drawing::Size(1347, 721);
		this->Controls->Add(this->gamePanel);
		this->Controls->Add(this->play);
		this->Controls->Add(this->exit);
		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		this->MaximizeBox = false;
		this->MinimizeBox = false;
		this->Name = L"App";
		this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
		this->Text = L"Form1";
		this->gamePanel->ResumeLayout(false);
		this->gamePanel->PerformLayout();
		this->resultPanel->ResumeLayout(false);
		this->ResumeLayout(false);

	}

	#pragma endregion

	private:

	System::Void play_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->gamePanel->Show();

		Akinator->InitializefocusNode();

		displayNext();
	}
	System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Application::Exit();
	}
	System::Void yes_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Akinator->moveToYes();

		displayNext();
	}
	System::Void no_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Akinator->moveToNo();

		displayNext();
	}
	void displayNext()
	{
		if (Akinator->focusNodeIsEmpty())
		{
			this->yes->Hide();
			this->no->Hide();
			this->ok->Show();
			this->questionText->Text = Akinator->getData();
		}
		else if (Akinator->getFocusNodeType() == QUESTION)
		{
			this->questionText->Text = Akinator->getData();
		}
		else 
			displayResult();
	}
	void displayResult()
	{
		this->characterName->Text = Akinator->getData();
		
		this->resultPanel->Show();
	}
	System::Void home_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->gamePanel->Hide();
		this->resultPanel->Hide();
	}
	System::Void ok_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->gamePanel->Hide();
		this->yes->Show();
		this->no->Show();
		this->ok->Hide();
	}
};

void startProgram()
{

	readQuestionsFromFile(Akinator);

	setCharacters(Akinator);

	return;
}