#include <bits/stdc++.h>
using namespace std;
void reverse(string &s, int start, int end)
{
    while (start < end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }
}
int main()
{
    string s;
    cout << "enter string " << endl;
    cin >> s;
    int i = 0, j = s.length() - 1;
    reverse(s, i, j);
    cout << endl;
    cout << s << endl;
    return 0;
}