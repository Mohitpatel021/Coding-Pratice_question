#include <bits/stdc++.h>
using namespace std;
string reverse_string(string s)
{

    int size = s.length();
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }
    return s;
}
int main()
{
    string str;
    cout << "Enter string" << endl;
    cin >> str;
    string ans = reverse_string(str);
    cout << ans;
    return 0;
}