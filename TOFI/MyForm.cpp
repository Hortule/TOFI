#include "MyForm.h"

using namespace TOFI; //name of your project

[STAThread]//не знаю зачем в данном случае но без этого браузер файлов не работает

int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm());

	return 0;
}


