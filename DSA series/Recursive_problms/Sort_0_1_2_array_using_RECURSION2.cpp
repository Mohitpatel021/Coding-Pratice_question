#include <iostream>
#include <vector>

using namespace std;

void sortColors(vector<int> &nums, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int i = start - 1, j = end + 1, pivot = 1;
    while (i < j)
    {
        do
        {
            i++;
        } while (nums[i] < pivot);
        do
        {
            j--;
        } while (nums[j] > pivot);
        if (i < j)
        {
            swap(nums[i], nums[j]);
        }
    }
    sortColors(nums, start, j);
    sortColors(nums, j + 1, end);
}

int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    sortColors(nums, 0, nums.size() - 1);
    cout << "good" << endl;
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}
