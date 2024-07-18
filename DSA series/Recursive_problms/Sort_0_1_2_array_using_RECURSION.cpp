#include <iostream>
using namespace std;
void print(int *arr, int size, int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << endl;
    }
}

void sortColors(int arr[], int n, int low, int high)
{
    if (low >= high)
        return;

    int mid = low + (high - low) / 2;
    sortColors(arr, n, low, mid);
    sortColors(arr, n, mid + 1, high);

    int i = low, j = mid + 1, k = low;
    int temp[n];

    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {  
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }

    while (j <= high)
    {
        temp[k++] = arr[j++];
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    int arr[] = {0, 1, 2, 0, 1, 2, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortColors(arr, n, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}