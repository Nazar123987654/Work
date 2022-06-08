#include <iostream>
#include"Orders.h"
#include"OrdinaryOrder.h"
#include"Order.h"
#include"Date.h"
#include"ExpressOrder.h"
#include"InsuredOrder.h"
#include<fstream>
int main()
{
	string str;
	string str2;
	int id;
	int days;
	Date date;
	Time_ time;
	int menu;
	double amount;


	Orders a;
	do {
		cout << "1- Add Ordinary order\n";
		cout << "2- Add Express order\n";
		cout << "3- Add Insured order\n";
		cout << "4- Show all list\n";
		cout << "5- Show by type\n";
		cout << "6- Input in file\n";
		cin >> menu;
		switch (menu) {
		case 1:
			cout << "Input Id: ";
			cin >> id;
			cout << "Input date: ";
			cin >> date;
			cout << "Input time: ";
			cin >> time;
			a.addOrder(new OrdinaryOrder(date, time, id));
			break;
		case 2:
			cout << "Input id: ";
			cin >> id;
			cout << "Input courier name: ";
			cin >> str;
			cout << "Input days to deliver: ";
			cin >> days;
			cout << "Input date: ";
			cin >> date;
			cout << "Input time: ";
			cin >> time;
			a.addOrder(new ExpressOrder(date, time, id, str, days));
			break;
		case 3:
			cout << "Input id: ";
			cin >> id;
			cout << "Input company: ";
			cin >> str;
			cout << "Input sum: ";
			cin >> amount;
			cout << "Input date: ";
			cin >> date;
			cout << "Input time: ";
			cin >> time;
			a.addOrder(new InsuredOrder(date, time, id, str, amount));
			break;
		case 4:
			a.show();
			break;
		case 5:
			cout << "Input type: " << endl;
			cin >> str;
			a.showByType(str);
			break;
		case 6:

		default:
			break;
		}
	} while (menu != 0);
}