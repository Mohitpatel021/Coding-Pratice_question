#include <iostream>
using namespace std;
/*
Syntax for inheriting in multiple inheritance
Class Derived : Visibility_Mode Base Class1, Visibility_Mode Base Class2
{
Class body of the class "Derived Class"
}
*/
class base1
{
protected:
    int base1int;

public:
    void set_data1(int a)
    {
       base1int=a ;
    }
};
class base2
{
protected:
    int base2int;

public:
    void set_data2(int a)
    {
        base2int=a;
    }
};
class Derived : public base1, public base2
{
public:
    void show()
    {
        cout << "The value of base 1 is " << base1int << endl;
        cout << "The value of base 2 is " << base2int << endl;
        cout << "The sum of these values is " << base1int + base2int << endl;
    }
};

int main()
{
    Derived d1;
    d1.set_data1(25);
    d1.set_data2(5);
    d1.show();
    return 0;
}