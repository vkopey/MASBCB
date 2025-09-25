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
ShapeB->Left=0;
ShapeB->Top=0;

Shape2=new TShape1(this, ShapeB);
Shape2->Parent=this;
Shape2->Left=100;
Shape2->Top=100;
Shape2->Shape=stCircle;
Shape2->x=1;
Shape2->y=1;

Shape3=new TShape1(this, ShapeB);
Shape3->Parent=this;
Shape3->Left=70;
Shape3->Top=90;
Shape3->Shape=stCircle;
Shape3->x=2;
Shape3->y=1;
Shape3->Brush->Color=clRed;

//Shape2->Show();
//Shape3->Show();
}
__fastcall TShape1::TShape1(TComponent* Owner, TShape *border)
        : TShape(Owner)
{
Border=border;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
 //Shape1->Left+=1;
 //Shape2->Top+=1;
 if (CheckBox1->Checked)
    {
    Shape2->Visible=false;
    Canvas->LineTo(Shape2->Left+Shape2->Width/2, Shape2->Top+Shape2->Height/2);
    }
 else Shape2->Visible=true;
 Shape2->move2(Shape1->Left, Shape1->Top, Shape1->Width, Shape1->Height);
 Shape3->move2(Shape1->Left, Shape1->Top, Shape1->Width, Shape1->Height);
 Shape2->move();
 Shape3->move();
 }
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
 Timer1->Interval=StrToInt(Edit1->Text);
 Timer1->Enabled=!Timer1->Enabled;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ScrollBar1Change(TObject *Sender)
{
 Timer1->Interval=ScrollBar1->Position;
}
//---------------------------------------------------------------------------