#include "Bag.h"
#include <algorithm>


Bag::Bag()
{
}

Bag::Bag(vector<Item> itms, int cap) :capacity(cap)
{
	// Создаём массив сумм, в нём будем хранить
	// все возможные сумарные стоимости вещей
	// помещающихся в сумку
	
	// Создаём массив ID(номер в переданном массиве) элементов, для помещения 
	// элемнтов в сумку. Первая размерность этого массива
	// это номер комбинациии вещей помещённых в сумку
	// вторая размерность это ID вещей из этой комбинации
	vector<vector<int>> sums;
	// sum-переменная в которой храниться сумма одной комбианации
	int sum=0;
	// temp_capacity-промежуточное значение для хранения доступной 
	// ёмкости
	int temp_capacity=capacity;
	// Цикл переберает комбинации всех элементов
	
	sums.push_back(vector<int>(capacity+1,0));
	for (int i =1 ; i<=itms.size();i++)
	{
		sums.push_back(vector<int>());
		for (int j = 0; j <= capacity; j++)
		{
			if ((j-itms[i-1].weight)<0)
			{
				sums[i].push_back(sums[i-1][j]);
			}
			else
			{
				if ((sums[i - 1][j]) > (itms[i-1].cost+sums[i - 1][j - itms[i - 1].weight]))
				{
					sums[i].push_back(sums[i - 1][j]);
				}
				else
				{
					sums[i].push_back(itms[i - 1].cost + sums[i - 1][j - itms[i - 1].weight]);
				}
			}
		}
	}
	auto max=max_element(sums[itms.size()].begin(), sums[itms.size()].end());
	cost = *max;
	weight = distance(sums[itms.size()].begin(), max);
	
}


Bag::~Bag()
{
}

int Bag::get_cost()
{
	return cost;
}

int Bag::get_weight()
{
	return weight;
}


