#include <iostream>
using namespace std;
/*template <class S>
class my
{
    S data;

public:
    my(S a)
    {
        data = a;
    }
    void display()
    {
        cout << data << endl;
    }


};
*/
/*
template <class S>
class my
{
    S data;

public:
    my(S a)
    {
        data = a;
    }
    void display()
    {
        cout << data << endl;
    }
};

template<class S>
    void my<S>:: display()
    {
        cout << data << endl;
    }
   */

void func(int a)
{
    cout << "I am first func()" << endl<<a << endl;
}
template <class S>
void func(S a)
{
    cout << "I am templatised func()" << a << endl;
}

int main()
{
    func(5);//Exact match takes the first priority
    /*my<int> h(5);
    h.display();
    */

    return 0;
}