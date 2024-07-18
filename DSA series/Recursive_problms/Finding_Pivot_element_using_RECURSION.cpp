#include <iostream>
#include <vector>
//Time complexity======O(N)
// Space complexity====O(n)
using namespace std;

// Function to find the pivot element using recursion
int findPivot(vector<int> &arr, int low, int high)
{
    // Base case: only one element in the array
    if (low == high)
    {
        return arr[low];
    }

    // Find the middle index of the array
    int mid = (low + high) / 2;

    // Check if the middle element is the pivot
    if (mid < low && arr[mid] > arr[mid + 1])
    {

        return arr[mid + 1];
    }
    if (mid > low && arr[mid] < arr[mid - 1])
    {

        return arr[mid];
    }

    // Recursively search for the pivot in the left or right half of the array
    if (arr[high] > arr[mid])
    {
        return findPivot(arr, low, mid - 1);
    }
    else
    {
        return findPivot(arr, mid, high);
    }
}

int main()
{
    // Example array
    vector<int> arr = {5, 6, 7, 8, 9, 1, -6, 0, 1, 2, 3};

    // Find the pivot element
    int pivot = findPivot(arr, 0, arr.size() - 1);

    // Print the result
    cout << "The pivot element is: " << pivot << endl;

    return 0;
}
