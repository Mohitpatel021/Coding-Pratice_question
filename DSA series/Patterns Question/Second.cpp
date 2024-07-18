#include <bits/stdc++.h>
using namespace std;
int main()
{
    // This loop is for rows
    for (int i = 1; i <= 5; i++)
    {
        // This is for Columns
        // this will the numbe of start according to the number of columms
        for (int j = 5; j >= i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}