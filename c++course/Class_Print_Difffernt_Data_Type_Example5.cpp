#include <iostream>
using namespace std;
class printnumber
{
public:
    void printn(int n)
    {
        cout <<"for the integer value:-"<< n << endl;
    }
    void printn(float n)
    {
        cout<<"for float value:-" << n << endl;
    }
    void printn(double n)
    {
        cout <<"for double value:-"<< n << endl;
    }
};
int main()
{ printnumber a1,a2,a3;
  a1.printn(7);
    a2.printn(7.56);
   a3.printn(7.98765);

    return 0;
}