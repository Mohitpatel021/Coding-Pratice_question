#include <bits/stdc++.h>
using namespace std;
int main()
{

        int amount = 0, n;
        cout << "enter number " << endl;
        cin >> n;
        int count1, count2, count3, count4;
        int rupee1 = 100, rupee2 = 50, rupee3 = 20, rupee4 = 1;
        switch (1)
        {
        case 1:
                count1 = n / rupee1;
                amount = n % (count1 * rupee1);

        case 2:
                count2 = amount / rupee2;
                amount = amount % (count2 * rupee2);

        case 3:
                count3 = amount / rupee3;
                amount = amount % (count3 * rupee3);

        case 4:
                count4 = amount / rupee4;
                amount = amount % (count4 * rupee4);
        }
        cout << "the number of 100 rs notes " << count1 << endl;
        cout << "the number of 50 rs notes " << count2 << endl;
        cout << "the number of 30 rs notes " << count3 << endl;
        cout << "the number of 1 rs notes " << count4 << endl;

        return 0;
}