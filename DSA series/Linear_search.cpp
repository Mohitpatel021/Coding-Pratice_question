#include <bits/stdc++.h>
using namespace std;
bool linear_search(int arr[], int key, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int key;
    int array[10] = {2, 4, 6, 8, 34, 46, 35, 49, 78, 90};

    cout << "enter the elements of the array " << endl;
    cin >> key;
    bool found = linear_search(array, key, 10);
    if (found == true)
    {
        cout << "the element is found at " << endl;
    }
    else
    {
        cout << "the element is not found" << endl;
    }
    return 0;
}