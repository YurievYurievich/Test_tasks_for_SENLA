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

	// � ����������� ���������� �������� ���� ���������� �����
	// � ���������� ������������
	Bag(vector<Item> itms,int cap);
	~Bag();
	// ���������� ��������� ��������� ���� �����
	int get_cost();
private:
	// ������������
	int capacity;
	// ���� � �����
	vector<Item> items;
	// �������� ��������� �����
	int cost;
	
};

