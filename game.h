#pragma once
#include<vector>
#include<iostream>
using string = std::string;
class position {
public:
	float x_pos;
	float y_pos;
	position operator+(position& right);
	position();
	position(float x,float y);
};
class Character
{
protected:
	position pos;
	string name;
	void move(position post);
	Character(position p, string s);
};
class Life { //composition
	int Lives;
	bool _is_dead;
	void dying();
};
class Bomb { //aggregation (can bomb by itself or by the player not only the enemy)
public:
	int number;
	int effect;
};
class Player : public Character { //inheritence
	std::vector<Life> lives; //composition
	Player();
};
class Enemy : public Character{ //inheritence
	std::vector<Bomb>bombs;//aggregation
};
