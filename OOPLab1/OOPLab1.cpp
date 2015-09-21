// OOPLab1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "OOPLab1.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_CTYPE, "Rus");
	int  k = 0, q = 0;
	stek *head = (0);
	menu();
	cin >> q;
	for (;;)
	{
		switch (menu()){
		case 1:{vivod(head); break; }//+
		case 2:{cin >> k; push(k, head); break; }//-
		case 3:{cin >> k; pop(k,head); break; }//+
		case 4:{otbormax(head); break; }//+
		case 5:{otbormin(head); break; }//+
		case 6:{otborotr(head); break; }//+
		}
	}
		system("pause");
		return 0;
}

