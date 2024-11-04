#include <iostream>
#include<vector>
#define shapes_size 4 
class GemoetricShape {
public:

    virtual float calculateArea() {
        return 0;
    }
};

class Circle : public GemoetricShape {
public:
    Circle(float r)
    {
        this->r = r;
    }
    float calculateArea()  override {
        return r * r * 3.14;
    }
    float r;
};

class Triangle : public GemoetricShape {
public:
    Triangle(float height, float base) {
        this->base=base;
        this->height = height;
    }
    float calculateArea() override {
        return 0.5 * base * height;
    }
    float base, height;
};

class Rectangle : public GemoetricShape {
public:
    Rectangle(float height, float width) {
        this->height = height;
        this->width = width;
    }
    float calculateArea() override {
        return height*width;
    }
    float height, width;
};

class Square : public GemoetricShape {
public:
    Square(float s)
    {
        this->s = s;
    }
    float calculateArea() override {
        return s * s;
    }
    float s;
};

float Area(GemoetricShape* ptr) {
     return ptr->calculateArea();
}

void startup();

int main()
{
    int choice;
    std::cout << "Welcome to Our program, please choose Area of: 1-Square \n 1-Square \n 2-Rectangle \n 3-Circle \n 4-Triangle\n 5-All\n";
    std::cin >> choice;
    Square s(2);
    Rectangle r(2, 2);
    Circle c(4);
    Triangle t(4, 6);
    switch (choice) {
    case 0:
        std::cout << "Area of square: " << Area(&s) << std::endl;
        break;
    case 1:
        std::cout << "Area of rectangle: " << Area(&r) << std::endl;
        break;
    case 3:
        std::cout << "Area of circle: " << Area(&c) << std::endl;
        break;
    case 4:
        std::cout << "Area of triangle: " << Area(&t) << std::endl;
        break;
    case 5:
        std::vector<GemoetricShape*> shapes;
        shapes.push_back(&s);
        shapes.push_back(&r);
        shapes.push_back(&c);
        shapes.push_back(&t);
        float areas[shapes_size], sum = 0;
        for (int i = 0; i < shapes_size; i++) {
            areas[i] = Area((shapes[i]));
            sum += Area(shapes[i]);
        }
        std::cout << "Total Area of All: " << sum << std::endl;
        break; 

    }
}