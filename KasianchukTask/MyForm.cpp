#include"MyForm.h"
#include "ManagerPanel.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(cli::array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	KasianchukTask::MyForm form;
	Application::Run(% form);
}