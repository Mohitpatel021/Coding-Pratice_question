#include <iostream>
using namespace std;
class programming
{
    string name;

public:
    programming()
    {
        cout << "i love programing" << endl;
    }
    programming(string s)
    {
        name = s;
        cout << "i love " << name << endl;
    }
};
int main()
{
    programming p1;
    programming p2("cpp");
    return 0;
}