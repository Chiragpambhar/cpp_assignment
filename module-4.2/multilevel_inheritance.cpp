#include <iostream>
using namespace std;

class student
{
public:
    void number(int a)
    {
        cout << "The student roll number is :" << a << endl;
    }
};
class test : public student
{
public:
    void hindi(int b)
    {
        cout << "Hindi marks is :" << b << endl;
    }
    void english(int c)
    {
        cout << "English marks is :" << c << endl;
    }
};
class marks : public test
{
public:
    void total(int d)
    {
        cout << "Total marks is :" <<d<< endl;
    }
};
int main(){
    marks obj;
    obj.number(15);
    obj.hindi(85);
    obj.english(84);
    obj.total(85);
}