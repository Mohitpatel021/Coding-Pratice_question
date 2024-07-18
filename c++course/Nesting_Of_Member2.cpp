#include <iostream>
using namespace std;
class teacher
{
private:
    int salary;
    int bonus;

public:

  //  void setdata(int salary,int bonus);
    void getdata(int salary,int bonus);
   
};
void teacher::getdata(int salary,int bonus)
 {
        cout << "the value of salary is=" << salary << endl;
        cout << "the value of bonus is=" << bonus << endl;
       // cout << "the value of d is" << d << endl;
       // cout << "the value of e is" << e << endl;
    }
//void teacher::setdata(int salary,int bonus)
//{
    //salary = a1;
    //bonus = b2;
//}
int main()
{
    teacher mohit;

    //mohit.setdata(50000, 2000);
    mohit.getdata(50000,2000);

    return 0;
}
