#include "Order.h"

Order::Order(Date date, Time_ time,int id)
{
    this->date = date;
    this->time = time;
    this->id = id;
}

Order::~Order()
{
}

void Order::setDate(Date date)
{
    this->date = date;
}

Date Order::getDate()const&
{
    return this->date;
}

void Order::setTime(Time_ time)
{
    this->time = time;
}

Time_ Order::getTime()const&
{
    return this->time;
}

void Order::setId(int id)
{
    this->id = id;
}

int Order::getId() const&
{
    return this->id;
}

bool Order::operator==(const Order& obj) const&
{
    return this->date == obj.date;
    return this->time == obj.time;
}

bool Order::operator!=(const Order& obj) const&
{
    return this->date != obj.date;
    return this->time != obj.time;
}

bool Order::operator<(const Order& obj) const&
{
    return this->date < obj.date;
    return this->time < obj.time;
}

bool Order::operator>(const Order& obj) const&
{
    return this->date > obj.date;
    return this->time > obj.time;
}
