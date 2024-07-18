#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int num = 0 ;
    //This is for rows
    for (int i = 1; i <= n; i++)
    {
        //this is for Coulumns
        //But this for printing the Space
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        //This is for Printing the Numbers
        for (int k = 1; k <= i; k++)
        {
            cout << num++ << " ";
        }
        cout << endl;
    }
 
    return 0;
}
