#include <bits/stdc++.h>
using namespace std;
int getmax_ccrring_char(string s)
{
    map<char, int> charcount;
    for (int i=0;i<s.size();i++)
    {
        charcount[s[i]]++;
    }
    int maxchar = s[0];
    int maxcount = charcount[s[0]];
    for (int i=0;i<s.size();i++) 
    {
        if (charcount[s[i]] > maxcount)
        {
            maxchar =  s[i];
            maxcount = charcount[s[i]];
        }
    }
    return maxchar;
}

int main()
{
    string s;
    cout << "enter your string " << endl;
    cin >> s;   
    cout << getmax_ccrring_char(s) << endl;
    return 0;
}

