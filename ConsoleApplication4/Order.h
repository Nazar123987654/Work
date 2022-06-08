#pragma once
#include<iostream>
#include<string>
#include"Date.h"
#include"Time_.h"
using namespace std;
class Order
{
protected:
	Date date;
	Time_ time;
	int id;
public:
	Order(Date date, Time_ time,int id);
	~Order();

	void setDate(Date date);
	Date getDate()const&;
	void setTime(Time_ time);
	Time_ getTime()const&;
	void setId(int id);
	int getId()const&;

	virtual void show()const = 0;
	virtual string type()const = 0;

	bool operator==(const Order& obj)const&;
	bool operator!=(const Order& obj)const&;
	bool operator<(const Order& obj)const&;
	bool operator>(const Order& obj)const&;
};



