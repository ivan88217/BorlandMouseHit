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
        int chk = 0, //�a���Ҧb��m
        total = 0, //�p�����
        count = 0; //Ĳ�o����
        int tm = 0;  //�p��ɶ�
void __fastcall TForm1::FormCreate(TObject *Sender)
{
        DWord fstyle;
        //�����J�Ʀr
        // �ŧiEdit1��J�Ȭ��Ʀr
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
        Label1->Caption="����:";
        Label3->Caption="�ɶ�:";
        randomize();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
       count++;

       //���a������X�{
       if (count == 10) {           //���a������X�{
        //���]�Ϥ�
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
       
       else if (count == 12) {     //���a���X�{
       count = 0;

       int i;
       //���Ͷü�
       i=random(9);
       chk=i+1;
       //�üƲ��ͦa����m
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
        count=9;     //���Ϥ����] �]Timer�|���i��++�B�� �ҥH�]�m9
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
        //�p��ɶ�
         tm++;
         Label4->Caption=tm;
}
//---------------------------------------------------------------------------




void __fastcall TForm1::Button1Click(TObject *Sender)
{
        //���m����
        tm=0;
        total=0;
        //�]�w�t��
        Timer1->Interval=Edit1->Text / 10;
}
//---------------------------------------------------------------------------

