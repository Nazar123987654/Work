#include "Orders.h"
#include"OrderException.h"
Orders::Orders()
{
}

Orders::~Orders()
{
}

void Orders::addOrder(Order* a)
{
	table.insert(a);
}

void Orders::show()
{
	set<Order*, compare>::iterator it;
	for (it = table.begin();it != table.end();it++) {
		cout << "==========================" << endl;
		(*it)->show();
		cout << "==========================" << endl;
	}
}

void Orders::showByType(string type)
{
	set<Order*, compare>::iterator it;
	for (it = table.begin();it != table.end();it++) {
		if ((*it)->type() == type) {
			cout << "==========================" << endl;
			(*it)->show();
			cout << "==========================" << endl;
		}
	}
}
