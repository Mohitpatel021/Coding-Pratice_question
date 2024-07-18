#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;

    s.insert(8);
    s.insert(60);
    s.insert(40);
    s.insert(0);
    // s.insert(10);
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "erasing the set " << endl;
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "finding the element " << endl;
    cout << s.count(10) << endl;
    cout << endl;
    it = s.find(8);
    cout << "value present at it " << *it << endl;
    return 0;
}