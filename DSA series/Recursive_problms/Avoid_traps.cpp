#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cout << "enter t" << endl;
    cin >> t;
    while (t--)
    {

        int n, k;
        cout << "enter n and k" << endl;
        cin >> n >> k;
        vector<int> a(n);
        cout << "enter element" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<long long> dp(n + 1, 1e18);
        dp[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= min(i - 1, k); j++)
            {
                dp[i] = min(dp[i], dp[i - j - 1] + a[i - 1] + j);
            }
        }

        cout << dp[n] << endl;
    }

    return 0;
}
