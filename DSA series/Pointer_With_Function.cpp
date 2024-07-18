#include <bits/stdc++.h>
using namespace std;
int update(int *ptr)
{
    cout << " inside the update function " << ptr << endl;
    cout << "inside the update function 1" << *ptr << endl;
    // This will not update the value
    ptr = ptr + 1;
}
int update1(int *ptr1)
{
    cout << "Inside the update1 function " << ptr1 << endl;
    cout << "Inside the update1 function " << *ptr1 << endl;
    // This will update the value
    *ptr1 = *ptr1 + 1;
}
int getSum(int *arr, int size)
{
    cout << endl
         << "size of the pointer " << sizeof(arr) << endl;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int value = 5;
    int *p = &value;
    cout << p << endl;
    int arr[6] = {1, 2, 3, 4, 5, 8};

    cout << "sum of last three digitt is" << getSum(arr + 3, 3) << endl;
    /* cout << "before trying to update " << *p << endl;
     update(p);
     cout << "after trying to update " << *p << endl;
     cout << "Before calling the update1 function " << p << endl;
     update1(p);
     cout << "after calling the update1 function " << *p << endl;
     // cout << " sum is " << getSum(arr, 5);
     */

    return 0;
}