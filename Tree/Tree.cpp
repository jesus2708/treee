#include "stdafx.h"  //________________________________________ Tree.cpp
#include "Tree.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Tree app;
	return app.BeginDialog(IDI_Tree, hInstance);
}

void Tree::Window_Open(Win::Event& e)
{
}
void Tree::Line(int Pregunta)
{
	for (int j = 0; j < tbxNumero.IntValue; j++)
	{
		for (int i = 0; i <= j; i++) 
		{
			tbx2.Text += L"*";
		}
			
		tbx2.Text += L"\r\n";
		Pregunta++;
	}
}

void Tree::btClick_Click(Win::Event& e)
{
	int r = tbxNumero.IntValue;
	Line(r);
}

