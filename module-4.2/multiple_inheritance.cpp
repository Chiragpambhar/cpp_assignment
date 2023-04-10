#include <iostream>
using namespace std;

class person
{
public:
    void name(string name)
    {
        cout << "The member name is :" << name << endl;
    }
    void age(int a)
    {
        cout << "The age of member is :" << a << endl;
    }
};
class student
{
public:
    void per(int b)
    {
        cout << "The student percentage is :%" << b << endl;
    }
};
class teacher:public person,public student
{
public:
    void salary(int c)
    {
        cout << "The teacher salary is :" << c << endl;
    }
};
int main(){
    teacher obj;
    obj.name("chirag");
    obj.age(23);
    obj.per(80);
    obj.salary(25000);

}