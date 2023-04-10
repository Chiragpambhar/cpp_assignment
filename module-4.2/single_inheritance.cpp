#include <iostream>
using namespace std;

class cricketer
{
public:
    int totalrun;
    float avgrun;
    int bestper;
};
class bastman : public cricketer
{
public:
    void print()
    {
        cout << "bastman total run is : " << totalrun << endl;
        cout << "bastman average run is :" << avgrun << endl;
        cout << "bastman best performance is :" << bestper << endl;
    }
};
int main()
{

    bastman obj;
    obj.totalrun = 1320;
    obj.avgrun = 55.20;
    obj.bestper = 108;
    obj.print();
}
