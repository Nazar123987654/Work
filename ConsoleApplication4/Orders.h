#pragma once
#include<set>
#include"Order.h"
struct compare : binary_function<Order*, Order*, bool>
{
	bool operator()(const Order* left, const Order* right)const& {
		if (left->getDate() < right->getDate()) {
			return true;
		}
		else if (left->getDate() == right->getDate() && left->getTime() < right->getTime())
		{
			return true;
		}
		else {
			return false;
		}
	}
};
class Orders
{
private:
	set<Order*, compare>table;

public:
	Orders();
	~Orders();

	void addOrder(Order* a);
	void show();
	void showByType(string type);
};

