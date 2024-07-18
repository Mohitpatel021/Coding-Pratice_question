#include <iostream>
using namespace std;
int main()
//..........enter the number in array and find their sum and their average.............
{

    int sum = 0;
    int avg;
    int count = 0;
    int grade[5]; //={65,54,84,56,88};
    //cout << "enter the number of 5 element of the array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> grade[i];
    }

    cout << "\nThe grade of the maths=" << grade[0] << endl;
    cout << "The grade of the science=" << grade[1] << "  " << endl;
    cout << "The grade of the hindi=" << grade[2] << "  " << endl;
    cout << "The grade of the english=" << grade[3] << "  " << endl;
    cout << "The grade of the sanskrit=" << grade[4] << "  " << endl;
    for (const int &n : grade)
    {
        sum += n;
        ++count;
    }
    cout << "\nTheir sum is=" << sum << endl;
    avg = sum / count;
    cout << "Their avg is=" << avg << endl;
    return 0;
}
