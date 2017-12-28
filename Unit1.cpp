//---------------------------------------------------------------------------

#include <vcl.h>
#include <jpeg.hpp>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
        int chk = 0, //地鼠所在位置
        total = 0, //計算分數
        count = 0; //觸發次數
        int tm = 0;  //計算時間
void __fastcall TForm1::FormCreate(TObject *Sender)
{
        DWord fstyle;
        //限制輸入數字
        // 宣告Edit1輸入僅為數字
        fstyle = GetWindowLong(Edit1->Handle, GWL_STYLE);

        // fstyle or ES_NUMBER
        SetWindowLong(Edit1->Handle, GWL_STYLE, fstyle | ES_NUMBER | ES_RIGHT);

        Image1->Picture->LoadFromFile("mousehide.jpg");
        Image2->Picture->LoadFromFile("mousehide.jpg");
        Image3->Picture->LoadFromFile("mousehide.jpg");
        Image4->Picture->LoadFromFile("mousehide.jpg");
        Image5->Picture->LoadFromFile("mousehide.jpg");
        Image6->Picture->LoadFromFile("mousehide.jpg");
        Image7->Picture->LoadFromFile("mousehide.jpg");
        Image8->Picture->LoadFromFile("mousehide.jpg");
        Image9->Picture->LoadFromFile("mousehide.jpg");
        Label2->Caption=total;
        Label1->Caption="分數:";
        Label3->Caption="時間:";
        randomize();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
       count++;

       //讓地鼠延遲出現
       if (count == 10) {           //讓地鼠延遲出現
        //重設圖片
        Image1->Picture->LoadFromFile("mousehide.jpg");
        Image2->Picture->LoadFromFile("mousehide.jpg");
        Image3->Picture->LoadFromFile("mousehide.jpg");
        Image4->Picture->LoadFromFile("mousehide.jpg");
        Image5->Picture->LoadFromFile("mousehide.jpg");
        Image6->Picture->LoadFromFile("mousehide.jpg");
        Image7->Picture->LoadFromFile("mousehide.jpg");
        Image8->Picture->LoadFromFile("mousehide.jpg");
        Image9->Picture->LoadFromFile("mousehide.jpg");
       }
       
       else if (count == 12) {     //讓地鼠出現
       count = 0;

       int i;
       //產生亂數
       i=random(9);
       chk=i+1;
       //亂數產生地鼠位置
       if(i==0) Image1->Picture->LoadFromFile("mouse.jpg");
       else if(i==1) Image2->Picture->LoadFromFile("mouse.jpg");
       else if(i==2) Image3->Picture->LoadFromFile("mouse.jpg");
       else if(i==3) Image4->Picture->LoadFromFile("mouse.jpg");
       else if(i==4) Image5->Picture->LoadFromFile("mouse.jpg");
       else if(i==5) Image6->Picture->LoadFromFile("mouse.jpg");
       else if(i==6) Image7->Picture->LoadFromFile("mouse.jpg");
       else if(i==7) Image8->Picture->LoadFromFile("mouse.jpg");
       else if(i==8) Image9->Picture->LoadFromFile("mouse.jpg");
       }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image1Click(TObject *Sender)
{
        if(chk==1) {
        count=9;     //讓圖片重設 因Timer會先進行++運算 所以設置9
        total++;
        Label2->Caption=total;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image2Click(TObject *Sender)
{
        if(chk==2) {
        count=9;
        total++;
        Label2->Caption=total;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image3Click(TObject *Sender)
{
        if(chk==3) {
        count=9;
        total++;
        Label2->Caption=total;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image4Click(TObject *Sender)
{
        if(chk==4) {
        count=9;
        total++;
        Label2->Caption=total;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image5Click(TObject *Sender)
{
        if(chk==5) {
        count=9;
        total++;
        Label2->Caption=total;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image6Click(TObject *Sender)
{
        if(chk==6) {
        count=9;
        total++;
        Label2->Caption=total;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image7Click(TObject *Sender)
{
       if(chk==7) {
        count=9;
        total++;
        Label2->Caption=total;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image8Click(TObject *Sender)
{
        if(chk==8) {
        count=9;
        total++;
        Label2->Caption=total;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image9Click(TObject *Sender)
{
        if(chk==9) {
        count=9;
        total++;
        Label2->Caption=total;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
        //計算時間
         tm++;
         Label4->Caption=tm;
}
//---------------------------------------------------------------------------




void __fastcall TForm1::Button1Click(TObject *Sender)
{
        //重置紀錄
        tm=0;
        total=0;
        //設定速度
        Timer1->Interval=Edit1->Text / 10;
}
//---------------------------------------------------------------------------


