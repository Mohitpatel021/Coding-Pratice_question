#include <bits/stdc++.h>
using namespace std;
int binarySearch(int *arr, int key, int start, int end)
{
    // base case
    if (start > end)
    {
        return -1;
    }
    int mid = start + (end - start) / 2;
    if (arr[mid] == key)
    {
        return mid;
    }
    if (arr[mid] > key)
    {
        return binarySearch(arr, key, start, mid - 1);
    }
    else
    {
        return binarySearch(arr, key, mid + 1, end);
    }
}
int main()
{
    int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int key = 0;
    int size = 9;
    cout << "found or not at index " << binarySearch(arr, key, 0, size - 1);

    return 0;
}