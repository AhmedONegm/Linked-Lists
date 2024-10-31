#include"ComplexNumbers.h"
#include <iostream>

int complex::counter = 0;
// declaring parameterized constructor of three different options (real only, imaginary only or both) 
complex::complex(float real_num, double imaginary_num)
{
    real = real_num;
    imaginary = imaginary_num;
    counter++;
}
complex::complex(float real_num)
{
    counter++;
    real = real_num;
    imaginary = 0;
}
complex::complex(double imaginary_num)
{
    counter++;
    real = 0;
    imaginary = imaginary_num;
}
complex::complex(const complex& copy) {
    counter++;
    real = copy.real;
    imaginary = copy.imaginary;
}

complex::~complex() {
    counter--;
    std::cout << "this number is being destroyed  " << this->real << " + i " << this->imaginary << " \n";
}

void complex::printnum() {
    std::cout << "The number is: " << real << " + i " << imaginary << "\n";
}
void complex::setnum(){
    std::cout << "enter real part: ";
    std::cin >> real;
    std::cout << "enter imaginary part: ";
    std::cin >> imaginary;
}
double complex::getnum() {
    int choose;
    double num = 0.0;
    std::cout << "please choose what to get: \n 1-real part \n 2-imaginary part \n";
    std::cin >> choose;
    switch (choose) {
    case 1: {
        num = real;
        break;
    }
    case 2: {
        num = imaginary;
        break;
    }
    default:
        std::cout << "you didn't choose any option no thing will return (0)" << "\n";
    }
    return num;
}

void add(complex num1, complex num2) {
    std::cout << "The result is: " << (num1.real + num2.real) << " + i " << (num1.imaginary + num2.imaginary) << "\n";
}
void subtract(complex num1, complex num2) {
    std::cout << "The result is: " << (num1.real - num2.real) << " + i " << ((num1.imaginary - num2.imaginary)) << "\n";
}


