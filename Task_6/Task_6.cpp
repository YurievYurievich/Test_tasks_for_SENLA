#include <iostream>
#include "Input.h"
#include "Bag.h"
using namespace std;



int main()
{
	int i,j=0;
	// Создаём массив вещей
	vector<Item> items;
	cout << "This program allows you to fill a bag of things as profitably as possible.\n";
	cout << "Bag capasity\n";
	int c = input.integer();
	//В цикле заполняем этот массив
	do
	{
		j++;
		cout<<j << " item\nWeight\n";
		int w = input.integer();
		cout << "Cost\n";
		int c = input.integer();
		items.push_back(Item(c,w));
		cout << "\nDo you want to enter some more?(no-'0' yes-other numbers) \n";
		i = input.integer();
		cout << '\n';
	} while (!(i == 0));
	// Создаём объектов сумки передав в конструктор массив вещей
	// и вместимость сумки
	Bag bag(items, c);

	cout << "\nMax profit: " << bag.get_cost() << endl;


}