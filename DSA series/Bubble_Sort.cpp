#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 8;
    int arr[n] = {4, 5, 3, 6, 7, 2,55 ,1  };
    for (int i = 1; i < n; i++)
    {
       // bool swapped = false;
        for (int j = 0; j < n ; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                //swapped = true;
            }
        }
       // if (swapped == false)
         //   break;
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}