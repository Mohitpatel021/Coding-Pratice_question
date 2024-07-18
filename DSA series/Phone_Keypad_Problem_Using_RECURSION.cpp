#include <bits/stdc++.h>
using namespace std;
void solve(string digit, vector<string> &ans, string output, int index, string mapping[])
{
    if (index >= digit.length())
    {
        ans.push_back(output);
        return;
    }
    int number = digit[index] = '0';
    string value = mapping[number];
    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digit, ans, output, index + 1, mapping);
        output.pop_back();
    }
}

vector<string> letterCombination(string digit)
{
    vector<string> ans;
    int index = 0;
    string output = " ";
    string mapping[] = {" ", " ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digit, ans, output, index, mapping);
    return ans;
}
int main()
{
    string digit = "23";
    vector<string> result = letterCombination(digit);

    return 0;
}