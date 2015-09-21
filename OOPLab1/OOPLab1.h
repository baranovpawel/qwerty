using namespace std;
class stek
{
	int k;
	stek *next;
public:
	void push(int, stek* &head);
	int vivod(stek* &head);
	void otbormax(stek* &head);
	void otbormin(stek* &head);
	bool pop(int  d, stek* &head);
	bool otborotr(stek* &head);
};

int menu(void)
{   
	cout << "-------------------------------------------\n";
	cout << "1-вывод стека\n";
	cout << "2-добавление элемемнта\n";
	cout << "3-удаление элемента\n";
	cout << "4-максимальные элемент стека\n";
	cout << "5-минимальный элемент стека\n";
	cout << "6-наличие отрицательных элементов\n\n";
	int q = 0;
	cin >> q;
	return q; 
}

void stek::push(int d, stek* &head)
{ 
	stek *pw = new stek;
	pw->k = d;
	pw->next = head;
	head = pw;
}

int stek::vivod(stek* &head)
{
	cout << "ваш стек:";
	stek *of = head;
	if (of == NULL)
	{
		cout << стек пуст\n" << endl;
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

void stek::otbormax(stek* &head)
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


void stek::otbormin(stek* &head)
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


bool stek::pop(int  d, stek* &head)
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


bool stek::otborotr(stek* &head)
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
