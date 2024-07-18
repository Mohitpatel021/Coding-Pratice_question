#include <bits/stdc++.h>
using namespace std;
int peakIndex(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return arr[mid];
}
int main()
{
    vector<int> array = {1, 3, 4, 6, 8, 9, 2, 1, 0};
    cout << peakIndex(array);

    return 0;
}