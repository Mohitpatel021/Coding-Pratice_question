#include <bits/stdc++.h>
using namespace std;
void sortArray(int *arr, int size, int i = 0)
{
    if (i == size - 1)
    {
        return;
    }
    int min_Index = i;
    for (int j = i + 1; j < size; j++)
    {
        if (arr[j] < arr[min_Index])
        {
            min_Index = j;
        }
    }

    swap(arr[min_Index], arr[i]);
    cout << arr[min_Index] << " " << arr[i] << endl;
    sortArray(arr, size, i + 1);
}
int main()
{
    cout << "array " << endl;
    int arr[6] = {8,0,9,16,15,12};
    int size = 6;
    sortArray(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}