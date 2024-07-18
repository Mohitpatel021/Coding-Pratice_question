#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<string> s;
    s.push("Mohit");
    s.push("Kumar");
    cout << "top element= " << s.top() << endl;
    cout << endl;
    s.push("patel");
    s.push("patel's chora");
    cout << "top element= " << s.top() << endl;
    cout << endl;
    s.pop();
    cout << "top element= " << s.top() << endl;

    return 0;
}