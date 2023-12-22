#pragma once

namespace KasianchukTask {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для singerPanel
	/// </summary>
	public ref class singerPanel : public System::Windows::Forms::Form
	{
	public:
		singerPanel(void)
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
		~singerPanel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabControl^ tabControl1;

	private: System::Windows::Forms::TabPage^ tabPage2;

	public: System::Windows::Forms::Button^ editSchedule;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;

	private: System::Windows::Forms::ListBox^ ListBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label2;

	public:
	private:


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(singerPanel::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->editSchedule = (gcnew System::Windows::Forms::Button());
			this->ListBox1 = (gcnew System::Windows::Forms::ListBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(292, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Співак";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tabControl1->Location = System::Drawing::Point(0, 151);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(682, 502);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::White;
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->dateTimePicker1);
			this->tabPage2->Controls->Add(this->ListBox1);
			this->tabPage2->Controls->Add(this->checkedListBox1);
			this->tabPage2->Controls->Add(this->editSchedule);
			this->tabPage2->Location = System::Drawing::Point(4, 27);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(674, 471);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Графік виступів";
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->checkedListBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->checkedListBox1->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 10, System::Drawing::FontStyle::Bold));
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(3, 3);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(668, 95);
			this->checkedListBox1->TabIndex = 2;
			// 
			// editSchedule
			// 
			this->editSchedule->Location = System::Drawing::Point(6, 161);
			this->editSchedule->Name = L"editSchedule";
			this->editSchedule->Size = System::Drawing::Size(200, 41);
			this->editSchedule->TabIndex = 1;
			this->editSchedule->Text = L"Вибрати концерти";
			this->editSchedule->UseVisualStyleBackColor = true;
			this->editSchedule->Click += gcnew System::EventHandler(this, &singerPanel::editSchedule_Click);
			// 
			// ListBox1
			// 
			this->ListBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ListBox1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->ListBox1->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 10, System::Drawing::FontStyle::Bold));
			this->ListBox1->FormattingEnabled = true;
			this->ListBox1->HorizontalScrollbar = true;
			this->ListBox1->ItemHeight = 24;
			this->ListBox1->Location = System::Drawing::Point(3, 252);
			this->ListBox1->Name = L"ListBox1";
			this->ListBox1->Size = System::Drawing::Size(668, 216);
			this->ListBox1->TabIndex = 3;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(10, 208);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(196, 24);
			this->dateTimePicker1->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::ForestGreen;
			this->label2->Location = System::Drawing::Point(223, 213);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 20);
			this->label2->TabIndex = 6;
			// 
			// singerPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(682, 653);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 8, System::Drawing::FontStyle::Bold));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"singerPanel";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"singerPanel";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &singerPanel::singerPanel_FormClosing);
			this->Load += gcnew System::EventHandler(this, &singerPanel::singerPanel_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void singerPanel_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void singerPanel_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	Application::Exit();
}
private: System::Void editSchedule_Click(System::Object^ sender, System::EventArgs^ e);
};
}
