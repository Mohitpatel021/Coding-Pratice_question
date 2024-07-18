#include <iostream>
using namespace std;
 int number =0;
class data
{
    

public:
    data()
    {   number++;
        cout << "This  is the time when constructor is called for object number " << number << endl;
       
    }
    ~data()
    {
        cout << "This is the time when destructor is called for the object number " << number << endl;
        number--;
    }
};
int main()
{
    cout << "This is the main function" << endl;
    cout << "We are creating first object for the data class" << endl;
    data d1;
    {
        cout << "Entering in the block" << endl;
        cout << "We are creating two more object" << endl;
        data d2, d3;
        cout << "Exiting the block" << endl;
    }
    cout << "Program complete " << endl;

    return 0;
}