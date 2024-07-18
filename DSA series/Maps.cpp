#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "IV";
    int ans = 0;
    unordered_map<char, int> m = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
     cout<<m[s[0]];
     cout<<m[s[1]];

    //for (int i = 0; i < s.size(); i++)
    ////{
      
  //  }
    /*
  map<int, string> m;
    m[1] = "mohit";
    m[5] = "hum yum h";
    m[2] = "patel";
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << m.count(5) << endl;
    cout << "after erase " << endl;

    m.erase(5);
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    auto it = m.find(2);

    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }
    */

    return 0;
}