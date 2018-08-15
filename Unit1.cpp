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
	String pathf;
	OpenDialog1->Execute();
	pathf = OpenDialog1->FileName;
	Path->Text = pathf;
 /*	ifstream st1(pathf.c_str());
  //	for (int i = 0; i < 1000; i++) {
	ShowMessage(IntToStr(st1.get()))   ;
	ShowMessage(st1.get())   ;
  //	}                                                      */
  std::fstream fs(pathf.c_str(), std::ios::in | std::ios::binary);
	if (fs.is_open())
    {
		char rer;
		fs.read(&rer, sizeof(char));
		fs.close();
		ShowMessage(rer)     ;
	}


}
//---------------------------------------------------------------------------
