#pragma once  //______________________________________ Tree.h  
#include "Resource.h"
class Tree: public Win::Dialog
{
public:
	Tree()
	{
	}
	~Tree()
	{
	}
	void Line(int Pregunta);

protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Textbox tbxNumero;
	Win::Button btClick;
	Win::Label lb1;
	Win::Textbox tbx2;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(4.76250);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(6.13833);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Tree";
		tbxNumero.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 1.45521, 0.55563, 1.40229, 0.60854, hWnd, 1000);
		btClick.CreateX(NULL, L"Click", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 3.28083, 0.52917, 1.29646, 0.68792, hWnd, 1001);
		lb1.CreateX(NULL, L"Cunt", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.10583, 0.52917, 1.13771, 0.60854, hWnd, 1002);
		tbx2.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_MULTILINE | ES_LEFT | ES_WINNORMALCASE, 0.10583, 1.42875, 4.47146, 4.52438, hWnd, 1003);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		tbxNumero.Font = fontArial009A;
		btClick.Font = fontArial009A;
		lb1.Font = fontArial009A;
		tbx2.Font = fontArial009A;
	}
	//_________________________________________________
	void btClick_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btClick.IsEvent(e, BN_CLICKED)) {btClick_Click(e); return true;}
		return false;
	}
};
