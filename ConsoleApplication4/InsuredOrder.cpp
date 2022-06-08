#include "InsuredOrder.h"

InsuredOrder::InsuredOrder(Date date, Time_ time,int id, string company, double amount) : Order(date, time, id) {
    this->company = company;
    this->amount = amount;
}


InsuredOrder::~InsuredOrder()
{
}

string InsuredOrder::getCompany()
{
    return this->company;
}

double InsuredOrder::getAmount()
{
    return this->amount;
}

void InsuredOrder::setCompany(string company)
{
    this->company = company;
}

void InsuredOrder::setAmount(double amount)
{
    this->amount = amount;
}


string InsuredOrder::type()const
{
    return "Insured order";
}

void InsuredOrder::show()const
{
    cout << "Date of: " << this->date << "\n" << "Time of: " << this->time << std::endl;
    cout << "Company : " << this->company << "\n" << "Amount : " << this->amount << std::endl;
}