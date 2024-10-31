#pragma once
class vehicle { //by default class members private unless I tell the opposite
public:
	int x;
	vehicle();
	~vehicle();
//private:
	void printx();
	void setX(int newX);
	int getX();
};