#include<iostream>
using namespace std;

int main(){
//.................find factorial using for loop..............
    int a,factorial=1;
    cout<<"enter the number "<<endl;
    cin>>a;
    for (int i = 1; i <=a;i++)
    {
        factorial*=i;
    }

    cout<<"the factorial of the number "<<a<<" is "<<factorial<<endl;
    return 0;
}


/*#include <iostream>
using namespace std;
//.................factorial of a number using recursion function.........
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int a;
    cout << "enter the value of a" << endl;
    cin >> a;
    cout << "the factorial of " << a << " is " << factorial(a) << endl;
    return 0;
}*/

