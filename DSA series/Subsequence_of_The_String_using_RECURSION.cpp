#include <bits/stdc++.h>
using namespace std;
void solve(string str, vector<string> &ans, string output, int index)
{
    // base case if index is out of the string
    if (index >= str.length())
    {
        if (output.length() > 0)
        {
            ans.push_back(output);
        }
        return;
    }
    // Exclude the current index element
    solve(str, ans, output, index + 1);
    // include the current index element
    char element = str[index];
    output.push_back(element);
    solve(str, ans, output, index + 1);
}
vector<string> subsequences(string str)
{

    vector<string> ans;
    string output = "";
    int index = 0;
    solve(str, ans, output, index);
    return ans;
}
int main()
{
    string str = "abc";
    vector<string> answer = subsequences(str);
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }
    cout << endl;
}