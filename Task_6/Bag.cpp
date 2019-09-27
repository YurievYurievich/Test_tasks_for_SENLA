#include "Bag.h"
#include <algorithm>


Bag::Bag()
{
}

Bag::Bag(vector<Item> itms, int cap) :capacity(cap)
{
	// ������ ������ ����, � �� ����� �������
	// ��� ��������� �������� ��������� �����
	// ������������ � �����
	vector<int> sums;
	// ������ ������ ID(����� � ���������� �������) ���������, ��� ��������� 
	// �������� � �����. ������ ����������� ����� �������
	// ��� ����� ����������� ����� ���������� � �����
	// ������ ����������� ��� ID ����� �� ���� ����������
	vector<vector<int>> items_id;
	// sum-���������� � ������� ��������� ����� ����� �����������
	int sum=0;
	// temp_capacity-������������� �������� ��� �������� ��������� 
	// �������
	int temp_capacity=capacity;
	// ���� ���������� ���������� ���� ���������
	for (auto i=itms.begin(); i!=itms.end();i++)
	{
		// ������� ���������, ����� �� ���� ���������� � �����
		// ���� �����, �� ��������� ��������� ������������� 
		// � ������������� ������� �����������
		if ((temp_capacity - i->weight) >= 0)
		{
			sum += i->cost;
			temp_capacity -= i->weight;
			// �������� ������ ��� �������� id �����
			// �������������� � ����������
			// � ��� �� ���������� ����� �������� 
			// ��������� �� ������� ������ �������� i
			items_id.push_back(vector<int>());
			items_id[items_id.size() - 1].push_back(distance(itms.begin(), i));

			// J=i ��� ���������� ���������� ����������
			for (auto j = i; j != itms.end();j++)
			{
				// �������� ����������� �������� � ����������� i
				if ((temp_capacity - j->weight) >= 0)
				{
					sum += j->cost;
					temp_capacity -= j->weight;
					items_id[items_id.size() - 1].push_back(distance(itms.begin(), j));
				}
			}
		}
		// ����� ��������� ��������� ���������� 
		// ���������� � ����� ����� � ������������� ������ 
		// ������������ � �������� ���������
		sums.push_back(sum);
		temp_capacity = capacity;
		sum = 0;
	}
	// ����� ��������� ���� ���������� ������� ���������� �����
	auto max = max_element(sums.begin(), sums.end());
	// ������� � � ���� ������ Bag
	cost = *max;
	// � ����� �������� � ����� ���� �� ���������� ����������
	// ����� ���� ���� �������� ������������ ��������� ������� items_id
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
