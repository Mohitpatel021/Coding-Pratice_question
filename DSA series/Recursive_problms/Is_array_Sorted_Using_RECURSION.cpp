#include <bits/stdc++.h>
using namespace std;
/*bool check_array(int arr[], int index, int size)
{
    if (index == size)
        return true;
    bool recursion_result = check_array(arr, index + 1, size);
    return (recursion_result & arr[index] <= arr[index + 1]);
}*/
bool isSorted(int size,int *arr)
{
    // base case
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remainingPart = isSorted(size - 1, arr + 1);
        return remainingPart;
    }
}
int main()
{
    int size, index;
    int arr[100];
    // cout << "enter  index of the array " << endl;
    // cin >> index ;
    cout << "enter the size of the array " << endl;
    cin >> size;
    cout << "enter element of the array " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // bool ans = check_array(arr, index, size);
    bool ans = isSorted(size, arr);
    if (ans)
    {
        cout << "Array is sorted " << endl;
    }
    else
    {
        cout << "Array is not sorted " << endl;
    }

    return 0;
}