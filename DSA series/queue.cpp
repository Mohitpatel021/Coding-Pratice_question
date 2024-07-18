#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> q;
    q.push("Mohit");
    q.push("Kumar");
    cout << "size of the queue is " << q.size() << endl;
    cout << "top element: " << q.front() << endl;
    q.pop();
    cout << "top element: " << q.front() << endl;
    q.size();
    cout << "size of the queue is " << q.size();
    return 0;
}