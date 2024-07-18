#include <bits/stdc++.h>
using namespace std;

// THis program is used for finding the pair their sum is equal to the target
vector<vector<int>> pairSum(vector<int> num, int size, int target)
{
    vector<vector<int>> ans;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            vector<int> temp;
            if (num[i] + num[j] == target)
            {
                temp.push_back(min(num[i], num[j]));
                temp.push_back(max(num[i], num[j]));
            }
            ans.push_back(temp);
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}
int main()
{
    int n;
    int sum;

    cout << "enter the size of the array" << endl;
    cin >> n;
    cout << "enter the number that you wanted  back as a sum " << endl;
    cin >> sum;
    vector<int> v;
    int element;
    cout << "enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> element;
        v.push_back(element);
    }
    cout << "after finding " << endl;
    vector<vector<int>> result = pairSum(v, n, sum);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << endl;
        }
    }

    return 0;
}