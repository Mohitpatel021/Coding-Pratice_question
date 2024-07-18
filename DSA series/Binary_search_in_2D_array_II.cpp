#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>> vect, int target)
{
    int row = vect.size();
    int col = vect[0].size();
    int rowIndex = 0;
    ;
    int colIndex = col - 1;
    while (rowIndex < row && colIndex >= 0)
    {
        int element = vect[rowIndex][colIndex];
        if (element == target)
        {
            return true;
        }
        if (element < target)
        {
            rowIndex++;
        }
        else
        {
            colIndex--;
        }
    }
   
    return false;
}

int main()
{
    vector<vector<int>> v = {

        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}};
    cout << searchMatrix(v, 5);

    return 0;
}