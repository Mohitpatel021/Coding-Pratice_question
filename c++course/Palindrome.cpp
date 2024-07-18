#include <iostream>
using namespace std;
int main()
{
    int n, temp, reverse_number = 0, remainder;
    cout << "enter the number" << endl;
    cin >> n;
    temp = n;
    while (n != 0)
    {

        remainder = n % 10;
        reverse_number = reverse_number * 10 + remainder;
        n = n / 10;
    }
    if (temp == reverse_number)
    {
        cout << "it is palindrome" << endl;
    }
    else
    {
        cout << "it is not palindrome" << endl;
    }
    return 0;
}