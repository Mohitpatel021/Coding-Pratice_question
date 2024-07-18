#include <iostream>
#include <vector>
using namespace std;

void moveZeros(vector<int> &nums)
{
    int n = nums.size();
    int nonZeroIdx = 0;

    for (int i = 0; i < n; i++)
    { 
        if (nums[i] != 0)
        {
            swap(nums[i], nums[nonZeroIdx]);
            nonZeroIdx++;
        }
    }
}

int main()
{
    vector<int> nums = {0, 1, 0, 3, 1, 2};

    moveZeros(nums);

    for (int num : nums)
    {
        cout << num << " ";
    }

    return 0;
}
