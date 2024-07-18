#include <bits/stdc++.h>
#include <vector>
using namespace std;
bool ispossible(vector<int> &time, int size_of_array, int total_student, long long int mid)
{
    long long int studentCount = 1;
    long long int pageSum = 0;
    for (int i = 0; i < size_of_array; i++)
    {
        if (pageSum + time[i] <= mid)
        {
            pageSum += time[i];
        }
        else
        {
            studentCount++;
            if (studentCount > total_student || time[i] > mid)
            {
                return false;
            }
            else
            {
                pageSum += time[i];
            }
        }
    }
    return true;
}
long long ayushGivesNinjatest(int size_of_array, int total_student, vector<int> time)
{
    long long int ans = -1;
    long long int start = 0;
    long long int sum = 0;
    for (int i = 0; i < size_of_array; i++)
    {
        sum = sum + time[i];
    }
    long long int end = sum;
    long long int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (ispossible(time, size_of_array, total_student, mid))
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
    vector<int> arr;
    int size_of_array, total_student;
    cout << "enter size_of_array and total_student " << endl;
    cin >> size_of_array >> total_student;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);

    cout << ayushGivesNinjatest(size_of_array, total_student, arr);
    return 0;
}