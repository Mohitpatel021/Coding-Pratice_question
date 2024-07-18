/*#include <iostream>
using namespace std;
//..............swaping two variable without using third variable.............
int main()
{

    int a = 5, b = 6;

    a = a + b;
    b = a - b;
    a = a - b;
    cout << "the values of a=" << a << "and b=" << b << endl;

    return 0;
}*/


#include<iostream>
using namespace std;
//..............swaping two variable using third variable.......... 
int main(){
    int a=56,b=67,c;
    c=a;
    a=b;
    b=c;
    cout<<"the value of a is="<< a <<"and b is="<< b <<endl;
    return 0;

}