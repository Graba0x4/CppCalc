#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Project1::MyForm myForm;

	Application::Run(% myForm);

	return 0;
}


