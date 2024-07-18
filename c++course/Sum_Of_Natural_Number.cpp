/* #include <iostream>
using namespace std;
int main()
{
    int i=1, n, sum = 0;
    cout << "enter the number:" << endl;
    cin >> n;
    while (i<=n)
    {
        sum+=i;
        i++;
    }


    cout << "sum=" << sum << endl;
    return 0;
}*/





#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    // cout<<"enter the number:"<<endl;
    // cin>>n;
    for (int i = 51; i < 100; i++)
    {

        sum += i;
    }
    cout << "The sum of the natural number between the number 51 to 100 are  given below:-" << endl;
    cout << "sum=" << sum << endl;

    return 0;
}