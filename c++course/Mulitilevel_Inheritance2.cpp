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
protected:
    int salary;
    int bonus;
    string name;

public:
    void set_data(int s, int b)
    {
        salary = s;
        bonus = b;
    }
    void get_data()
    {
        cout << "your salary is " << salary << endl;
        cout << "your bonus is " << bonus << endl;
    }
    void set_name(string s)
    {
        name = s;
        cout << "your name is " << name << endl;
    }
};

class programmer : public employee
{
protected:
    int language;

public:
    void set_language(int L)
    {
        language = L;
        cout << "you have known language " << language << endl;
    }
};
class customer : public programmer
{
protected:
    int project;

public:
    void set_project(int p)
    {
        project = p;
    }
    void display()
    {
        get_data();
        cout << "Total project done by you for the company " << (project * language) << endl;
    }
};

int main()
{
    customer c1;
    c1.set_name("Mohit");
    c1.set_data(2000, 50);
    c1.set_language(5);
    c1.set_project(5);
    c1.display();

    return 0;
}