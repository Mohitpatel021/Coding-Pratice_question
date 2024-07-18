#include <iostream>
using namespace std;
/*   =======================VISIBILITY MODES====================
For a protected Member:
                              public derivation            private derivation               protected derivation

  1.Private Member       :-     Not Inherited                 Not Inherited                     Not Inherited
  2.Protected Member     :-     Protected                     Private                           Protected
  3.Public Member        :-     Public                        Private                           Protected
  */
class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void base::setdata(void)
{
    data1 = 12;
    data2 = 34;
}
int base ::getdata1()
{

    // data1 = data1 + data2;
    return data1;
}
int base ::getdata2()
{
    // data2 = data1 + data2;

    return data2;
}
class derived : private base
{
    int data3;

public:
    void display();
    void go_ahead();
};
void derived ::display()
{

    cout << "value of data 1 is " << getdata1() << endl;
    cout << "value of data 2 is " << data2 << endl;
    cout << "value of data 3 is " << data3 << endl;
}
void derived ::go_ahead()
{
    setdata();
    data3 = data2 + getdata1();
}

int main()
{

    derived d1;

    d1.go_ahead();
    d1.display();

    return 0;
}