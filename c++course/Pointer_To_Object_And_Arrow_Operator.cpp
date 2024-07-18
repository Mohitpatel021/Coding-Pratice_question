#include <iostream>
using namespace std;
class student
{
    int marks, roll_number;

public:
    void set_data(int x, int y)
    {

        marks = x;
        roll_number = y;
    }
    void get_data()
    {
        cout << "The marks obtained is " << marks << endl;
        cout << "The roll number is " << roll_number << endl;
    }
};
int main()
{
    // Using ARROW operator...
   /* student mohit, *ptr;
    ptr = &mohit;
    ptr->set_data(78, 26);
    ptr->get_data();

    // Using normal pointer  and Dot(.) operator
    student mohit, *ptr;
    ptr = &mohit;
    ptr->set_data(78, 26);
    ptr->get_data();
*/
    // Array of object..
    student *ptr1 = new student[4];

    ptr1->set_data(26, 4);
    ptr1->get_data();
    ptr1++;
    ptr1->set_data(23, 2);
    ptr1->get_data();
    ptr1++;
     ptr1->set_data(58, 6 );
    ptr1->get_data();
    
   
    return 0;
}