#include <iostream>
using namespace std;
/*   =======================VISIBILITY MODES====================
For a protected Member:
                              public derivation            private derivation               protected derivation

  1.Private Member       :-     Not Inherited                 Not Inherited                     Not Inherited 
  2.Protected Member     :-     Protected                     Private                           Protected
  3.Public Member        :-     Public                        Private                           Protected
  */
class employee
{
public:
    int id;
    float salary = 3400;
    employee() {}
    employee(int inpID)
    {
        id = inpID;
    }
};
class programmer : employee
{
public:
    int code = 10;
    int id;
    programmer(int inpId)
    {
        id = inpId;
    }
    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    employee harry(1), rohan(2);
    cout << "employee id of the employee harry is :" << endl;

    cout << harry.id << endl;
    cout << "employee salary of the employee id is :" << harry.id << endl;
    cout << harry.salary << endl;
    cout << "employee id of the employee rohan is :" << endl;
    cout << rohan.id << endl;
    cout << "employee salary of the employee id is :" << rohan.id << endl;
    cout << rohan.salary << endl;
    programmer skill(3);
    cout << "employee id of the programmer skill is :" << endl;
    skill.getdata();
    cout << "How many language they known are given below :" << endl;
    cout << skill.code;

    return 0;
}