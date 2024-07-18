#include <iostream>
using namespace std;
class Addamount
{
    int amount = 50;
int sum;
public:
    Addamount() {}
    Addamount(int d)
    {

       sum = amount + d;
    }
void print(){
    cout<<"the amount before deposit:-"<<amount<<endl;
}
    void display()
    {
        cout << "The amount after deposit:-" << sum << endl;
    }
};
int main()
{
    Addamount ad1;
    ad1.print();

    Addamount ad2(50);

    ad2.display();

    return 0;
}