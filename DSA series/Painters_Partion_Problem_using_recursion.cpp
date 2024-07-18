#include <bits/stdc++.h>
using namespace std;

// function to check if the given maximum number of
// partitions is possible or not
bool isPossible(int arr[], int array_size, int number_of_painters, int mid) {
    int sum = 0;
    int count = 1;
    for (int i = 0; i < array_size; i++) {
        sum += arr[i];
        if (sum > mid) {
            sum = arr[i];
            count++;
            if (count > number_of_painters) {
                return false;
            }
        }
    }
    return true;
}

// recursive function to find the maximum sum
int findMaxSum(int arr[], int array_size, int number_of_painters, int start, int end) {
    if (start > end) {
        return -1;
    }
    int mid = start + (end - start) / 2;
    if (isPossible(arr, array_size, number_of_painters, mid)) {
        int ans = findMaxSum(arr, array_size, number_of_painters, start, mid - 1);
        if (ans != -1) {
            return ans;
        } else {
            return mid;
        }
    } else {
        return findMaxSum(arr, array_size, number_of_painters, mid + 1, end);
    }
}

// main function
int main() {
    int array_size, number_of_painters;
    cin >> array_size >> number_of_painters;
    int arr[array_size];
    int sum = 0;
    for (int i = 0; i < array_size; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << findMaxSum(arr, array_size, number_of_painters, 0, sum) << endl;
    return 0;
}
