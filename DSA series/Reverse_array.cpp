#include <bits/stdc++.h>
using namespace std;
void reverse_Arrays(int array[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(array[start], array[end]);
        start++;
        end--;
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
int main()
{
    int array[6] = {4, 5, 2, 6, 7, 5};
    int arr[5] = {1, 2, 3, 4, 5};

    reverse_Arrays(array, 6);
    reverse_Arrays(arr, 5);

    printArray(array, 6);
    printArray(arr, 5);

    return 0;
}

