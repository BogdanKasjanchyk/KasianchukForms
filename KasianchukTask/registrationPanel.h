#pragma once

namespace KasianchukTask {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для registrationPanel
	/// </summary>
	public ref class registrationPanel : public System::Windows::Forms::Form
	{
	public:
		registrationPanel(void)
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
		~registrationPanel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label5;
	protected:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ registerVisitor;



	private: System::Windows::Forms::TextBox^ textBoxSurname;

	private: System::Windows::Forms::TextBox^ textBoxName;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->registerVisitor = (gcnew System::Windows::Forms::Button());
			this->textBoxSurname = (gcnew System::Windows::Forms::TextBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(38, 31);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(133, 27);
			this->label5->TabIndex = 37;
			this->label5->Text = L"Реєстрація";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 7, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->label4->Location = System::Drawing::Point(40, 205);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 16);
			this->label4->TabIndex = 36;
			this->label4->Text = L"Введіть стать";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 7, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->label3->Location = System::Drawing::Point(40, 141);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 16);
			this->label3->TabIndex = 35;
			this->label3->Text = L"Введіть прізвище";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 7, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->label2->Location = System::Drawing::Point(40, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 16);
			this->label2->TabIndex = 34;
			this->label2->Text = L"Введіть ім\'я";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 7, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::ForestGreen;
			this->label1->Location = System::Drawing::Point(40, 360);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 16);
			this->label1->TabIndex = 33;
			// 
			// registerVisitor
			// 
			this->registerVisitor->BackColor = System::Drawing::Color::White;
			this->registerVisitor->Cursor = System::Windows::Forms::Cursors::Hand;
			this->registerVisitor->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 8, System::Drawing::FontStyle::Bold));
			this->registerVisitor->Location = System::Drawing::Point(43, 371);
			this->registerVisitor->Name = L"registerVisitor";
			this->registerVisitor->Size = System::Drawing::Size(205, 35);
			this->registerVisitor->TabIndex = 32;
			this->registerVisitor->Text = L"Зареєструватись";
			this->registerVisitor->UseVisualStyleBackColor = false;
			this->registerVisitor->Click += gcnew System::EventHandler(this, &registrationPanel::registerVisitor_Click);
			// 
			// textBoxSurname
			// 
			this->textBoxSurname->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBoxSurname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxSurname->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 7, System::Drawing::FontStyle::Bold));
			this->textBoxSurname->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBoxSurname->Location = System::Drawing::Point(43, 160);
			this->textBoxSurname->Multiline = true;
			this->textBoxSurname->Name = L"textBoxSurname";
			this->textBoxSurname->Size = System::Drawing::Size(205, 27);
			this->textBoxSurname->TabIndex = 30;
			// 
			// textBoxName
			// 
			this->textBoxName->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBoxName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxName->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 7, System::Drawing::FontStyle::Bold));
			this->textBoxName->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBoxName->Location = System::Drawing::Point(43, 99);
			this->textBoxName->Multiline = true;
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(205, 27);
			this->textBoxName->TabIndex = 29;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 7, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->label6->Location = System::Drawing::Point(40, 279);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(79, 16);
			this->label6->TabIndex = 39;
			this->label6->Text = L"Вкажіть вік";
			this->label6->Click += gcnew System::EventHandler(this, &registrationPanel::label6_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numericUpDown1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 7, System::Drawing::FontStyle::Bold));
			this->numericUpDown1->Location = System::Drawing::Point(43, 310);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(48, 18);
			this->numericUpDown1->TabIndex = 40;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &registrationPanel::numericUpDown1_ValueChanged);
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 7, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->label7->Location = System::Drawing::Point(131, 270);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(121, 37);
			this->label7->TabIndex = 41;
			this->label7->Text = L"Виберіть, на який концерт підете";
			// 
			// comboBox1
			// 
			this->comboBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 7, System::Drawing::FontStyle::Bold));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Маскарад ляльок", L"Рок-фестиваль", L"Опера",
					L"Джазовий вечір", L"Симфонічний оркестр"
			});
			this->comboBox1->Location = System::Drawing::Point(127, 310);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 42;
			// 
			// comboBox2
			// 
			this->comboBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 7, System::Drawing::FontStyle::Bold));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Чоловік", L"Жінка" });
			this->comboBox2->Location = System::Drawing::Point(43, 233);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 24);
			this->comboBox2->TabIndex = 43;
			// 
			// registrationPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(287, 419);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->registerVisitor);
			this->Controls->Add(this->textBoxSurname);
			this->Controls->Add(this->textBoxName);
			this->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"registrationPanel";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Реєстрація";
			this->Load += gcnew System::EventHandler(this, &registrationPanel::registrationPanel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void registerVisitor_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void registrationPanel_Load(System::Object^ sender, System::EventArgs^ e);
};
}
