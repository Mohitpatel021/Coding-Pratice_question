#include <bits/stdc++.h>
using namespace std;
char getminimumoccur_char(string s)
{
    int arr[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
       arr[s[i] - 'a']++;
    }
    int mini = s[0];
     int minIndex;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] < mini && arr[i] != 0)
        {
            mini = arr[i];
            minIndex = i;
        }
    }
    return (minIndex + 'a');
}
int main()
{
     string s;
    cout << "enter string " << endl;
    cin >> s;
    cout << getminimumoccur_char(s);
    return 0;
}