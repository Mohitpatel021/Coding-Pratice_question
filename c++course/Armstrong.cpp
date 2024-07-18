#include <iostream>
using namespace std;

int main()
{
    int n, original_number, armstrong = 0, remainder;
    cout << "enter the number" << endl;
    cin >> n;
    original_number = n;
    while (n != 0)
    {
        remainder = n % 10;
        armstrong = armstrong + remainder * remainder * remainder;
        n = n / 10;
    }
  
    if (original_number == armstrong)
    {
        cout << "it is armstrong"  << endl;
    }
    else
    {
        cout << "this is not armstrong" << endl;
    }
    return 0;
}