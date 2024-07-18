#include <iostream>
#include <math.h>
//============Create a class with a simple and scientific calculator and create a derived class hybrid that inherited from those two class===========
using namespace std;
class simple
{
protected:
    int x1;
    int y1;

public:
    void set_data(int a, int b)
    {
        x1 = a;
        y1 = b;
    }

    void process()
    {
        cout << "Additon of two number is " << x1 + y1 << endl;
        cout << "Substration of two number is " << x1 - y1 << endl;
        cout << "Division of two number is " << x1 / y1 << endl;
        cout << "Multiplication of two number is " << x1 * y1 << endl;
    }
};
class scientific
{
protected:
    int x2;
    int y2;

public:
    void set_data(int a, int b)
    {
        x2 = a;
        y2 = b;
    }
    void process()
    {
        cout << "Scientific calculator" << endl;
        cout << endl;
        cout << "The value of cos(a) is " << cos(x2) << endl;
        cout << "The value of sin(a) is " << sin(y2) << endl;
        cout << "The value of exp(a) is " << exp(x2) << endl;
        cout << "The value of tan(a) is " << tan(y2) << endl;
    }
};
class hybrid : public simple, public scientific
{
public:
    void show(int a, int b)
    {
        scientific::set_data(a, b);
        simple::set_data(a, b);
        simple::process();
        scientific ::process();
    }
};

int main()
{
    hybrid h1;
    int p, q;
    cout << "enter two number " << endl;
    cin >> p >> q;
    h1.show(p, q);

    return 0;
}