#include <iostream>
using namespace std;

class A
{
public:
    A(int a, int b)
    {
        cout << "The summation of a and b is :" << a + b << endl;
        cout << "The subtraction of a and b is :" << a - b << endl;
        cout << "The multiplication of a and b is :" << a * b << endl;
        cout << "The division of a and b is :" << a / b << endl;
    }
};
int main()
{
    A(20, 10);
}