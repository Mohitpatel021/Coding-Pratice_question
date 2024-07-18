#include <bits/stdc++.h>
using namespace std;
// Inheritance implementation
class human
{
private:
    int weight = 67;

public:
    int age = 23;
    int height = 5;

    int getweight()
    {
        return this->weight;
    }
    int getage()
    {
        return age;
    }
};
class male : protected human
{
public:
    int year;
    void home()
    {
        cout << "all done with the fucntion " << endl;
    }
};
int main()
{
    human object;
    cout << object.getweight();

    return 0;
}