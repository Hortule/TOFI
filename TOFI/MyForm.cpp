#include "MyForm.h"

using namespace TOFI; //name of your project

[STAThread]//�� ���� ����� � ������ ������ �� ��� ����� ������� ������ �� ��������

int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm());

	return 0;
}


