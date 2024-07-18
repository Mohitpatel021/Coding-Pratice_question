#include <bits/stdc++.h>
using namespace std;
int main()
{
    // This loop is for rows
    for (int i = 1; i <= 5; i++)
    {
        // This is for Columns
        // this will the numbe of start according to the number of columms
        for (int j = 1; j <= i; j++)
        {
            // If i add one more space here it will print inverted pyramid
            cout << " ";
        }
        for (int k = i; k <= 5; k++)
        {
            // if i add one more space in above cout statement i need to add on more space below to make a inverted pyramid
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}