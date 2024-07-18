#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int count = 0;
    cout << "enter number " << endl;
    cin >> n;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    cout << "Number of 1's in the given binary represention is  " << count << endl;

    return 0;
}