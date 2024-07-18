#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "enter the value of x" << endl;
    cin >> x;
    cout << "enter the value of y" << endl;
    cin >> y;
    if ((x > 0) && (y > 0))
    {
        cout << "The values are belong to the first quadrant" << endl;
    }
    else if ((x > 0) && (y < 0))
    {

        cout << "The values are belong to the second qudrant" << endl;
    }
    else if ((x < 0) && (y < 0))
    {
        cout << "the values are belong to the third quadrant" << endl;
    }
    else
    {
        cout << "The values are belong to the fourth qudrant"
             << endl;

        return 0;
    }

    return 0;
}