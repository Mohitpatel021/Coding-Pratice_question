#include <bits/stdc++.h>
using namespace std;
// This will only works in sorted array
int firstOccurance(int arr[], int n, int key)
{

    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int lastOccurance(int arr[], int n, int key)
{

    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int arr[6] = {2, 3, 3, 3, 3, 3};
    cout << "index of the first occurance of the key is " << firstOccurance(arr, 6, 3) << endl;
    cout << "index of the last occurance of the key is " << lastOccurance(arr, 6, 3) << endl;
    int total = (lastOccurance(arr, 6, 3) - firstOccurance(arr, 6, 3)) + 1;
    cout << "total number of occurance " << total << endl;

    return 0;
}