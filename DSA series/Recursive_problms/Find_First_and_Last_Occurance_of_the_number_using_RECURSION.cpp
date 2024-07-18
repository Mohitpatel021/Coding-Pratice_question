#include <bits/stdc++.h>
using namespace std;
// Time complexity====O(n)
// Space complexity====O(1)
int firstoccurance(int *arr, int size, int start, int key)
{
    // Base case
    if (start < 0)
    {
        return -1;
    }
    // Check if current index contains the element we are looking for
    if (arr[start] == key)
    {
        return start;
    }
    // Recursive relationship  
    firstoccurance(arr, size, start + 1, key);
}
int lastoccurance(int *arr, int size, int start, int key)
{
    // Base case
    if (start < 0)
    {
        return -1;
    }
    // Check if current index contains the element we are looking for
    if (arr[start] == key)
    {
        return start;
    }
    // Recursive  relatio
    lastoccurance(arr, size, start - 1, key);
}
int main()
{
    int arr[6] = {1, 3, 3, 3, 8, 8};
    int size = 6;
    int key = 8;
    cout << " first index " << firstoccurance(arr, size, 0, key);
    cout << "last index " << lastoccurance(arr, size, size - 1, key) << endl;
    int totalNumber = lastoccurance(arr, size, size - 1, key) - firstoccurance(arr, size, 0, key) + 1;
    cout << "Total number of occurance " << totalNumber << endl;
    return 0;
}