#include <bits/stdc++.h>
using namespace std;
bool check_palindrome(string &str, int start)
{
    if (start > (str.length() - 1) / 2)
        return true;
    if (str[start] != str[str.length() - start - 1])
        return false;
    else
        check_palindrome(str, start + 1);
}
int main()
{
    string str;
    cout << "enter string " << endl;
    cin >> str;
    int start = 0;
    int end = str.length() - 1;
    bool ispalindrome = check_palindrome(str, start);
    if (ispalindrome)
        cout << "your string is palindrome " << endl;
    else
        cout << "your string is not palindrome" << endl;

    return 0;
}