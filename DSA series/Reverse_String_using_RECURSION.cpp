#include <bits/stdc++.h>
using namespace std;
void reverse(string &s, int start)
{
    if (start > s.length() / 2)
    {
        return;
    }
    swap(s[start], s[s.length() - start - 1]);
    start++;

    reverse(s, start);
}
int main()
{
    string str;
    cout << "enter string " << endl;
    cin >> str;
    int start = 0;
    int end = str.length() - 1;
    reverse(str, start);
    cout << endl;
    cout << str << endl;

    return 0;
}