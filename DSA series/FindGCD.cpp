#include <bits/stdc++.h>
using namespace std;
int findGcd(int n, int m)
{
    if (n == 0)
    {
        return m;
    }
    if (m == 0)
    {
        return n;
    }
    if (n > m)
    {
        n = n - m;
    }
    else
    {
        m = m - n;
    }

    return n;
}
int main()
{
    int a, b;
    cout << "enter two number" << endl;

    cin >> a >> b;
    int ans = findGcd(a, b);
    cout << ans;

    return 0;
}