#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1 = {1, 3, 2, 4, 5, 6};
    vector<int> v2 = {3,45,6};
    vector<int> v3(9);
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    sort(v3.begin(),v3.end());
  
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }

    return 0;
}