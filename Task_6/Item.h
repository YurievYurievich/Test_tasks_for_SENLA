#pragma once

class Item
{
public:
	Item():cost(0),weight(0) {};
	~Item() {};
	Item(int& cst, int& wght) :cost(cst), weight(wght){};
private:
	int cost;
	int weight;
	friend class Bag;
};

