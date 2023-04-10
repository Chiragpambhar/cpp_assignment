#include <iostream>
using namespace std;

template <class T>
T value(T a, T b)
{
    cout << "The value of a is:" << a << endl;
    cout << "The value of b is:" << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "Swap value of a is :" << a << endl;
    cout << "Swap value of b is :" << b << endl;
}
int main()
{

    value(10, 20);
}