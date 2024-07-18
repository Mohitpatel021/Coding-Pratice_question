#include <iostream>
using namespace std;
class employee
{

    int id;
    static int count;
    // count is the static memeber of the class.....
public:
    void setdata(void)
    {
        cout << "Enter the id of the employee:" << endl;
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "This is the id of the employee " << id << " and the number of that employee is:" << count << endl;
    }
    //...This function is acesss only static function of this clssss and  execute without help of any object....
    static void getcount(void)
    {
        cout << "the id of that employee is:" << count << endl;
    }
};
int employee::count; // default value is 0.If we want to start the value of any value then we need to declare here...!!!!!
int main()
{
    employee mohit, rohit, shubham;
    mohit.setdata();
    mohit.getdata();
    employee::getcount();
    rohit.setdata();
    rohit.getdata();
    employee::getcount();
    shubham.setdata();
    shubham.getdata();
    employee::getcount();
    return 0;
}