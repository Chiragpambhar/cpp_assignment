#include <iostream>
using namespace std;

class A
{
public:

     int a[1];


    void value()
    {
        cout << "Enter a array value :";
        cin >> a[1];
    }

    void print()
    {
        cout << "The array value is:" << a[1];
    }

    A operator+(A bb)
    {
        A cc;
        cc.a[1] =a[1] + bb.a[1];
        return cc;
    }

};
int main()
{

    A aa;
    A bb;
    A cc;
    aa.value();
    bb.value();
    cc.a[1] = aa.a[1] + bb.a[1];
    cc.print();
    return 0;
}
