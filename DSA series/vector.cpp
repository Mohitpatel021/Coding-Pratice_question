#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;

    cout << "capacity of the vector " << v.capacity() << endl;
    v.push_back(1);
    cout << "capacity of the vector " << v.capacity() << endl;
    v.push_back(2);
    cout << "capacity of the vector " << v.capacity() << endl;
    v.push_back(3);
    cout << "capacity of the vector " << v.capacity() << endl;
    cout << "Size of the vector " << v.size() << endl;
    cout << endl;

    vector<int> n(v);
    cout << "For new vector" << endl;
    for (int i : n)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Size of the vector " << v.size() << endl;
    cout << "Capacity of the vector " << v.capacity() << endl;
    cout << endl;

    cout << "after poping" << endl;
    v.pop_back();
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "For new Vector" << endl;
    vector<int> a(5, 100);
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    v.push_back(3);
    cout << " front element " << v.front() << endl;
    cout << " Back element " << v.back() << endl;
    cout << endl;

    return 0;
}