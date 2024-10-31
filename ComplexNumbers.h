#pragma once

class complex {
public:
    float real;
    double imaginary;
    complex(float real_num, double imaginary_num);
    complex(float real_num); 
    complex(double imaginary_num);
    ~complex();
    void printnum();
    void setnum();
    double getnum();
};

/*public:
    // declaring parameterized constructor of three different types 
    complex(float real_num)
    {
        real = real_num;
        imaginary = 0;
    }
    complex(float imaginary_num)
    {
        real = 0;
        imaginary = imaginary_num;
    }
    complex(float real_num, float imaginary_num)
    {
        real = real_num;
        imaginary = imaginary_num;
    }*/

void add(complex num1, complex num2);
void subtract(complex num1, complex num2);
