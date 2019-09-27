#pragma once
#ifndef Item_H
#define Item_H
class Item
{
public:
	Item() :cost(0), weight(0) {  };
	~Item() {  };
	Item(int& cst, int& wght, int& id) :cost(cst), weight(wght),id(id) {  };
private:

	int cost;
	int weight;
	int id;
	friend class Bag;
};

#endif