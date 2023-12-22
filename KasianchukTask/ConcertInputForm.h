#pragma once

namespace KasianchukTask {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ConcertInputForm
	/// </summary>
	public ref class ConcertInputForm : public System::Windows::Forms::Form
	{
	public:
		ConcertInputForm(System::String^ labelText)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			this->label5->Text = labelText;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ConcertInputForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	private: System::Windows::Forms::Button^ buttonAddConcert;
	private: System::Windows::Forms::TextBox^ textBoxTicketPrice;
	private: System::Windows::Forms::TextBox^ textBoxDate;
	private: System::Windows::Forms::TextBox^ textBoxLocation;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonAddConcert = (gcnew System::Windows::Forms::Button());
			this->textBoxTicketPrice = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDate = (gcnew System::Windows::Forms::TextBox());
			this->textBoxLocation = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 7, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::ForestGreen;
			this->label1->Location = System::Drawing::Point(32, 346);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 16);
			this->label1->TabIndex = 24;
			// 
			// buttonAddConcert
			// 
			this->buttonAddConcert->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 8, System::Drawing::FontStyle::Bold));
			this->buttonAddConcert->Location = System::Drawing::Point(35, 292);
			this->buttonAddConcert->Name = L"buttonAddConcert";
			this->buttonAddConcert->Size = System::Drawing::Size(205, 35);
			this->buttonAddConcert->TabIndex = 22;
			this->buttonAddConcert->Text = L"Записати концерт";
			this->buttonAddConcert->UseVisualStyleBackColor = true;
			this->buttonAddConcert->Click += gcnew System::EventHandler(this, &ConcertInputForm::buttonAddConcert_Click);
			// 
			// textBoxTicketPrice
			// 
			this->textBoxTicketPrice->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBoxTicketPrice->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxTicketPrice->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBoxTicketPrice->Location = System::Drawing::Point(35, 222);
			this->textBoxTicketPrice->Multiline = true;
			this->textBoxTicketPrice->Name = L"textBoxTicketPrice";
			this->textBoxTicketPrice->Size = System::Drawing::Size(205, 27);
			this->textBoxTicketPrice->TabIndex = 21;
			// 
			// textBoxDate
			// 
			this->textBoxDate->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBoxDate->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxDate->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBoxDate->Location = System::Drawing::Point(35, 160);
			this->textBoxDate->Multiline = true;
			this->textBoxDate->Name = L"textBoxDate";
			this->textBoxDate->Size = System::Drawing::Size(205, 27);
			this->textBoxDate->TabIndex = 20;
			// 
			// textBoxLocation
			// 
			this->textBoxLocation->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBoxLocation->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxLocation->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBoxLocation->Location = System::Drawing::Point(35, 96);
			this->textBoxLocation->Multiline = true;
			this->textBoxLocation->Name = L"textBoxLocation";
			this->textBoxLocation->Size = System::Drawing::Size(205, 27);
			this->textBoxLocation->TabIndex = 19;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 7, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->label2->Location = System::Drawing::Point(32, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 16);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Введіть локацію";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 7, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->label3->Location = System::Drawing::Point(32, 141);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 16);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Введіть дату";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 7, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->label4->Location = System::Drawing::Point(32, 203);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(131, 16);
			this->label4->TabIndex = 27;
			this->label4->Text = L"Введіть ціну квитка";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(30, 29);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 27);
			this->label5->TabIndex = 28;
			// 
			// ConcertInputForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(287, 419);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonAddConcert);
			this->Controls->Add(this->textBoxTicketPrice);
			this->Controls->Add(this->textBoxDate);
			this->Controls->Add(this->textBoxLocation);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"ConcertInputForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ввід концертів";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &ConcertInputForm::ConcertInputForm_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void buttonAddConcert_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ConcertInputForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	this->Close();
}
};
}
