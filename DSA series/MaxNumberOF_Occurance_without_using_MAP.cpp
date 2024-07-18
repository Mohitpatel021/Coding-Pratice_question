#include <bits/stdc++.h>
#define ASCII_SIZE 256
using namespace std;
char maxNumberOccourance(string s)
{
    int arr[26] = {0};

    // create array of count of charcter
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        int number = 0;
        // for lower case
        number = ch - 'a';
        arr[number]++;
    }
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
   // cout <<"maximum number of occurance of the charcter"<< maxi << endl;
    return 'a' + ans;
}

/*char getMaxOccurringChar(char *str)
{
    // Create array to keep the count of individual
    // characters and initialize the array as 0
    int count[ASCII_SIZE] = {0};

    // Construct character count array from the input
    // string.
    int len = strlen(str);
    int max = 0; // Initialize max count
    char result; // Initialize result

    // Traversing through the string and maintaining
    // the count of each character
    for (int i = 0; i < len; i++)
    {
        count[str[i]]++;
        if (max < count[str[i]])
        {
            max = count[str[i]];
            result = str[i];
        }
    }

    return result;
}*/
int main()
{
    string s;
     cout << "enter your string" << endl;
     cin >> s;
     cout << maxNumberOccourance(s);

    /*char str[] = "sample s string";
    cout << "Max occurring character is "
         << getMaxOccurringChar(str);*/
    return 0;
}