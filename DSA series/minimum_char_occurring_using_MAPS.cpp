#include <bits/stdc++.h>
using namespace std;
int getmin_occuring_char(string s)
{
    map<char, int> charcount;
    for (char c : s)
    {
        charcount[c]++;
    }
    int minchar = s[0];
    int mincount = charcount[s[0]];
    for (char c : s)
    {
        if (charcount[c] < mincount)
        {
            minchar = c;
            mincount = charcount[c];
        }
    }
    return minchar;
}
int main()
{
    string s;
    cout << "enter your string" << endl;
    cin >> s;
    char minichar = getmin_occuring_char(s);
    cout << "your minimum char " << minichar << endl;
    return 0;
}