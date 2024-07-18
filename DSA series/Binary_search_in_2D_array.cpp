#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();
    int start = 0;
    int end =col - 1;
    int mid = start + (start - end) / 2;
    while (start <= end)
    {
        int element = matrix[mid / col][mid % col];
        if (element == target)
        {
            return true;
        }
        if (element > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (start - end) / 2;
    }
    return false;
}
int main()
{
    vector<vector<int>> vect = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
 bool present= searchMatrix(vect, 16);
    cout << present << endl;
    cout<<"nothing"<<endl;
    return 0;
}