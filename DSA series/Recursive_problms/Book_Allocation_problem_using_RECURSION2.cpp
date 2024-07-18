#include <bits/stdc++.h>
using namespace std;
// Time complexity====O(n log n)
// Space complexity====O(n)

// Function to check if it is possible to allocate books such that
// each student gets no more than `mid` pages
bool isPossible(int books[], int size, int students, int mid)
{
    int studentCount = 1, pages_read = 0;

    for (int i = 0; i < students; i++)
    {
        if (pages_read + books[i] > mid)
        {
            studentCount++;
            pages_read = books[i];

            if (studentCount > students)
            {
                return false;
            }
        }
        else
        {
            pages_read += books[i];
        }
    }

    return true;
}

// Recursive function to find the minimum number of pages that
// each student can read by allocating books in a fair manner
int allocateBooks(int books[], int size, int students, int start, int end)
{
    if (start > end)
    {
        return -1;
    }

    int mid = (start + end) / 2;

    if (isPossible(books, size, students, mid))
    {
        int res = allocateBooks(books, size, students, start, mid - 1);

        if (res == -1)
        {
            return mid;
        }

        return res;
    }

    return allocateBooks(books, size, students, mid + 1, end);
}

int main()
{
    int size, students;
    cin >> size >> students;

    int books[size];
    for (int i = 0; i < size; i++)
    {
        cin >> books[i];
    }

    int total_pages = accumulate(books, books + size, 0);

    cout << allocateBooks(books, size, students, 0, total_pages) << endl;

    return 0;
}
