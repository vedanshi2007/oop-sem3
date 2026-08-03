#include <iostream>
using namespace std;

class Arithmetic
{
public:
    
    inline int square(int x)
    {
        return x * x;
    }

   
    int multiply(int a, int b = 2)
    {
        return a * b;
    }


    int add(int a, int b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    double add(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    Arithmetic obj;

    int x, y, z;
    double p, q;

    cout << "Enter two integers: ";
    cin >> x >> y;

    cout << "Enter third integer: ";
    cin >> z;

    cout << "Enter two decimal numbers: ";
    cin >> p >> q;

    cout << "\nInline Function (Square): " << obj.square(x) << endl;

    cout << "Multiply using default argument: "
         << obj.multiply(x) << endl;

    cout << "Multiply using two arguments: "
         << obj.multiply(x, y) << endl;

    cout << "Addition of two integers: "
         << obj.add(x, y) << endl;

    cout << "Addition of three integers: "
         << obj.add(x, y, z) << endl;

    cout << "Addition of two decimal numbers: "
         << obj.add(p, q) << endl;

    return 0;
}