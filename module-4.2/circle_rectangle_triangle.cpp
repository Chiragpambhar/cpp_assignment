#include <iostream>
using namespace std;
class cal
{
public:
    int area = 10;
    int breadth = 20;
    float pi = 3.14;
    int rectangle = area * breadth;
    int triangle = (area * breadth) / 2;
    int circle = pi * area * area;
    void print()
    {
        cout << "The Value of Rectangle : " << rectangle << endl;
        cout << "The Value of Triangle :" << triangle << endl;
        cout << "The value of circle :" << circle << endl;
    }
};
int main()
{
    cal obj;
    obj.print();
}