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
	vector<int> sums;
	// Создаём массив ID(номер в переданном массиве) элементов, для помещения 
	// элемнтов в сумку. Первая размерность этого массива
	// это номер комбинациии вещей помещённых в сумку
	// вторая размерность это ID вещей из этой комбинации
	vector<vector<int>> items_id;
	// sum-переменная в которой храниться сумма одной комбианации
	int sum=0;
	// temp_capacity-промежуточное значение для хранения доступной 
	// ёмкости
	int temp_capacity=capacity;
	// Цикл переберает комбинации всех элементов
	for (auto i=itms.begin(); i!=itms.end();i++)
	{
		// условие проверяет, может ли вещь пометиться в сумку
		// если может, то суммарная стоимость увеличивается 
		// а промежуточная ёмеость уменьшается
		if ((temp_capacity - i->weight) >= 0)
		{
			sum += i->cost;
			temp_capacity -= i->weight;
			// Создаётся массив для храниния id вещей
			// присутствующих в комбинации
			// и тут же помещается номер элемента 
			// указатель на каторый хранит итератор i
			items_id.push_back(vector<int>());
			items_id[items_id.size() - 1].push_back(distance(itms.begin(), i));

			// J=i для исключения повторений комбинаций
			for (auto j = i; j != itms.end();j++)
			{
				// Проверка аналогичная проверки с иттератором i
				if ((temp_capacity - j->weight) >= 0)
				{
					sum += j->cost;
					temp_capacity -= j->weight;
					items_id[items_id.size() - 1].push_back(distance(itms.begin(), j));
				}
			}
		}
		// После получения очередной комбинации 
		// заноситься её общая сумма и промежуточные дынные 
		// возвращаюстя к исходным значениям
		sums.push_back(sum);
		temp_capacity = capacity;
		sum = 0;
	}
	// После получения всех комбинаций находим наибольшую сумму
	auto max = max_element(sums.begin(), sums.end());
	// Заносим её в член класса Bag
	cost = *max;
	// В цикле помещаем в сумку вещи из полученной комбинации
	// какие вещи надо положить определяется благодаря массиву items_id
	for (auto i = items_id[distance(sums.begin(), max)].begin(); i != items_id[distance(sums.begin(), max)].end();i++)
	{
		items.push_back(itms[*i-1]);
	}
}


Bag::~Bag()
{
}

int Bag::get_cost()
{
	return cost;
}
