#include "OrdinaryOrder.h"

OrdinaryOrder::OrdinaryOrder(Date date, Time_ time,int id) :Order(date, time, id) {

}


OrdinaryOrder::~OrdinaryOrder()
{
}

string OrdinaryOrder::type()const
{
	return "Ordinary order";
}
void OrdinaryOrder::show() const
{
	cout << "Date of: " << this->date << "\n" << "Time of: " << this->time << std::endl;
}