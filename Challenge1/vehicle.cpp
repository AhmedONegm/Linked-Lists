#include <iostream>
#include "vehicle.h"

using string = std::string;



void vehicle::printx() { //ana kda gowa el class fa ba2dar access kol 7aga
	std::cout<<"X is: " << x << "\n";
}

void vehicle::setX(int newX) {
	x = newX;
}

int vehicle::getX() {
	return x;
}

vehicle::vehicle()
{
	return;
}

vehicle::~vehicle() {
	//free(x); 
	std::cout<<"vehicle is being destroyed"<<this->x<<"\n";
}