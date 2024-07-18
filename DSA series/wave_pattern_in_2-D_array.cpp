#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> ans;
    int rowSize = v.size();
    int colSize = v[0].size();
    for (int i = 0; i < colSize; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = rowSize - 1; j >= 0; j--)
            {
                ans.push_back(v[i][j]);
            }
        }
        else
        {
            for (int j = 0; j < rowSize; j++)
            {
                ans.push_back(v[i][j]);
            }
        }
    }
    cout << "wave patter " << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " " << endl;
    }
    return 0;
}