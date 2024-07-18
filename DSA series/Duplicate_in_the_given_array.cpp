#include <bits/stdc++.h>
using namespace std;
int main()
{
    // This approach is used only when the array element that is present in the gievn array is occur once
    // But only 1 element is present twice
    int n;
    cout << "enter the size of the array" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        ans = ans ^ i;
    }
    cout << ans;
    return 0;
}