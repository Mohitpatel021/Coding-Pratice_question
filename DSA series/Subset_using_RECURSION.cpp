#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> array, vector<vector<int>> &ans, vector<int> output, int index)
{
    // Base case if the index in out of the array size
    if (index >= array.size())
    {
        ans.push_back(output);
        return;
    }
    // Excluding the index element once
    solve(array, ans, output, index + 1);
    // Including the index element once
    int elment = array[index];
    output.push_back(elment);
    solve(array, ans, output, index + 1);
}

vector<vector<int>> subset(vector<int> array)
{
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(array, ans, output, index);
    return ans;
}
int main()
{
    // main fuction
    vector<int> array = {1, 2, 3};
    vector<vector<int>> subsets = subset(array);
  
    return 0;
}