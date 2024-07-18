#include <bits/stdc++.h>
using namespace std;
bool ispossible(vector<int> &stalls, int number_of_Cows, int mid)
{
    int cowCount = 1;
    int lastposition = stalls[0];
    for (int i = 0; i < stalls.size(); i++)
    {
        if (stalls[i] - lastposition >= mid)
        {
            cowCount++;
            if (cowCount == number_of_Cows)
            {
                return true;
            }
            lastposition = stalls[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int number_of_Cows)
{
    sort(stalls.begin(), stalls.end());
    int start = 0;
    int maxi = -1;
    for (int i = 0; i < stalls.size(); i++)
    {
        maxi = max(maxi, stalls[i]);
    }

    int end = maxi;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (ispossible(stalls, number_of_Cows, mid))
        {
            ans = mid;
            start = mid + 1;
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
    vector<int> stalls;
    int number_of_Cows;
    int array_size;
    cout << "Enter the  array size and  number of cows " << endl;
    cin >> array_size >> number_of_Cows;
    for (int i = 0; i < array_size; i++)
    {
        int s;
        cin >> s;
        stalls.push_back(s);
    }
    int ans = aggressiveCows(stalls, number_of_Cows);
    cout << ans << endl;
}
