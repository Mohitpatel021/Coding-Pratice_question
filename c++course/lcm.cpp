/*#include <iostream>
using namespace std;
int main()
{
    int n1, n2, max;
    cout << "enter the two number:" << endl;
    cin >> n1 >> n2;
    max=(n1 > n2)?n1:n2;

    while (true)
    {
        if ((max % n1 == 0) && (max % n2 == 0))
        {
            cout << "LCM="<<max<< endl;
            break;
        }
        else
            ++max;
    }

    return 0;
}*/

#include <iostream>
using namespace std;
int main()
{
    int n1, n2, lcm, hcf, temp;
    cout << "enter two number:" << endl;
    cin >> n1 >> n2;
    hcf = n1;
    temp = n2;
    while (hcf != temp)
    {
        if (hcf > temp)

        hcf -= temp;

        else

         temp -= hcf;

        lcm = n1 * n2 / hcf;
    }
    cout << "LCM=" << lcm << endl;

    return 0;
}

