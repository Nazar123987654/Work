#pragma once
#include"Order.h"
#include"Date.h"
#include"Time_.h"
class OrdinaryOrder :public Order
{
public:
	OrdinaryOrder(Date date, Time_ time,int id);
	~OrdinaryOrder();

	void show()const override;
	string type()const override;
};

