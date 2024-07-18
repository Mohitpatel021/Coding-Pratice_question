#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(2);
    l.push_back(1);
    l.push_front(3);
    l.push_front(4);
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    l.erase(l.begin());
    cout << "empty or not " << l.empty() << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    return 0;
}