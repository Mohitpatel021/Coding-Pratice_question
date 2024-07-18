#include <iostream>
using namespace std;
void dnfsort(int a[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = 0;
    while (mid <= end)
    {
        if (a[mid] == 0)
        {
            swap(a[mid], a[start]);
            mid++;
            start++;
        }
        if (a[mid] == 1)
        {
            mid++;
        }
        if (a[mid] == 2)
        {
            swap(a[mid], a[end]);
            end--;
        }
    }
}
int main()
{
    int a[] = {1, 0, 0, 2, 1, 1, 0, 0, 1};
    int n = sizeof(a) / sizeof(int);
    dnfsort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}