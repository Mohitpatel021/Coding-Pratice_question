#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
using namespace std;

//Having some problems with this..........................;
int n, c;
vector<int> stalls;

int solve(int start, int end, int cows)
{
    if (cows == 1)
    {
        return stalls[end - 1] - stalls[start - 1];
    }
    int result = INT_MAX;
    for (int i = start; i <= end - cows + 1; i++)
    {
        result = min(result, max(stalls[i - 1] - stalls[start - 1], solve(i, end, cows - 1)));
    }
    return result;
}

int main()
{
    cin >> n >> c;
    for (int i = 0; i < n; i++)
    {
        int s;
        cin >> s;
        stalls.push_back(s);
    }
    sort(stalls.begin(), stalls.end());
    cout << solve(1, n, c) << endl;
    return 0;
}
