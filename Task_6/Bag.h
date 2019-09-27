#pragma once
#include<vector>
#include"Item.h"
#include <iterator>
#include <iostream>
using namespace std;

class Bag
{
public:
	Bag();

	// В конструторе происходит проверка всех комбинаций вещей
	// и выбирается наивыгоднаяя
	Bag(vector<Item> itms,int cap);
	~Bag();
	// Возвращает суммарную стоимость всех вещей
	int get_cost();
private:
	// Вмсестимость
	int capacity;
	// Вещи в сумке
	vector<Item> items;
	// Сумарная стоимость вещей
	int cost;
	
};

