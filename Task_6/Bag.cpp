#include "Bag.h"
#include <algorithm>


Bag::Bag()
{
}

Bag::Bag(vector<Item> itms, int cap) :capacity(cap)
{
	// Массив всех масс и стоимостей
	vector<vector<int>> sums;
	// Заполняем первую строчку нулями
	sums.push_back(vector<int>(capacity+1,0));
	// Реализуем алгоритм динамического программирования
	// который находит не все комбинации вещей, а все комбинации масс
	// что позволяет решить задачу за полиномиальное время
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


