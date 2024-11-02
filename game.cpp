#include "game.h"

position::position() {}

position position::operator+(position& right) {
    position result;
    result.x_pos = this->x_pos + right.x_pos; //or = x_pos + right.x_pos;
    result.y_pos = this->x_pos + right.y_pos; //or = y_pos + right.y_pos;
    return result;
}

position::position(float x, float y):
    x_pos(x),
    y_pos(y)
{}

void Character::move(position post) {
    pos = pos + post;
}

Character::Character(position p, string s):
    pos(0,0),
    name("player1")
{}

void Life::dying(){
    if (Lives == 0)
        _is_dead = true;
}
