#include "ExpressOrder.h"

ExpressOrder::ExpressOrder(Date date, Time_ time, int id, string courier, int daysToDeliver) :Order(date, time, id)
{
    this->courier = courier;
    this->daysToDeliver = daysToDeliver;
}

ExpressOrder::~ExpressOrder()
{
}

string ExpressOrder::getCourier()
{
    return this->courier;
}

int ExpressOrder::getDaysToDeliver()
{
    return this->daysToDeliver;
}

void ExpressOrder::setCourier(string courier)
{
    this->courier = courier;
}

void ExpressOrder::setDaysToDeliver(int daysToDeliver)
{
    this->daysToDeliver = daysToDeliver;
}

string ExpressOrder::type()const
{
    return "Express order";
}

void ExpressOrder::show()const
{
    cout << "Date of: " << this->date << "\n" << "Time of: " << this->time << std::endl;
    cout << "Courier : " << this->courier << "\n" << "DaysToDeliver : " << this->daysToDeliver << std::endl;
}

