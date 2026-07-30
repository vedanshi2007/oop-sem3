#include <iostream>
using namespace std;

// Base case
template <typename T>
T sum(T value)
{
    return value;
}

// Variadic template
template <typename T, typename... Args>
auto sum(T first, Args... args)
{
    return first + sum(args...);
}

int main()
{
    cout << sum(10, 20, 30, 40) << endl;

    return 0;
}