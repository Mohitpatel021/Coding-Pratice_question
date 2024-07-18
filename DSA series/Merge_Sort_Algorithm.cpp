#include <bits/stdc++.h>
using namespace std;
void merge(int *arr, int start, int end)
{
    int mid = start + (end - start) / 2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainIndex = start;
    // copy the elements of the first half of the main array
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainIndex++];
    }
    // copying the elements into second half of the main array
    mainIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainIndex++];
    }
    int index1 = 0;
    int index2 = 0;
    mainIndex = start;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainIndex++] = first[index1++];
        }
        else
        {
            arr[mainIndex++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[mainIndex++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[mainIndex++] = second[index2++];
    }
    delete[] first;
    delete[] second;
}
void mergeSort(int *arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = start + (end - start) / 2;
    // sorting left part

    mergeSort(arr, start, mid);

    // sorting right part

    mergeSort(arr, mid + 1, end);
    // merging both the

    merge(arr, start, end);
}
int main()
{
    int arr[7] = {3, 1, 4, 677, 4, 7, 9};
    int size = 7;
    int start = 0;
    int end = size - 1;
    mergeSort(arr, start, end);
    cout << "sorted array " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}