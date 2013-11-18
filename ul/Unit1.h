//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "identify.h"
#include "preprocessor.h"

//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TLabel *Label1;
	TMemo *Memo1;
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	identify * ids;
  	preprocessor * p;

	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
