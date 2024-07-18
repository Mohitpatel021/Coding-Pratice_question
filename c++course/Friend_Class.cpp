#include <iostream>
using namespace std;
// forward declartion
class complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(complex, complex);
    int sumimagecomplex(complex,complex);
};

class complex
{
    int a, b;
    //for making individually friend...........
   //................................. friend int calculator ::sumrealcomplex(complex, complex);
    //................................friend int calculator ::sumimagecomplex(complex, complex);
    // for makin whole class friend.....................
friend class calculator;
public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printnumber()
    {
        cout << "your number " << a << " + " << b << "i" << endl;
    }
};
int calculator::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::sumimagecomplex(complex o3, complex o4)
{
    return (o3.b + o4.b);
}
int main()
{

    complex c1, c2;
    c1.setnumber(1, 5);
    c1.printnumber();

    c2.setnumber(5, 7);
    c2.printnumber();
    calculator cal;
    int result = cal.sumrealcomplex(c1, c2);
    cout << "The real part of o1 and o2 is:" << result << endl;
    int final=cal.sumimagecomplex(c1,c2);
    cout<<"the output of the image part in complex term:"<<final<<endl;

        return 0;
}