#pragma once

class complex {
public:
    float real;
    double imaginary;
    static int counter;
    complex(float real_num, double imaginary_num);
    complex(float real_num); 
    complex(double imaginary_num);
    complex(const complex&copy);
    ~complex();
    void printnum();
    void setnum();
    double getnum();
};


void add(complex num1, complex num2);
void subtract(complex num1, complex num2);
