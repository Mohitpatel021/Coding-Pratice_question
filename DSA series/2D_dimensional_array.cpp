#include <bits/stdc++.h>
using namespace std;
//This function is help to find a given target/key..

bool isPresent(int arr[][3], int target, int row, int col)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}
//This ifunction is used to find sum of each row in the each row..

void indexSum(int arr[][3], int row, int col)
{
    int totalsum = 0;

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        totalsum += sum;
      //Row wise sum
        cout << "Total sum of the all element in the 2-D array that are present in the row" << i + 1 << ":" << endl;
        cout << sum << endl;
    }
    //overall array sum
    cout << "Overall sum of the array : " << endl;
    cout << totalsum << endl;
}
//This function is help to find maximum number in sum of each row..

int maxSum(int arr[][3], int row, int col)
{
    int max = INT_MIN;
    int rowIndex = -1;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }

        if (sum > max)
        {
            max = sum;
            rowIndex = i;
        }
    }
    //printing maximum sum comparing with each row...
    cout << "Maximum sum is :" << max << endl;
    // also return rowIndex
    return rowIndex;
}
int main()
{
    int arr[3][3];
    int target;
    cout << "enter array element" << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }
    cout << "Enter the element that you want to find in 2-D array: " << endl;
    cin >> target;
    if (isPresent(arr, target, 3, 3))
    {
        cout << "Element is Found" << endl;
    }
    else
    {
        cout << "Element is Not fount" << endl;
    }
    cout << "Printing 2-D array :" << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // for sum of every index
    indexSum(arr, 3, 3);
    cout << endl;
    // finding maximum sum...
    cout << "finding  maximum sum  here :" << endl;
    int ansIndex = maxSum(arr, 3, 3);
    cout << "Max row is at index :" << ansIndex << endl;

    return 0;
}