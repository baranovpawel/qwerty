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
	cout << "1-����� �����\n";
	cout << "2-���������� ��������\n";
	cout << "3-�������� ��������\n";
	cout << "4-������������ ������� �����\n";
	cout << "5-����������� ������� �����\n";
	cout << "6-���� � �������������� ����������\n\n";
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
	cout << "��� ����:";
	stek *of = head;
	if (of == NULL)
	{
		cout << "���� ����\n" << endl;
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
		cout << "���� ����" << endl;
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
			cout << "���� �������� ������������� ��������\n";
			return false;
		}
		else of = of->next;
	} while (of);
	cout << "���� �� �������� ������������� ��������\n";
	return true;
}