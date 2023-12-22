#pragma once

#include "human.h"
#include "visitor.h"
#include "manager.h"
#include "singer.h"
#include "concert.h"
#include "manager.h"

#include "ManagerPanel.h"
#include "visitorPanel.h"
#include "singerPanel.h"

#include <fstream>
#include <Windows.h>
#include <string>
#include <locale.h>
#include <msclr/marshal_cppstd.h> 


namespace KasianchukTask {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace std;

	/// <summary>
	/// Summary for MyForm
	/// </summary>

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	public: System::Windows::Forms::Button^ button1;

	public:

	public: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::Button^ managerButton;
	private:

	private:

	private:
	public:

	public:

	public:
	private:



	private:
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->managerButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SlateBlue;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(347, 323);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(300, 300);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Відвідувач";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::SlateBlue;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 13.8F, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Location = System::Drawing::Point(23, 323);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(300, 300);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Співак";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(-8, 287);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(996, 368);
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 20, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(343, 100);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(364, 47);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Система \"Концерт\"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 10, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(408, 174);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(218, 24);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Касянчук Б.Ю. КІ2-22-3";
			// 
			// managerButton
			// 
			this->managerButton->BackColor = System::Drawing::Color::SlateBlue;
			this->managerButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"managerButton.BackgroundImage")));
			this->managerButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->managerButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->managerButton->FlatAppearance->BorderSize = 0;
			this->managerButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->managerButton->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->managerButton->ForeColor = System::Drawing::Color::White;
			this->managerButton->Location = System::Drawing::Point(670, 323);
			this->managerButton->Name = L"managerButton";
			this->managerButton->Size = System::Drawing::Size(300, 300);
			this->managerButton->TabIndex = 16;
			this->managerButton->Text = L"Менеджер";
			this->managerButton->UseVisualStyleBackColor = false;
			this->managerButton->Click += gcnew System::EventHandler(this, &MyForm::managerButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(994, 653);
			this->Controls->Add(this->managerButton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Авторизація";
			this->TopMost = true;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void managerButton_Click(System::Object^ sender, System::EventArgs^ e) {
	ManagerPanel^ managerPanel = gcnew ManagerPanel();
	managerPanel->Show();
	this->Hide();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	visitorPanel^ visitorpanel = gcnew visitorPanel();
	visitorpanel->Show();
	this->Hide();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	singerPanel^ singerpanel = gcnew singerPanel();
	singerpanel->Show();
	this->Hide();
}
};
}
