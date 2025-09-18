//---------------------------------------------------------------------------
#include <vcl\vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
Shape2=new TShape1(this);
Shape3=new TShape1(this);
Shape2->Parent=this;
Shape2->Left=100;
Shape2->Top=100;
Shape2->Shape=stCircle;
Shape2->x=1;
Shape2->y=1;
//Shape2->Show();
//Shape3->Show();
}
__fastcall TShape1::TShape1(TComponent* Owner)
        : TShape(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
 //Shape1->Left+=1;
 //Shape2->Top+=1;
 Shape2->move();
}
//---------------------------------------------------------------------------