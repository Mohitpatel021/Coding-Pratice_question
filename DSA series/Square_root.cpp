#include <bits/stdc++.h>
using namespace std;
int square_root(long long int N)
{
    int start = 0;
    int end = N;
    int mid = start + (end - start) / 2;
    long long int ans = -1;
    while (start <= end)
    {
        if (mid * mid == N)
        {
            return mid;
        }
        if ((mid * mid) < N)
        {
            ans = mid;
            start = mid;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    long long int n;
    cout << "enter number " << endl;
    cin >> n;
    if (n == 0)
    {
        cout << 0 << endl;
    }
    else if (n == 1)
    {
        cout << 1 << endl;
    }
    else
    {

        long long int square = square_root(n);
        cout << square << endl;
    }
    return 0;
}