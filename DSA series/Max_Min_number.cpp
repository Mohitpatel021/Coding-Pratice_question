#include <climits>
#include <iostream>
using namespace std;
int getMin(int array[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    return min;
}
int getMax(int array[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

int main()
{
    int size, max = 0;
    int array[100];
    cout << "enter size of the array" << endl;
    cin >> size;
    cout << "enter the element of the" << endl;

    for (int i = 0; i < size; i++)
    {

        cin >> array[i];
    }

    cout << "max value " << getMax(array, size)<<endl;
    cout << "min value " << getMin(array, size)<<endl;
    return 0;
}