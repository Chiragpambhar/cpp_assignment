#include <iostream>
using namespace std;


    inline int mul(int a, int b)
    {
        return (a * b);
    }
    inline int cubic(int x)
    {
        return (x*x*x);
    }
int main()
{

    cout << "The multiplication of a and b is :"<<mul(4,2)<<endl;
    cout<<"The cubic of x is : "<<cubic(3)<<endl;
}