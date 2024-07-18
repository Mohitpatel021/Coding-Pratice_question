#include <iostream>

using namespace std;
class a
{

public:
    int x;
    int operator+(int x)
    {
        cout << this->x;
        cout << "mohit" << endl;
        return x;
    }
};
int main()
{
    a obj;
    obj.x = 10;
    int b = 30;
    int c = obj + b;
    cout << c << endl;
    return 0;
}
