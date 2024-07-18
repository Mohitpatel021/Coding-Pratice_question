#include <iostream>

using namespace std;

int main()
{
    int n = 5; // Change this value to adjust the size of the pattern
    int m = 2 * n - 1;

    // Upper part of the pattern
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (j == 1 || j == m || i == n)
                cout << '*';
            else if (j == i || j == m - i + 1)
                cout << '*';
            else
                cout << ' ';
        }
        cout << endl;
    }

    // Line of stars at the beginning of the lower part
    for (int i = 1; i <= m; i++)
    {
        cout << '*';
    }
    cout << endl;

    // Lower part of the pattern (inverted)
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= m; j++)
        {
            if (j == 1 || j == m || i == 1)
                cout << '*';
            else if (j == i || j == m - i + 1)
                cout << '*';
            else
                cout << ' ';
        }
        cout << endl;
    }

    // Line of stars at the end of the pattern
    for (int i = 1; i <= m; i++)
    {
        cout << '*';
    }
    cout << endl;

    return 0;
}
