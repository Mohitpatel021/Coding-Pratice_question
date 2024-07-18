#include <iostream>
#include <math.h>
#include<bitset>
using namespace std;
int main()
{
    //Decimal to binary conversion
    int n;
    cout << "enter number" << endl;
    cin >> n;
    /*bitset<4>binaryNumber(n);
    cout<<binaryNumber<<endl;
   */ 
  int ans = 1, binary = 0;

    while (n != 0)
    {
        int bit = n & 1;
        binary += bit  *ans;
        n = n >> 1;
        ans*=10;
    }
    cout << binary << endl;
    return 0;
}