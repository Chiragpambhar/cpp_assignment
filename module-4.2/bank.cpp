#include <iostream>
using namespace std;

class bank
{
public:
    int a;
    char b[20];
    char c[10];
    float d;

    void ac(int acnumber, char name[20], char actype[10], float bal)
    {
        a = acnumber;
        b[20] = name[20];
        c[10] = actype[10];
        d = bal;
    }
    void print()
    {
        cout << "Account number :" << a << endl;
        cout << "Account Name :" << b[20] << endl;
        cout << "Account Type :" << c[10] << endl;
        cout << "Account Balance :" << d << endl;
    }
};
int main()
{
    int a;
    char b[20];
    char c[10];
    float d;

    bank obj;
    cout << "Account Number :";
    cin >> a;
    cout << "Account Name :";
    cin >> b;
    cout << "Account Type :";
    cin >> c;
    cout << "Account Balance :";
    cin >> d;

    int x;
    cout << "Deposit Amount :";
    cin >> x;
    d += x;

    cout << "Total balance :" << d << endl;

    int y;
    cout << "Withdraw Amount :";
    cin >> y;
    d -= y;

    cout << "Account Name:" << b << endl;
    cout << "Account Balance :" << d << endl;
}