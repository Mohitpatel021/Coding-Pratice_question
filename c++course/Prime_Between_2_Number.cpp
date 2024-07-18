#include <iostream>
using namespace std;
int main()
{
    int n, m, temp;
    bool is_prime = true;
    cout << "enter the two values:-" << endl;
    cin >> n >> m;
    if (n > m)
    {
        temp = n;
        n = m;
        m = temp;
    }
    cout << "These are the prime numbers between " << n <<  " and" << m << " are given as:-" << endl;
    while (n < m)
    {
        is_prime = true;
        if (n == 0 || n == 1)
        {
            is_prime = false;
        }
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                is_prime = false;
                break;
            }
        }

        if (is_prime)

            cout << n << ",";
        ++n;
    }
    return 0;
}