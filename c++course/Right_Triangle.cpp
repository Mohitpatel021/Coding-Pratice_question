#include <iostream>
using namespace std;
int main()
{
    int hypotenus, perpendicular, base;
    cout << "Enter the value of hypotenus" << endl;
    cin >> hypotenus;
    cout << "Enter the value of perpedicular" << endl;
    cin >> perpendicular;
    cout << "Enter the value of base" << endl;
    cin >> base;
    if (hypotenus * hypotenus == perpendicular * perpendicular + base * base)
    {
        cout << "THis is a triangle" << endl;
    }
    else
    {
        cout << "this is not a triangle" << endl;
    }
    return 0;
}