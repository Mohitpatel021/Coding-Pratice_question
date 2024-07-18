#include <bits/stdc++.h>
using namespace std;

// Time complexity====O(n log n)
// Space complexity====O(n)
int books[1005];
int n, k;

bool isPossible(int pages, int students)
{
    int count = 1, sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum + books[i] > pages)
        {
            count++;
            sum = books[i];
            if (count > students)
            {
                return false;
            }
        }
        else
        {
            sum += books[i];
        }
    }
    return true;
}

int allocateBooks(int start, int end, int students)
{
    if (start > end)
    {
        return -1;
    }
    int mid = (start + end) / 2;
    if (isPossible(mid, students))
    {
        if (mid == start)
        {
            return mid;
        }
        return allocateBooks(start, mid - 1, students);
    }
    return allocateBooks(mid + 1, end, students);
}

int main()
{
    cout << "enter n and k" << endl;

    cin >> n >> k;
    int total = 0;
    cout << "enter element" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> books[i];
        total += books[i];
    }
    cout << allocateBooks(0, total, k);
    return 0;
}
