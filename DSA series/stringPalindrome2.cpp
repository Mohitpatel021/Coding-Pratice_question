#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;
bool checkpalindrome(string s)
{
    int start = 0;
    int end = s.size() - 1;
    transform(s.begin(),s.end(),s.begin(),:: tolower);
    while (start <= end)
    {
        if (!isalnum(s[start]))
        {
            start++;
        }
        else if (!isalnum(s[end]))
        {
            end--;
        }
        else
        {
            if (s[start] != s[end])
            {
                return false;
            }
            else
            {
                start++;
                end--;
            }
        }
    }
    return true;
}
int main()
{
    string s;
    cout << "enter your string " << endl;
    cin >> s;
    cout << checkpalindrome(s);
    return 0;
}