#pragma once

#include "registrationPanel.h"

namespace KasianchukTask {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для visitorPanel
	/// </summary>
	public ref class visitorPanel : public System::Windows::Forms::Form
	{
	public:
		visitorPanel()
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
		~visitorPanel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Label^ registrationLabel;


	public: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label1;
	public:







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(visitorPanel::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->registrationLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tabControl1->Location = System::Drawing::Point(0, 140);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(682, 513);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->richTextBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 27);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(674, 482);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Концерти";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 10, System::Drawing::FontStyle::Bold));
			this->richTextBox1->Location = System::Drawing::Point(3, 3);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(668, 476);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// registrationLabel
			// 
			this->registrationLabel->AutoSize = true;
			this->registrationLabel->BackColor = System::Drawing::Color::Transparent;
			this->registrationLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->registrationLabel->ForeColor = System::Drawing::Color::White;
			this->registrationLabel->Location = System::Drawing::Point(488, 19);
			this->registrationLabel->Name = L"registrationLabel";
			this->registrationLabel->Size = System::Drawing::Size(182, 20);
			this->registrationLabel->TabIndex = 1;
			this->registrationLabel->Text = L"Реєстрація на концерт";
			this->registrationLabel->Click += gcnew System::EventHandler(this, &visitorPanel::registrationLabel_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 14, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(287, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 33);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Відвідувач";
			// 
			// visitorPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(682, 653);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->registrationLabel);
			this->Controls->Add(this->tabControl1);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 8, System::Drawing::FontStyle::Bold));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"visitorPanel";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Відвідувач";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &visitorPanel::visitorPanel_FormClosing);
			this->Load += gcnew System::EventHandler(this, &visitorPanel::visitorPanel_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void visitorPanel_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		Application::Exit();
	}
private: System::Void registrationLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	registrationPanel^ reg = gcnew registrationPanel();
	reg->ShowDialog();
}
private: System::Void visitorPanel_Load(System::Object^ sender, System::EventArgs^ e);
};
}
