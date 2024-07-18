#include <bits/stdc++.h>
using namespace std;
void printSubset(const vector<int> &array, const vector<int> &subset)
{
    cout << "{ ";
    for (int i : subset)
    {
        cout << array[i] << " ";
    }
    cout << "}" << std::endl;
}

void findSubsets(const std::vector<int> &array)
{
    int n = array.size();

    // Generate all possible subsets
    for (int mask = 0; mask < (1 << n); ++mask)
    {
        vector<int> subset;
        for (int i = 0; i < n; ++i)
        {
            if (mask & (1 << i))
            {
                subset.push_back(i);
            }
        }
        printSubset(array, subset);
    }
}

int main()
{
    vector<int> array = {1, 2, 3};

    cout << "Subsets of the array: " << endl;
    findSubsets(array);

    return 0;
}
