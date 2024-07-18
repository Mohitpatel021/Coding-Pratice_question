#include <iostream>
using namespace std;
/*
Case 1:
Class B: public A{
     Order of execution of constructor--->First A() then B()

     };

Case 2:
class a: public B, public C{
    Order of  execution of constructor----> B() then A()
}

Case 3:
Class A: public B,virtual public A{
    Order of execution of constructor -->C() then B() and A()
}
*/
class base1
{
    int data1;

public:
    base1(int x)
    {
        data1 = x;
        cout << "base1 comstructor callled " << endl;
    }
    void printnumber()
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int y)
    {
        data2 = y;
        cout << "Base2 constructor called " << endl;
    }
    void printnumber()
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};
class derived : public base1, public base2
{
    int data3, data4;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        data3 = c;
        data4 = d;
        cout << "Derived class constructor called " << endl;
        base1 :: printnumber();
        base2 :: printnumber();
    }

    void printnumber()
    {
       cout << "The value of data3 is " << data3 << endl;
     cout << "The value of data4 is " << data4 << endl;
    }
};
int main()
{
    derived der(5, 6, 7, 8);
    
der.printnumber();

    return 0;
}