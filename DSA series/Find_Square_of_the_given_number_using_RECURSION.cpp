#include <bits/stdc++.h>
using namespace std;
int find_Power(int number, int power)
{
    // base case
    if (power == 0)
    {
        return 1;
    }
    // base case
    if (power == 1)
        return number;
    // recursive call
    int ans = find_Power(number, power / 2);
    // check if power is even
    if (power % 2 == 0)
        return ans * ans;
    // check if power is odd
    return number * ans * ans;
}
int main()
{
    int number, power;
    cout << "enter number and power " << endl;
    cin >> number >> power;
    int ans = find_Power(number, power);

    cout << ans << endl;
    return 0;
}