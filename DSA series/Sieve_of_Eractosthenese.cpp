#include <bits/stdc++.h>
using namespace std;
// This Algorithm is used to count prime numbers between two given numbers

int countprime(int n)
{
    vector<bool> prime(n + 1, true);
    int count = 0;
    prime[0] = prime[1] = false;
    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            count++;
            for (int j = i * 2; j < n; j = j + i)
            {
                prime[j] = false;
            }
        }
    }
    return count;
}
int main()
{
    int num = 40;
    cout << countprime(num);
    return 0;
}