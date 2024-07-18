#include <bits/stdc++.h>
using namespace std;
void sortArray(int *arr, int size)
{
    // base case if array size is 1 or 0 so it is already sorted
    if (size == 0 || size == 1)
        return;
    // solve 1 case :-in this case the largest element is in the right position
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    //recursive relation
    
    sortArray(arr, size - 1);
}
int main()
{
    int arr[7] = {2, 4, 5, 67, 2, 56, 2};
    int size = 7;
    sortArray(arr, size);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}