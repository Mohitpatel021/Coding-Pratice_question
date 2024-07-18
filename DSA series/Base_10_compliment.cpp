#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout << "enter number" << endl;
    cin >> n;
    m = n;
    int mask = 0;
    if (n == 0)
    {
       // return 1;
       //Here this if condition and the instruction that are written outside the while loop all are run 
       //That why its return the 1 and 0 in the output
        cout<<"1"<<endl;

    }
    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int ans = (~n) & mask;
    cout << ans;

 return 0;
}