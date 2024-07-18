#include <iostream>
using namespace std;
class multiple
{
    int data1;
    int data2;

public:
    multiple()
    {
        data1 = 0;
        data2 = 0;
    }
    

    void printnumber()
    {
        cout << "your number is:" << data1 << "+" << data2 << "i" << endl;
    }
};

int main()
{
    multiple m;
    m.printnumber();
   

    return 0;
}