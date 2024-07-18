#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
{
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {

        int l = i + 1;
        int r = n - 1;
        while (l < r)
        {
            if (arr[i] + arr[l] + arr[r] == K)
            {
                ans.push_back({arr[i], arr[l], arr[r]});
                while (l < r && arr[l] == arr[l + 1])
                    l++;
                while (l < r && arr[r] == arr[r - 1])
                    r--;
                l++;
                r--;
            }
            else if (arr[i] + arr[l] + arr[r] > K)
                r--;
            else
                l++;
        }
        while (i + 1 < n && arr[i] == arr[i + 1])
            i++;
    }
    return ans;
}
int main()
{
    int sum_of_triplets;
    cout << "enter the sum of triplets " << endl;
    cin >> sum_of_triplets;
    vector<int> array(10);
    for (int i = 0; i < 10; i++)
    {
        int s;
        cin >> s;
        array.push_back(s);
    }
    cout << "triplet sum " << endl;
    vector<vector<int>> ans = findTriplets(array, 10, sum_of_triplets);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}