#include <iostream>
#include <string.h>
using namespace std;
/*   =======================VISIBILITY MODES====================
For a protected Member:
                              public derivation            private derivation               protected derivation

  1.Private Member       :-     Not Inherited                 Not Inherited                     Not Inherited
  2.Protected Member     :-     Protected                     Private                           Protected
  3.Public Member        :-     Public                        Private                           Protected
  */
class student
{
protected:
    int roll_number;
    string name;

public:
    void set_roll_number(int r)
    {
        roll_number = r;
    }
    void set_name(string s)
    {
        name = s;
    }
    void get_name()
    {

        cout << "your name is " << name << endl;
    }
    void get_roll_number()
    {
        cout << "Your roll number is " << roll_number << endl;
    }
};
class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void get_marks()
    {
        cout << "The marks obtained in physics are " << physics << endl;
        cout << "The marks obtained in maths are " << maths << endl;
    }
};
class result : public exam
{
    float perctentage;

public:
    void display()
    {

        get_roll_number();
        get_marks();
        cout << "Your percentage is " << (maths + physics) / 2 << endl;
    }
};

int main()
{
    result mohit;
    mohit.set_roll_number(26);
    mohit.set_marks(84, 90);
    mohit.set_name("Arun");
    mohit.get_name();
    mohit.display();

    return 0;
}