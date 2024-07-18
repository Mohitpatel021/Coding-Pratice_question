#include <iostream>
using namespace std;
class A
{
    int s;

public:
    //A& setdata(int s)
    void setdata(int s)
    {
        this->s = s;
        //return *this;
    }
    void getdata()
    {
        cout << "the value of S is " << s << endl;
    }
};

int main()
{
    // This is a keyword which is a pointer which points to the object whhich invokes the member function
    A a;
    a.setdata(4);//.getdata();
    a.getdata();
    
    return 0;
}