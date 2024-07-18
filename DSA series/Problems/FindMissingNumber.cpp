#include <bits/stdc++.h>
using namespace std;
int find(vector<int> &arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == arr[i])
        {
            count++;
        }
    }
    return count;
}
int main()
{
    vector<int> arr = {3, 0, 1};
    cout << find(arr);
    return 0;
}