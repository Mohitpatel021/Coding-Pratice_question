#include <bits/stdc++.h>
using namespace std;

string solve(string &s)
{
    int l = 0;
    int r = s.size() - 1;
    while (l <= r)
    {
        if ((s[l] == 'a' || s[l] == 'e' || s[l] == 'i' || s[l] == 'o' || s[l] == 'u' || s[l] == 'A' || s[l] == 'E' || s[l] == 'I' || s[l] == 'O' || s[l] == 'U') && (s[r] == 'a' || s[r] == 'e' || s[r] == 'i' || s[r] == 'o' || s[r] == 'u' || s[r] == 'A' || s[r] == 'E' || s[r] == 'I' || s[r] == 'O' || s[r] == 'U'))
        {
            swap(s[l], s[r]);
            l++;
            r--;
        }
        else if ((s[l] != 'a' && s[l] != 'e' && s[l] != 'i' && s[l] != 'o' && s[l] != 'u' && s[l] != 'A' && s[l] != 'E' && s[l] != 'I' && s[l] != 'O' && s[l] != 'U') && (s[r] == 'a' || s[r] == 'e' || s[r] == 'i' || s[r] == 'o' || s[r] == 'u' || s[r] == 'A' || s[r] == 'E' || s[r] == 'I' || s[r] == 'O' || s[r] == 'U'))
        {
            l++;
        }
        else if ((s[l] == 'a' || s[l] == 'e' || s[l] == 'i' || s[l] == 'o' || s[l] == 'u' || s[l] == 'A' || s[l] == 'E' || s[l] == 'I' || s[l] == 'O' || s[l] == 'U') && (s[r] != 'a' && s[r] != 'e' && s[r] != 'i' && s[r] != 'o' && s[r] != 'u' && s[r] != 'A' && s[r] != 'E' && s[r] != 'I' && s[r] != 'O' && s[r] != 'U'))
        {
            r--;
        }
        else
        {
            l++;
            r--;
        }
    }
    return s;
}
int main()
{

    string s = "leetcode";
    cout << solve(s);
    return 0;
}
