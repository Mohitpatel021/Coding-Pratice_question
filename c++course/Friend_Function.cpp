/*#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend complex sumcomplex(complex o1,complex o2);
    void printnumber()
    {
        cout << "your number " << a << " + " << b << "i" << endl;
    }
};
complex sumcomplex(complex o1, complex o2)
{
    complex o3 ;
    o3.setnumber((o1.a + o2.a),(o1.b+o2.b));
    return o3;
}

int main()
{
    complex c1, c2,sum;
    c1.setnumber(4, 6);
    c1.printnumber();
    c2.setnumber(5, 8);
    c2.printnumber();
    sum = sumcomplex(c1, c2);
    sum.printnumber();


    return 0;
}*/

#include <iostream>
using namespace std;
class room
{
   
    int fees[100];
    int studentid[100];
    int counter;

public:
    void incounter(void) { counter = 0; }
    void getdata(void);

    void displaydata(void);
};

void room ::getdata(void)
{//cout<<counter+1<<".Enter the name of the student: "<<endl;
   //gets str[studentname];
    cout << "Enter the student id : " << endl;
    cin >> studentid[counter];
    cout << "enter the fees of that student:" << endl;


    cin >> fees[counter];
    counter++;
}
void room ::displaydata(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout <<"The fees of the student with student id  " << studentid[i] << "  is  " << fees[i] << endl;
    }
}

int main()
{
    room m1;
    m1.incounter();
    for (int i = 1; i <= 10; i++)
    {
        m1.getdata();
    }

    m1.displaydata();

    return 0;
}