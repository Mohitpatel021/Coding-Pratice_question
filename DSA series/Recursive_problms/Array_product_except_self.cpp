#include <bits/stdc++.h>
using namespace std;
void productArray(int *arr, int size)
{

    int ans[size];
    int prod = 1;
    for (int i = 0; i < size; i++)
    {
        prod *= arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        ans[i] = prod / arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    int arr[4] = {1, 2, 3, 4};
    productArray(arr, 4);

    return 0;
}