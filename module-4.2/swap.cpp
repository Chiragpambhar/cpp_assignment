#include <iostream>
using namespace std;

int main()
{
    int a = 15;
    int b = 20;

    cout << "The value of a is :" << a << endl;
    cout << "The value of b is :" << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "The value of a is :" << a << endl;
    cout << "The value of b is :" << b << endl;
}