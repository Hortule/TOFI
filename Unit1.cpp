//---------------------------------------------------------------------------

#include <vcl.h>
#include <fstream>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TTOFI_main *TOFI_main;
//---------------------------------------------------------------------------
__fastcall TTOFI_main::TTOFI_main(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TTOFI_main::pathfinderClick(TObject *Sender)
{
	String pathf;                                                  //open file
	OpenDialog1->Execute();
	pathf = OpenDialog1->FileName;
	Path->Text = pathf;
  std::fstream fs(pathf.c_str(), std::ios::in | std::ios::binary);
  char rer[100];
  UnicodeString b;


	if (fs.is_open())                                                   //taking hex of file
	{
		for (int i = 0; i < 100; i++)
			{
			fs.read(&rer[i], sizeof(char));
			b += IntToHex((unsigned int)((unsigned char)rer[i]))[7];
			b += IntToHex((unsigned int)((unsigned char)rer[i]))[8];
			b += ' ';
			}
		fs.close();

	}

	 Memo1->Lines->Strings[0] = b;

}
//---------------------------------------------------------------------------

