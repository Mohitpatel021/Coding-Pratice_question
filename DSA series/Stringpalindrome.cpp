#include <bits/stdc++.h>
using namespace std;
//for checking special character and 
bool checkSpecialchar(char ch){
    if(ch>='a' && ch<='z' || ch>='0' && ch<='9' || ch>='A' && ch<='Z'){
        return true;
    }
    return false;
}
bool tolower(char ch)
{
    
    if (ch>= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp=ch - 'A' + 'a';
        return  temp;
    }
}
bool checkPalindrome(string s)
{
   ;
    int start = 0;
    int end = s.size() - 1;
    while (start <= end)
    {
        if ( tolower(s[start]) != tolower(s[end]))
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    return 1;
}
int main()
{
    string s;
    cout << "enter your string " << endl;
    cin >> s;
    cout << "palindrome or not " << checkPalindrome(s) << endl;
    return 0;
}