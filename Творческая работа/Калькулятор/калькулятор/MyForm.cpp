#include "MyForm.h"
#include <string>
#include <cmath>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Калькулятор::MyForm form;
	Application::Run(% form);
}