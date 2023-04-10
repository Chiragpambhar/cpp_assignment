#include <iostream>
using namespace std;

int main()
{

    int a;
    int b;
    int max;

    cout << "Enter the value of a :";
    cin >> a;

    cout << "Enter the value of b :";
    cin >> b;

    if (a > b)
    {
        max = a;
    }
    else if (b > a)
    {
        max = b;
    }
    cout << "Maximum number is : " << max;
}
