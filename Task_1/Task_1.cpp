#include <iostream>
#include "Input.h"
#include "Check_int.h"
using namespace std;

int main()
{

	int x;
	int i=1;
	// Создаём объект для проверки целых чисел
	Check_int check;
	cout << "This program determines whether an integer is simple or compound, and even or not even.\n";
	do
	{	
		// input-объект класса проверки ввода создаётся в cpp файле
		// при подключении зоголовочного файла его не надо создавать
		x = input.integer();
		if (check.is_even(x))
			cout << "Integer is even\n";
		else
			cout << "Integer is not even\n";
		if (check.is_simple(x))
			cout << "Integer is simple\n";
		else
			cout << "Integer is compound\n";
		cout << "\nDo you want to enter some more?(no-'0' yes-other numbers) \n";
		i = input.integer();
		cout << '\n';
	} while (!(i == 0));
	system("pause");
	return 0;

}