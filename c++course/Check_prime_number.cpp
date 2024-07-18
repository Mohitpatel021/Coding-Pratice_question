#include <iostream>
using namespace std;

int main()
{
    int n;
    bool is_prime = true;
    cout << "Enter the number" << endl;
    cin >> n;
    // check number is prime
    if (n == 0 || n == 1)
    {
        is_prime = false;
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            is_prime = false;
        }
    }
    if (is_prime)
    {
        cout << n << ":This is prime number" << endl;
    }
    else
    {
        cout << n << ":This number is not prime" << endl;
    }
    return 0;
}