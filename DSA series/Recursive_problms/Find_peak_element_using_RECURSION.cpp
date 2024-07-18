#include <bits/stdc++.h>
using namespace std;
// Time complexity====O(log n)
// Space complexity====O(1)
int peakElement(int *arr, int size, int start, int end)
{
    // Base Case
    if (start > end)
    {
        return -1;
    }
    // Check each element for satisfiying the condition
    int mid = start + (end - start) / 2;
    if (arr[mid] > arr[mid + 1])
    {
        return arr[mid];
    }
    // recursive relation

    peakElement(arr, size, start, mid);
}
int main()
{

    int arr[7] = {11, 22, 33, 55, 33, 22, 11};
    int size = 7;
    cout << "index " << peakElement(arr, size, 0, size - 1);
    return 0;
}