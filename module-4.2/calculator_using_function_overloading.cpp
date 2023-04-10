#include <iostream>
using namespace std;

class calculator
{
public:
    void cal(int a,int b,int c,int z)
    {
        cout << "The Addition of a and b is:" << a + b+c+z << endl;
    }

    void cal(int d, int e)
    {
        cout << "The Subtraction of c and d is:" << d - e << endl;
    }

    void cal(int f, int g, int h)
    {
        cout << "The Multiplication of e and f is:" << f * g * h << endl;
    }

    void cal(double x, float y)
    {
        cout << "The Division of x and y is:" << x / y << endl;
    }
};
int main()
{
    calculator operation;
    operation.cal(20, 10,15,25);
    operation.cal(30, 10);
    operation.cal(25, 5, 15);
    operation.cal(10.50, 5.25);
}