#include "Input.h"
using namespace std;


Input::Input()
{
}


Input::~Input()
{
}

 int Input::integer()
{
	bool good = true;
	int x;
	do
	{
		cout << "Enter: ";
		cin >> x;
		// ������ ������� ���������� ���� ������������
		// ����� ����� ��� �� �����(���-10 ������� �
		// ������ ���� ������������ ����� Enter � ��-
		// ������� ������� �� ����� �������)
		if (!(good = cin.good()) || !(cin.get() == 10))
		{
			good = false;
			cout << "Fatal input error!" << endl;
		}
		cin.unget();
		cin.clear();                                       
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	} while (!good); 
	return x;
}

Input input;