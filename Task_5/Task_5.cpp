#include <iostream>
#include "Input.h"
using namespace std;

//Фунция вывода всех полиндрормов при N не больше ста
void display_polindorms(int x)
{
		for (int i = 1; i < x+1; i++)
		{
			if (i<10||(i/10==i%10))
			cout << i << ' ';
		}

}

int main()
{
	cout << "This program finds all polindrome numbers in a sequence from 0 to N\n";
	cout << "Input N\n";
	// В класс проверки ввода был добавлен метод
	// кторый ограничивает ввод определённым диапазоном
	int n = input.integer(0, 100);
	cout << "Polindroms :";
	display_polindorms(n);
	cout << endl;
	system("pause");

}