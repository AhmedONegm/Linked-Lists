
#include <iostream>
#include "vehicle.h"

using string = std::string;

struct ss { //by default struct members public unless I tell the opposite
	int x;
};

class Car { //by default class members private unless I tell the opposite
public:
	string brand;
	int manYear;
	int manMonth;
	int manDay;
private:
	void ChangeBrand(string b) {
		brand = b;
	}
};

int main()
{
	Car car;
	car.manYear;
	vehicle toyota;
	toyota.setX(5);
	toyota.printx();
	std::cout << toyota.getX();
}
