//---------------------------------------------------------------------------
#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <vcl\Classes.hpp>
#include <vcl\Controls.hpp>
#include <vcl\StdCtrls.hpp>
#include <vcl\Forms.hpp>
#include <vcl\ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TShape1 : public TShape
{
 public:
 int x,y;
 TShape *Border;
 void move()
 {
        if (Left>=Border->Width-Width || Left<=0)
           x=-x;
        if (Top>=Border->Height-Height || Top<=0)
           y=-y;
        Left+=x;
        Top+=y;
 }
 void move2(int left, int top, int width, int height)
 {
  bool inside;
  inside=(Left>=left && Left<=left+width) && (Top>=top && Top<=top+height);
  if (!inside) return;
  if (Left>=left && Left<=left+width)
           x=-x;
  if (Top>=top && Top<=top+height)
           y=-y;
 }
 __fastcall TShape1(TComponent* Owner, TShape *border);
};
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components

        TTimer *Timer1;
        TShape *Shape1;
        TShape *ShapeB;
        TEdit *Edit1;
        TButton *Button1;
        TScrollBar *ScrollBar1;
        TCheckBox *CheckBox1;
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall ScrollBar1Change(TObject *Sender);
private:	// User declarations

public:		// User declarations
        TShape1 *Shape2;
        TShape1 *Shape3;
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
