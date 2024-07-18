#include <bits/stdc++.h>
using namespace std;
void print(int *arr, int size)
{
    cout << "size of the array is " << size << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
bool linearSearch(int *arr, int size, int key)
{
    // Printint the array here
    cout << endl;
    print(arr, size);
    cout << endl;
    if (size == 0)
        return false;
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        int remainingPart = linearSearch(arr + 1, size - 1, key);
        return remainingPart;
    }
}

int main()
{
    int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int size = 12;
    int key = 3;
    bool ans = linearSearch(arr, size, key);
    if (ans)
    {
        cout << "Search" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
    return 0;
}