#include <iostream>
using namespace std;

/*
Initialization section used when our constructor body was very complexed and we want to intialized value with creating constructor
Intialization section is nothing it is the way to give value to the constructor parameter
Syntax for initialization list in constructor :
Constructor (argument_list) : initialization-section
{
    assaignment + other code;
}

*/
class Test
{
    int a;
    int b;

public:
    Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i+j)
    // Test(int i, int j) : a(i), b(2 * j)
    // Test(int i, int j) : a(i), b(a + j)
    // Test(int i, int j) : a(i)
    // Test(int i, int j) : b(j), a(i+b)---->RED Flag this will create problem because A will be initialized first
    {
        // b=j;
        cout << "constructor executed...." << endl;
        cout << "The value of A is " << a << endl;
        cout << "The value of B is " << b << endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}