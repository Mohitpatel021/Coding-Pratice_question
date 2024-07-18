#include <iostream>
using namespace std;
class Baseclass
{
public:
    int var_base = 1;
    virtual void display()
    {
        cout << "1. Displaying the Base class variable var_base  " << var_base << endl;
    }
};
class Derivedclass : public Baseclass
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "2. Displaying the Base class variable var_base  " << var_base << endl;
        cout << "3. Displaying the derived class variable var_derived  " << var_derived << endl;
    }
};
int main()
{
    Baseclass *base_class_pointer;
    Baseclass obj_base;
    Derivedclass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->display();
}