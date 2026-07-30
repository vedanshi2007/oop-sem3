#include <iostream>
using namespace std;

class Circle
{
    double r;

public:
    Circle(double radius)
    {
        r = radius;
    }

    double area();   // Member function declaration
};

// Definition outside the class using scope resolution operator
double Circle::area()
{
    return 3.14 * r * r;
}

int main()
{
    Circle c(5);

    cout << "Area of Circle = " << c.area() << endl;

    return 0;
}
