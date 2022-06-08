#pragma once
#include"Order.h"
#include"Date.h"
#include"Time_.h"
#include<string>
using std::string;
class InsuredOrder :public Order
{
private:
	string company;
	double amount;
public:
	InsuredOrder(Date date, Time_ time,int id, string company, double amount);
	~InsuredOrder();

	string getCompany();
	double getAmount();

	void setCompany(string company);
	void setAmount(double amount);

	string type()const override;
	void show()const override;

};