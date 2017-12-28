object Form1: TForm1
  Left = 195
  Top = 132
  Width = 410
  Height = 438
  Caption = #25171#22320#40736
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 296
    Top = 376
    Width = 32
    Height = 13
    Caption = 'Label1'
  end
  object Label2: TLabel
    Left = 336
    Top = 376
    Width = 32
    Height = 13
    Caption = 'Label2'
  end
  object Image1: TImage
    Left = 16
    Top = 16
    Width = 97
    Height = 97
    OnClick = Image1Click
  end
  object Image2: TImage
    Left = 120
    Top = 16
    Width = 97
    Height = 97
    OnClick = Image2Click
  end
  object Image3: TImage
    Left = 224
    Top = 16
    Width = 97
    Height = 97
    OnClick = Image3Click
  end
  object Image4: TImage
    Left = 16
    Top = 120
    Width = 97
    Height = 97
    OnClick = Image4Click
  end
  object Image5: TImage
    Left = 120
    Top = 120
    Width = 97
    Height = 97
    OnClick = Image5Click
  end
  object Image6: TImage
    Left = 224
    Top = 120
    Width = 97
    Height = 97
    OnClick = Image6Click
  end
  object Image7: TImage
    Left = 16
    Top = 224
    Width = 97
    Height = 97
    OnClick = Image7Click
  end
  object Image8: TImage
    Left = 120
    Top = 224
    Width = 97
    Height = 97
    OnClick = Image8Click
  end
  object Image9: TImage
    Left = 224
    Top = 224
    Width = 97
    Height = 97
    OnClick = Image9Click
  end
  object Label3: TLabel
    Left = 296
    Top = 360
    Width = 32
    Height = 13
    Caption = 'Label3'
  end
  object Label4: TLabel
    Left = 336
    Top = 360
    Width = 32
    Height = 13
    Caption = 'Label4'
  end
  object Label5: TLabel
    Left = 16
    Top = 344
    Width = 57
    Height = 13
    Caption = #36895#24230'(ms)'
  end
  object Edit1: TEdit
    Left = 72
    Top = 344
    Width = 65
    Height = 17
    TabOrder = 0
    Text = #38928#35373'1000'
  end
  object Button1: TButton
    Left = 144
    Top = 344
    Width = 41
    Height = 17
    Caption = #30906#23450
    TabOrder = 1
    OnClick = Button1Click
  end
  object Timer1: TTimer
    Interval = 100
    OnTimer = Timer1Timer
    Top = 368
  end
  object Timer2: TTimer
    OnTimer = Timer2Timer
    Left = 32
    Top = 368
  end
end
