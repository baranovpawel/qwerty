using namespace std;
struct stek
{
	int k;
	stek *next;
};

int menu(void)
{   
	cout << "-------------------------------------------\n";
	cout << "1-вывод стека\n";
	cout << "2-äîáàâëåíèå ýëåìåíòà\n";
	cout << "3-óäàëåíèå ýëåìåíòà\n";
	cout << "4-ìàêñèìàëüíûé ýëåìåíò ñòåêà\n";
	cout << "5-ìèíèìàëüíûé ýëåìåíò ñòåêà\n";
	cout << "6-ñòåê ñ îòðèöàòåëüíûìè ýëåìåíòàìè\n\n";
	int q = 0;
	cin >> q;
	return q; 
}

void push(int d, stek* &head)
{ 
	stek *pw = new stek;
	pw->k = d;
	pw->next = head;
	head = pw;
}

int vivod(stek* &head)
{
	cout << "âàø ñòåê:";
	stek *of = head;
	if (of == NULL)
	{
		cout << "ñòåê ïóñò\n" << endl;
		return 0;
	}
	else do
	{
	cout << of->k << "  ";
	of = of->next;
	} while (of);
	cout << '\n';
	return 0;
}

void otbormax(stek* &head)
{
	int max=0;
	stek *of = head;
	do
	{
		if (of->k > max)
		{
			max=of->k;
			of = of->next;
		}
		else of = of->next;
	} while (of);
	std::cout<<max<<'\n';
}

void otbormin(stek* &head)
{
	int min = 1000;
	stek *of = head;
	do
	{
		if (of->k < min)
		{
			min = of->k;
			of = of->next;
		}
		else of = of->next;
	} while (of);
	cout << min << '\n';
}


bool pop(int  d, stek* &head)
{
	if (head == NULL)
	{
		cout << "ñòåê ïóñò" << endl;
		return false;
	}
	stek *t = head;
	t->k = d;
	t->next = head;; 
	delete t;    
	return true;
}


bool otborotr(stek* &head)
{
	stek *of = head;
	do
	{
		if (of->k < 0)
		{
			cout << "ñòåê ñîäåðæèò îòðèöàòåëüíûå ýëåìåíòû\n";
			return false;
		}
		else of = of->next;
	} while (of);
	cout << "ñòåê íå ñîäåðæèò îòðèöàòåëüíûå ýëåìåíòû\n";
	return true;
}
