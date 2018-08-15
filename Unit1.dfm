object TOFI_main: TTOFI_main
  Left = 0
  Top = 0
  Caption = 'TOFI'
  ClientHeight = 299
  ClientWidth = 635
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object PathLable: TLabel
    Left = 8
    Top = 29
    Width = 26
    Height = 13
    Caption = 'Path:'
  end
  object Path: TEdit
    Left = 8
    Top = 48
    Width = 417
    Height = 21
    TabOrder = 0
  end
  object pathfinder: TButton
    Left = 424
    Top = 46
    Width = 75
    Height = 25
    Caption = 'Select'
    TabOrder = 1
    OnClick = pathfinderClick
  end
  object Memo1: TMemo
    Left = 8
    Top = 75
    Width = 201
    Height = 158
    Lines.Strings = (
      '')
    TabOrder = 2
  end
  object OpenDialog1: TOpenDialog
    Left = 576
    Top = 8
  end
end
