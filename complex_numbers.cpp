#include "complex_numbers.h"

complex_numbers::complex_numbers(float r, float i) //complex_numbers(float r, float i)
{                                                         // :
    real = r;                                             // real()
    imaginary = i;                                        // imaginary(i)
}                                                         // {}

complex_numbers::complex_numbers(const complex_numbers& copy) {

}

#pragma region Operators
complex_numbers complex_numbers::operator+(complex_numbers& right)
{
    complex_numbers result(0, 0);
    result.real = real + right.real;
    result.imaginary = imaginary + right.imaginary;
    return result;
}

complex_numbers& complex_numbers::operator++() {
    real++;
    imaginary++;
    return *this;
}
complex_numbers complex_numbers::operator++(int) {
    complex_numbers temp=*this;
    real++;
    imaginary++;
    return temp;
}
complex_numbers complex_numbers::operator--(int) {
    complex_numbers temp = *this;
    real--;
    imaginary--;
    return temp;
}
complex_numbers& complex_numbers::operator--() {
    real--;
    imaginary--;
    return *this;
}

complex_numbers complex_numbers::operator-(complex_numbers& right)
{
    complex_numbers result(0, 0);
    result.real = real - right.real;
    result.imaginary = imaginary - right.imaginary;
    return result;
}

void complex_numbers::operator=(complex_numbers& right)
{
    complex_numbers result(0, 0);
    real = right.real;
    imaginary = right.imaginary;
}

bool complex_numbers::operator==(complex_numbers& right) {
    if (real == right.real && imaginary == right.imaginary)
        return true;
    else
        return false;
}

bool complex_numbers::operator!=(complex_numbers& right) {
    if (real == right.real && imaginary == right.imaginary)
        return false;
    else
        return true;
}
#pragma endregion

#pragma region Operator Overloading
complex_numbers::operator float() {
    return real + imaginary;
}
#pragma endregion