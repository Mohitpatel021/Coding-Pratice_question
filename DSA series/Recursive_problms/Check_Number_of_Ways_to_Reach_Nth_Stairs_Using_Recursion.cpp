#include <bits/stdc++.h>
using namespace std;
// Time complexity====O(2^n)
// Space complexity====O(n)
int countDistinctWays(int nStairs)
{
    if (nStairs < 0)
    {
        return 0;
    }
    if (nStairs == 0)
    {
        return 1;
    }
    return countDistinctWays(nStairs - 1) + countDistinctWays(nStairs - 2);
}
int main()
{
    int nStaris;
    cout << "enter nStaris" << endl;
    cin >> nStaris;
    cout << countDistinctWays(nStaris);
    return 0;
}