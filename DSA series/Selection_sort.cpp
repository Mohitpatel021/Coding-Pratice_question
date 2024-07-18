#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10] = {23, 3, 4, 2, 6, 8, 99, 46, 46, 355};
    for (int i = 0; i < 9 /*(n-1)*/; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[j] <= arr[min_index])
            {
                min_index = j;
            }
        }
        swap(arr[min_index], arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}