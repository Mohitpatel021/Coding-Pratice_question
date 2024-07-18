#include <bits/stdc++.h>
using namespace std;
void sum_of_array_element(int array[], int size)
{
    int sum = 0;
    int i = 0;
    while (i < size)
    {
        sum = sum + array[i];
    }
    cout << sum << endl;
}

int main()
{
    cout << "program statr" << endl;

    int array[5] = {2, 3, 4, 5, 6};
    sum_of_array_element(array, 5);
    
    // cout << "the sum is=" << total_sum << endl;
    return 0;
}