#include <iostream>
#include"ComplexNumbers.h"

int main()
{
    complex n1 = { 1,2 };
    complex n2(6.0, 7.0);
    n2.printnum();
    n1.setnum();
    n1.printnum();
    std::cout << n1.getnum()<<"\n";
    printf("%d\n", complex::counter);
    int choice;
    std::cout << "welcome to complex numbers calculator, please choose: \n 1-add \n 2-subtract\n";
    std::cin >> choice;
    switch (choice) {
    case 1: {
        add(n1, n2);
        break;
    }
    case 2: {
        subtract(n2, n1);
        break;
    }
    default:
        std::cout << "this choice is invalid";
    }
}
