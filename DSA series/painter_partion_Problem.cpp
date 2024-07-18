#include <bits/stdc++.h>
using namespace std;
bool ispossible(vector<int> boards, int number_of_painters, int mid)
{
    int paintersCount = 1;
    int block_sum = 0;
    for (int i = 0; i < boards.size(); i++)
    {
        if (block_sum + boards[i] <= mid)
        {
            block_sum += boards[i];
        }
        else
        {
            paintersCount++;
            if (paintersCount > number_of_painters || boards[i] > mid)
            {
                return false;
            }
            block_sum = 0;
            block_sum += boards[i];
        }
        // optional condititon
        /*if(studentCount>n){
            return false;
        }*/
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int number_of_painters)
{
    int ans = -1;
    int start = 0;
    int sum = 0;

    for (int i = 0; i < boards.size(); i++)
    {
        sum = sum + boards[i];
    }
    int end = sum;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (ispossible(boards, number_of_painters, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int array_size, number_of_painters;
    cout << "enter array size and number of painter" << endl;
    cin >> array_size >> number_of_painters;

    vector<int> boards;
    for (int i = 0; i < array_size; i++)
    {
        int s;
        cin >> s;
        boards.push_back(s);
    }
    int ans = findLargestMinDistance(boards, number_of_painters);
    cout << ans << endl;
    return 0;
}