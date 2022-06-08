#pragma once
#include"Order.h"
#include"Date.h"
#include"Time_.h"
#include<string>
using std::string;
class ExpressOrder :public Order
{
private:
	string courier;
	int daysToDeliver;
public:
	ExpressOrder(Date date, Time_ time,int id, string courier, int daysToDeliver);
	~ExpressOrder();

	string getCourier();
	int getDaysToDeliver();

	void setCourier(string courier);
	void setDaysToDeliver(int daysToDeliver);

	string type()const override;
	void show()const override;

};