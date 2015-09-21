// OOPLab1.cpp: îïðåäåëÿåò òî÷êó âõîäà äëÿ êîíñîëüíîãî ïðèëîæåíèÿ.
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
	stek a1;
	cin >> q;
	for (;;)
	{
		switch (menu()){
		case 1:{a1.vivod(head); break; }//+
		case 2:{cin >> k; a1.push(k, head); break; }//-
		case 3:{cin >> k; a1.pop(k, head); break; }//+
		case 4:{a1.otbormax(head); break; }//+
		case 5:{a1.otbormin(head); break; }//+
		case 6:{a1.otborotr(head); break; }//+
		}
	}
		system("pause");
		return 0;
}

