#include <iostream>
using namespace std;

class A
{
public:
    int a;
    int b;
    void value()
    {

        cout << "Enter The Value of a :";
        cin >> a;

        cout << "Enter The Value of b :";
        cin >> b;
    }
    void print()
    {

        cout << "The value of a is :" << a << endl;
        cout << "The Value of b is :" << b << endl;
        cout << "The summation of a and b is :" << a + b << endl;
        cout << "The subtraction of a and b is :" << a - b << endl;
        cout << "The multiplication of a and b is :" << a * b << endl;
        cout << "The division of a and b is :" << a / b << endl;
        cout << "The modulo of a and b is :" << a % b << endl;
    }
};
int main()
{

    A calulator;
    calulator.value();
    calulator.print();
}