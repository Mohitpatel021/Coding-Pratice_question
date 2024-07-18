#include <bits/stdc++.h>
using namespace std;
//Time complexity======O(N)
// Space complexity====O(n)
int getSum(int arr[], int size)
{

    if (size == 0)
        return 0;
    if (size == 1)
    {

        return arr[0];
    }
    else
    {
        return getSum(arr + 1, size - 1) + arr[0];
    }
}
int main()
{
    int n;
    int arr[5] = {1, 2, 6, 9, 5};

    int sum = getSum(arr, 5);
    cout << sum << endl;
    return 0;
}