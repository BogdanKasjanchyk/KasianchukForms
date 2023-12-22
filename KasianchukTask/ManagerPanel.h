#pragma once

#include "ConcertInputForm.h"

namespace KasianchukTask {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ManagerPanel
	/// </summary>
	public ref class ManagerPanel : public System::Windows::Forms::Form
	{
	public:
	
		ManagerPanel()
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ManagerPanel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;


	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;








	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::TabPage^ tabPage2;
	public:
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::TabControl^ tabControl3;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Button^ button6;

	private: System::Windows::Forms::TabPage^ tabPage7;
	private: System::Windows::Forms::TabPage^ tabPage8;
	private: System::Windows::Forms::TabPage^ tabPage9;
	private: System::Windows::Forms::Button^ addVisitors;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;

























	public:

























	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ManagerPanel::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->addVisitors = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage8->SuspendLayout();
			this->tabPage9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tabControl3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 10, System::Drawing::FontStyle::Bold));
			this->tabControl1->Location = System::Drawing::Point(0, 149);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(682, 504);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 33);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(674, 467);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Концерти";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(34, 359);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(218, 24);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Симфонічний оркестр";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(34, 288);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(158, 24);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Джазовий вечір";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(34, 221);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 24);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Опера";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(34, 147);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(149, 24);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Рок-фестиваль";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(34, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(171, 24);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Маскарад ляльок";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(454, 352);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(186, 43);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Записати";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &ManagerPanel::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(454, 281);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(186, 43);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Записати";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &ManagerPanel::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(454, 214);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(186, 43);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Записати";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ManagerPanel::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(454, 140);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(186, 43);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Записати";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ManagerPanel::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(454, 67);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(186, 43);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Записати";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ManagerPanel::button1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->tabControl2);
			this->tabPage2->Location = System::Drawing::Point(4, 33);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(674, 467);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Відвідувачі";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage8);
			this->tabControl2->Controls->Add(this->tabPage9);
			this->tabControl2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tabControl2->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 9, System::Drawing::FontStyle::Bold));
			this->tabControl2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->tabControl2->Location = System::Drawing::Point(3, 0);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(668, 464);
			this->tabControl2->TabIndex = 0;
			// 
			// tabPage8
			// 
			this->tabPage8->BackColor = System::Drawing::SystemColors::ControlLight;
			this->tabPage8->Controls->Add(this->label10);
			this->tabPage8->Controls->Add(this->label7);
			this->tabPage8->Controls->Add(this->button8);
			this->tabPage8->Controls->Add(this->addVisitors);
			this->tabPage8->Controls->Add(this->listBox1);
			this->tabPage8->Location = System::Drawing::Point(4, 30);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Size = System::Drawing::Size(660, 430);
			this->tabPage8->TabIndex = 0;
			this->tabPage8->Text = L"Всі відвідувачі";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 6, System::Drawing::FontStyle::Bold));
			this->label10->Location = System::Drawing::Point(530, 87);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(58, 14);
			this->label10->TabIndex = 7;
			this->label10->Text = L"Очистити";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::White;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label7->Font = (gcnew System::Drawing::Font(L"Montserrat", 10.2F, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::Firebrick;
			this->label7->Location = System::Drawing::Point(177, 270);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(281, 24);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Відвідувачів не завантажено";
			// 
			// button8
			// 
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button8->Location = System::Drawing::Point(529, 25);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(59, 59);
			this->button8->TabIndex = 3;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &ManagerPanel::button8_Click);
			// 
			// addVisitors
			// 
			this->addVisitors->Location = System::Drawing::Point(56, 25);
			this->addVisitors->Name = L"addVisitors";
			this->addVisitors->Size = System::Drawing::Size(453, 59);
			this->addVisitors->TabIndex = 0;
			this->addVisitors->Text = L"Показати всіх відвідувачів";
			this->addVisitors->UseVisualStyleBackColor = true;
			this->addVisitors->Click += gcnew System::EventHandler(this, &ManagerPanel::addVisitors_Click);
			// 
			// listBox1
			// 
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 10, System::Drawing::FontStyle::Bold));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 24;
			this->listBox1->Location = System::Drawing::Point(0, 118);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(660, 312);
			this->listBox1->TabIndex = 1;
			// 
			// tabPage9
			// 
			this->tabPage9->BackColor = System::Drawing::SystemColors::ControlLight;
			this->tabPage9->Controls->Add(this->label12);
			this->tabPage9->Controls->Add(this->label9);
			this->tabPage9->Controls->Add(this->label8);
			this->tabPage9->Controls->Add(this->button9);
			this->tabPage9->Controls->Add(this->checkedListBox1);
			this->tabPage9->Controls->Add(this->button7);
			this->tabPage9->Controls->Add(this->pictureBox2);
			this->tabPage9->Controls->Add(this->textBox1);
			this->tabPage9->Controls->Add(this->label11);
			this->tabPage9->Location = System::Drawing::Point(4, 30);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Size = System::Drawing::Size(660, 430);
			this->tabPage9->TabIndex = 1;
			this->tabPage9->Text = L"ID";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::White;
			this->label12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label12->Font = (gcnew System::Drawing::Font(L"Montserrat", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Firebrick;
			this->label12->Location = System::Drawing::Point(177, 270);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(281, 24);
			this->label12->TabIndex = 8;
			this->label12->Text = L"Відвідувачів не завантажено";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 6, System::Drawing::FontStyle::Bold));
			this->label9->Location = System::Drawing::Point(457, 83);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(58, 14);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Очистити";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 6, System::Drawing::FontStyle::Bold));
			this->label8->Location = System::Drawing::Point(527, 83);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(60, 14);
			this->label8->TabIndex = 5;
			this->label8->Text = L"Видалити";
			// 
			// button9
			// 
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button9->Location = System::Drawing::Point(459, 25);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(59, 59);
			this->button9->TabIndex = 4;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &ManagerPanel::button9_Click);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->checkedListBox1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->HorizontalScrollbar = true;
			this->checkedListBox1->Location = System::Drawing::Point(0, 115);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(660, 315);
			this->checkedListBox1->TabIndex = 3;
			// 
			// button7
			// 
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button7->Location = System::Drawing::Point(529, 25);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(59, 59);
			this->button7->TabIndex = 2;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &ManagerPanel::button7_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Location = System::Drawing::Point(384, 25);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(59, 59);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &ManagerPanel::pictureBox2_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 20, System::Drawing::FontStyle::Bold));
			this->textBox1->Location = System::Drawing::Point(56, 25);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(332, 59);
			this->textBox1->TabIndex = 0;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 6, System::Drawing::FontStyle::Bold));
			this->label11->Location = System::Drawing::Point(53, 83);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(126, 14);
			this->label11->TabIndex = 7;
			this->label11->Text = L"Введіть ID відвідувача";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 14, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(268, 73);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(153, 33);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Менеджер";
			// 
			// tabPage5
			// 
			this->tabPage5->Location = System::Drawing::Point(4, 27);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(660, 436);
			this->tabPage5->TabIndex = 1;
			this->tabPage5->Text = L"ID";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// tabControl3
			// 
			this->tabControl3->Controls->Add(this->tabPage6);
			this->tabControl3->Controls->Add(this->tabPage7);
			this->tabControl3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tabControl3->Location = System::Drawing::Point(3, 0);
			this->tabControl3->Name = L"tabControl3";
			this->tabControl3->SelectedIndex = 0;
			this->tabControl3->Size = System::Drawing::Size(654, 433);
			this->tabControl3->TabIndex = 1;
			// 
			// tabPage6
			// 
			this->tabPage6->BackColor = System::Drawing::Color::White;
			this->tabPage6->Location = System::Drawing::Point(4, 25);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(646, 404);
			this->tabPage6->TabIndex = 0;
			this->tabPage6->Text = L"Шукати";
			// 
			// tabPage7
			// 
			this->tabPage7->Location = System::Drawing::Point(4, 25);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(646, 404);
			this->tabPage7->TabIndex = 1;
			this->tabPage7->Text = L"Видалити";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 27);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(660, 436);
			this->tabPage4->TabIndex = 0;
			this->tabPage4->Text = L"Всі відвідувачі";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(402, 10);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(252, 45);
			this->button6->TabIndex = 0;
			this->button6->Text = L"Показати всіх відвідувачів";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &ManagerPanel::addVisitors_Click);
			// 
			// ManagerPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(682, 653);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"ManagerPanel";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ManagerPanel";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &ManagerPanel::ManagerPanel_FormClosing);
			this->Load += gcnew System::EventHandler(this, &ManagerPanel::ManagerPanel_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage8->ResumeLayout(false);
			this->tabPage8->PerformLayout();
			this->tabPage9->ResumeLayout(false);
			this->tabPage9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tabControl3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion


private: System::Void ManagerPanel_Load(System::Object^ sender, System::EventArgs^ e);

private: System::Void ManagerPanel_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	Application::Exit();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void addVisitors_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox1->Items->Clear();
	if (listBox1->Items->Count == 0)
	{
		label7->Show();
	}
	else {
		label7->Hide();
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	checkedListBox1->Items->Clear();
	label12->Show();
}
};
}
