/*#include<iostream>
using namespace std;
int main()
//.............Displaying the arrays elements.......
{
    int mark[5]={12,67,90,78,56};
    cout<<"the numbers are"<<endl;
    for (int i = 0; i <5; i++)
    {
        cout<<mark[i]<<" ";

    }

    return 0;
}




#include <iostream>
using namespace std;
int main()
{//....take input from the user and store them in an array..........
    int mark[5];
    cout << "enter  the 5 numbers:" << endl;
    for (int i = 0; i < 5; ++i)
    {
        cin >> mark[i];
    }
    cout << "The numbers are:" << endl;

    for (int k = 0; k < 5; ++k)
    {
        cout << mark[k] << " ";
    }

    return 0;
}*/

#include <iostream>
using namespace std;
int main()
{ //...........Displays the sum and avg. of the arrays element using for loop.......

    int marks[] = {6, 7, 9, 5, 2, 3};
    int sum = 0;
    int count = 0;
    int avg;
    cout << "the number are:" << endl;
    for (const int &n : marks)
    {
        cout << n << " ";
        sum += n;
        ++count;
    }

    cout << "\nTheir sum=" << sum << endl;
    avg = sum / count;
    cout << "Their avg=" << avg << endl;

    return 0;
}