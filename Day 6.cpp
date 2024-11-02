#include "complex_numbers.h"
#include"game.h"

class vector3 {
public:
    vector3(){} //default constructor
    vector3(float xVal, float yVal, float zVal):
        x(xVal),
        y(yVal),
        z(zVal)
    {}
    vector3(const vector3& original) { //copy constructor (reference)
        x = original.x;
        y = original.y;
        z = original.z;
    }
#pragma region operators
    vector3 operator+(vector3& right) {
        vector3 result;
        result.x = this->x + right.x;//result.x = x + right.x;
        result.y = y + right.y;      //result.y = this->y + right.y;
        result.z = z + right.z;
        std::cout<<"Plus Operator" << std::endl;
        return result;
    }
    bool operator==(vector3& right) {
        if (x == right.x && y == right.y && z == right.z)
            return true;
        else
            return false;
    }
    bool operator!=(vector3& right) {
        if (x == right.x && y == right.y && z == right.z)
            return false;
        else
            return true;
    }
#pragma endregion
    operator float() { //implicit cast (operator overloading)
        return x + y + z;
    }
private:
    float x, y, z;
};
/*class Creature {
protected: //can only be accessed by Creature and its children (Doctor and Person)
    int x;
    void Breath(){}
};
class Doctor:public Creature {
    void Examine(Person* patient) {
        return;
    }
};
class Organ{};
class Medicine {};
class Cloth{};
class Person:public Creature {
    Doctor* doctor; //association
    std::vector<Organ>organs; //composition
    std::vector<Medicine>meds;//aggregation
    std::vector<Cloth>clothes;
public:

    Person() = default;
};*/
int main()
{
    /*vector3 tempVec = vector3(1, 2, 3);
    vector3 tempVec2 = vector3(5, 6, 7);
    vector3 result = tempVec + tempVec2;
    std::cout << static_cast<float>(tempVec) << "/n"; //explicit cast = (float)tempVec*/
    float res;
    complex_numbers c1(3, 4), c2(7, 8);
    std::cout << (c1 + c2)<< std::endl;
    if(c1!=c2)
        std::cout << "Not Equal"<<"\n";
    c1 = c2;
    if (c1 == c2)
        std::cout << "Equal" <<"\n";    
}