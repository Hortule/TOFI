//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Dialogs.hpp>
//---------------------------------------------------------------------------
class TTOFI_main : public TForm
{
__published:	// IDE-managed Components
	TEdit *Path;
	TButton *pathfinder;
	TLabel *PathLable;
	TOpenDialog *OpenDialog1;
	TMemo *Memo1;
	void __fastcall pathfinderClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TTOFI_main(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TTOFI_main *TOFI_main;
//---------------------------------------------------------------------------
#endif
