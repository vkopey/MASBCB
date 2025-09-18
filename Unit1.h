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
        void move()
        {
        if (Top>=200 || Top<=0)
           y=-y;
        if (Left>=300 || Left<=0)
           x=-x;
        Left+=x;
        Top+=y;
        }
        __fastcall TShape1(TComponent* Owner);
};
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components

        TTimer *Timer1;
        TShape *Shape1;
        void __fastcall Timer1Timer(TObject *Sender);
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
