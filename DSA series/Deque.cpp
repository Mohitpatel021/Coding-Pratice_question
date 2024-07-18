#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> first;

    first.push_back(2);
    first.push_front(1);
    first.push_back(3);
    first.push_front(0);
    cout << "Empty or not " << first.empty() << endl;
    cout << " value at index 0 is  " << first.at(0) << endl;
    cout << " value at index 1 is  " << first.at(1) << endl;
    for (int i : first)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "After erasing deque " << endl;
    first.erase(first.begin(), first.begin() + 2);
    cout << "Empty or Not " << first.empty() << endl;
    cout << endl;
    cout << "Copying Deque into second deque " << endl;

    deque<int> second(first);
    for (int i : second)
    {
        cout << i << " ";
    }
    return 0;
}