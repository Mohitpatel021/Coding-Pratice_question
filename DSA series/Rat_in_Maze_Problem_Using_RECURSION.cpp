#include <bits/stdc++.h>
using namespace std;
bool isSafe(vector<vector<int>> &m, vector<vector<int>> &visited, int n, int x, int y)
{
    //This function checks whether the next element is safe to move or not
    if ((x >= 0 && x < n) && (y >= 0 && y < n) && (m[x][y] == 1) && (visited[x][y] == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}
void solve(vector<vector<int>> &m, vector<string> &ans,
           vector<vector<int>> &visited, string path, int n, int x, int y)
{
//Base case
    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(path);
        return;
    }
    //it change the current index to the 1 in the visited array that indicate the 
    //element is visited we can't back to that element
    visited[x][y] = 1;
    // for going DOWN in the matrix 
    int newx = x + 1;
    int newy = y;
    if (isSafe(m, visited, n, newx, newy))
    {
        path.push_back('D');
        solve(m, ans, visited, path, n, newx, newy);
        path.pop_back();
    }
    // for going LEFT in the matrix
    newx = x;
    newy = y - 1;
    if (isSafe(m, visited, n, newx, newy))
    {
        path.push_back('L');
        solve(m, ans, visited, path, n, newx, newy);
        path.pop_back();
    }
    // for going RIGHT in the matrix
    newx = x;
    newy = y + 1;
    if (isSafe(m, visited, n, newx, newy))
    {
        path.push_back('R');
        solve(m, ans, visited, path, n, newx, newy);
        path.pop_back();
    }

    // for going UPSIDE in the matrix

    newx = x - 1;
    newy = y;
    if (isSafe(m, visited, n, newx, newy))
    {
        path.push_back('U');
        solve(m, ans, visited, path, n, newx, newy);
        path.pop_back();
    }
    visited[x][y] = 0;
}
vector<string> findPath(vector<vector<int>> &m, int n)
{
    vector<string> ans;
    //for tracking the path
    vector<vector<int>> visited = m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = 0;
        }
    }
    if (m[0][0] == 0)
    {
        return ans;
    }
    string path = "";
    int srcx = 0;
    int srcy = 0;
    solve(m, ans, visited, path, n, srcx, srcy);
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int size;
    cout << "Enter the value of n " << endl;
    cin >> size;
    vector<vector<int>> array(size);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int element;
            cin >> element;
            array[i].push_back(element);
        }
    }
    vector<string> ans = findPath(array, size);

    for (int i = 0; i < size; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}