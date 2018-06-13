#include "MyForm.h"



using namespace TOFI; //name of your project

[STAThread]//don't know for what this in this situation, but change of file don't work without it

int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm());

	return 0;
}


