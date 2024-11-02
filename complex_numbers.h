#pragma once
class complex_numbers
{
    float real;
    float imaginary;
public:
    complex_numbers(float r, float i);
    complex_numbers(const complex_numbers&copy); //copy constructor

#pragma region Operators
    complex_numbers operator+(complex_numbers& right);
    complex_numbers& operator++(); //pre
    complex_numbers operator++(int);//post
    complex_numbers operator--(int);//pre
    complex_numbers& operator--();//post
    complex_numbers operator-(complex_numbers& right);
    void operator=(complex_numbers& right);
    bool operator==(complex_numbers& right);
    bool operator!=(complex_numbers& right);
#pragma endregion

#pragma region Operator_Overloading
    operator float();
#pragma endregion

};

