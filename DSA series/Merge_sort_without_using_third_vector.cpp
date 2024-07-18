#include <bits/stdc++.h>
using namespace std;
// function is correct..........But printing is  the array  is not right

vector<int> merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = 0, j = 0;
    vector<int> ans = nums1;
    int k = 0;
    while (i < m && j < n)
    {
        if (ans[i] < nums2[j])
        {
            nums1[k++] = ans[i++];
        }
        else
        {
            nums1[k++] = nums2[j++];
        }
    }
    while (i < m)
    {
        nums1[k++] = ans[i++];
    }
    while (j < n)
    {
        nums1[k++] = nums2[j++];
    }
    return nums1;
}
void print(vector<int> ans, int size)
{
}

int main()
{

    vector<int> nums1;
    vector<int> nums2;

    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(3);
    nums1.push_back(0);
    nums1.push_back(0);
    nums1.push_back(0);
    nums2.push_back(2);
    nums2.push_back(5);
    nums2.push_back(6);

    merge(nums1, 6, nums2, 3);

    for (int s = 0; s < nums1.size(); s++)
    {
        cout << nums1[s] << " ";
    }

    cout << endl;
    return 0;
}