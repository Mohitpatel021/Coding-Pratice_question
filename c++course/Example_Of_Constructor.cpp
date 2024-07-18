#include <iostream>
#include <string>
using namespace std;
class student
{
    string name;

public:
    
    student(string s)
    {
        name = s;
    }
    student()
    {
        name = "unknown";
    }
    void display();
};
void student::display()
{
    cout << "your name will be: " << name << endl;
}
int main()
{
    student r1("shib");
    r1.display();
    student r2("mohit");
    r2.display();
    return 0;
}