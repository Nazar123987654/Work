#pragma once
#include<iostream>
using namespace std;
class OrderException
{
public:
	virtual void showMessage()const& = 0;
};
class DateException : public OrderException
{
public:
	virtual void showMessage()const& override {
		cout << "Your date too late\n";
	}
};
class AmountException : public OrderException
{
public:
	virtual void showMessage()const& override {
		cout << "Too low sum of money\n";
	}
};
class IdException : public OrderException
{
public:
	virtual void showMessage()const& override {
		cout << "Id is already exist\n";
	}
};

