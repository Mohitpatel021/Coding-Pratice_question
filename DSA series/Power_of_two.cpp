#include <bits/stdc++.h>
using namespace std;
int noofsetbit(int n)
{
    int count = 0;
    while (n!=0)
    {
        if (n & 1 == 1)
        {
            count++;
        }
        n=n>>1;
    }
    return count;
}
int main()
{
    int a, b;
    cout << "enter the value of a and b " << endl;
    cin >> a >> b;
    int ans1=noofsetbit(a);
   int ans2= noofsetbit(b);
    int totalbit = noofsetbit(a) + noofsetbit(b);
    cout << "The total number of bits in the both variable "<<totalbit << endl;
    return 0;
}