#include <bits/stdc++.h>
using namespace std;
void insertionSortRecursive(int *arr, int size)
{
    if (size <= 1)
        return;
    // Sort first n-1 elements
    insertionSortRecursive(arr, size - 1);

    // Insert last element at its correct position
    int last = arr[size - 1];
    int j = size - 2;

    while (j >= 0 && arr[j] > last)
    {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last; 
}


int main()
{
    int arr[6] = {3, 1, 4, 6, 32, 7};
    int size = 6;
    insertionSortRecursive(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}