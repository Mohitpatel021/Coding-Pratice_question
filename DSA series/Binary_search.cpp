#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int n, int key)
{

    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int evenArray[16] = {2, 4, 7, 9, 16, 45, 46, 67, 76, 77, 78, 79, 80, 82, 84, 90};
    int oddArray[15] = {0, 5, 8, 10, 23, 32, 43, 49, 50, 55, 57, 58, 90, 990, 9999};
    int evenindex = binarySearch(evenArray, 16, 84);
    cout << "indes of the key is " << evenindex << endl;
    int oddindex = binarySearch(oddArray, 15, 9999);
    cout << "indes of the key is " << oddindex << endl;

    return 0;
}