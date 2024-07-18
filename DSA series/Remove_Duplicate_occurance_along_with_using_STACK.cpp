#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(string s)
{
    int i = 0, n = s.length();
    for (int j = 0; j < n; j++)
    {
        if (i == 0 || s[j] != s[i - 1])
        {
            s[i++] = s[j];
        }
        else
        {
            i--;
        }
    }
    return s.substr(0, i);
}
//..........using stack.........
/*
#include <iostream>
#include <stack>

using namespace std;

string removeDuplicates(string s) {
    stack<char> stk;
    for (char c : s) {
        if (!stk.empty() && stk.top() == c) {
            stk.pop();
        } else {
            stk.push(c);
        }
    }

    string res = "";
    while (!stk.empty()) {
        res = stk.top() + res;
        stk.pop();
    }
    return res;
}

int main() {
    string s = "abbaca";
    cout << removeDuplicates(s) << endl;
    return 0;
}
*/

int main()
{
    string s = "abcaac";
    cout << removeDuplicates(s) << endl;
    return 0;
}
