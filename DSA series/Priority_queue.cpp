#include <bits/stdc++.h>
using namespace std;
int main()
{
    // mximum_heap.....
    priority_queue<string> maxi;

    // minimum_heap.....
    maxi.push("4");
    maxi.push("3");
    maxi.push("2");
    maxi.push("1");
    maxi.push("0");
    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    priority_queue<int, vector<int>, greater<int>> mini;

    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        maxi.pop();
    }
    return 0;
}