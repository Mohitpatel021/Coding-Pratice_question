#include <iostream>
using namespace std;
class rectangle
{
    int length;
    int breath;

public:
    rectangle()
    {
        length = 0;
        breath = 0;
    }
    rectangle(int a, int b)
    {
        length = a;
        breath = b;
    }

    rectangle(int c)
    {
        length = c;
        breath = c;
    }
    int area()
    {
        return length * breath;
    }
};

int main()
{
    rectangle r1;
    cout << "area=" << r1.area() << endl;
    rectangle r2(2, 4);
    cout << "area=" << r2.area() << endl;
    rectangle r3(3);
    cout << "area=" << r3.area() << endl;

    return 0;
}