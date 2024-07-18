#include<iostream>
using namespace std;
class multiple
{
    int data1;
    int data2;

public:
    multiple(int x,int y)
    {
        data1 = x;
        data2 = y;
    }
    

    void printnumber()
    {
        cout << "your number is:" << data1 << "+" << data2 << "i" << endl;
    }
};
int main(){
    //IMPLICIT CALL......
    multiple m1(4,5);
    m1.printnumber();
    //EPLICIT CALL......
    multiple b=multiple(4,5);
    b.printnumber();

    return 0;
}