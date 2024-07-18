#include <bits/stdc++.h>
using namespace std;
int pivot_element(int arr[], int n)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }

        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return arr[start];
}
int main()
{
    //{2,5,7,9,11,34}

    int arr[6] = {11, 34, 44, 45, 1, 4};
    cout << pivot_element(arr, 6);
    return 0;
}