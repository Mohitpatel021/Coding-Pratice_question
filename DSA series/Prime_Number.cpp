#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n;
    cout << "enter number" << endl;
    cin >> n;
    if (!isPrime(n))
    {
        cout << "Number is prime" << endl;
    }
    else
    {
        cout << "Number is not prime" << endl;
    }
    return 0;
}