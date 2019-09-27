#include "Check_int.h"
#include "Input.h"
#include <iostream>
using namespace std;
int main()
{
	int x,y;
	int i = 1;
	// Создаём объект для проверки целых чисел
	Check_int check;
	cout << "This program find the least common multipleand"
			"greatest common factor of the two numbers entered.\n";
	do
	{
		cout << "First\n";
		// input-объект класса проверки ввода создаётся в cpp файле
		// при подключении зоголовочного файла его не надо создавать
		x = input.integer();
		cout << "Second\n";
		y = input.integer();
		cout << "Least common multipleand: " << check.l_c_m(x,y)<<endl;
		cout << "Greatest common factor: " << check.g_c_d(x, y)<<endl;
		cout << "\nDo you want to enter some more?(no-'0' yes-other numbers) \n";
		i = input.integer();
		cout << '\n';
	} while (!(i == 0));
	system("pause");
	return 0;
}
