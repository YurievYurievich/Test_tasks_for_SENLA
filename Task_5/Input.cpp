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
		// ¬торое условие необходимо если пользователь
		// после числа ввЄл не число(код-10 остаЄтс¤ в
		// буфере если пользователь нажал Enter в ос-
		// тальных случаех он будет отличен)
		if (!(good = cin.good()) && !(cin.get() == 10))
		{
			good = false;
			cout << "Fatal input error!" << endl;
		}
		cin.clear();                                       
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	} while (!good); 
	return x;
}

int Input::integer(int min, int max)
{
	bool good = true;
	int x;
	do
	{
		cout << "Enter: ";
		cin >> x;
		// ¬торое условие необходимо если пользователь
		// после числа ввЄл не число(код-10 остаЄтс¤ в
		// буфере если пользователь нажал Enter в ос-
		// тальных случаех он будет отличен)
		if (!(good = cin.good()) || !(cin.get() == 10) || (x<min) || (x>max))
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