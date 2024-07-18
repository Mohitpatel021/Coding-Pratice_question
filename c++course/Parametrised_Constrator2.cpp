#include <iostream>
#include <math.h>
using namespace std;
class point
{
    
    //...............program to find distance of 2 point using parameterised constrator....................
    int x, y;

public:
    friend int distance(point o1, point o2);
    
      void display()
    {
        cout << "The point is:(" << x << "," << y << ")" << endl;
    }
point(int , int);
};



 point:: point(int a, int b)
{
    x = a;
    y = b;
}
 int distance(  point o1, point o2)
{
    float d;
    d = sqrt(pow((o2.x - o1.x),2) + ((o2.y - o1.y),2));
    return d;
}
int main()
{

    point p(1, 2);
    p.display();
    point q(4,3);
    q.display();
    distance(p, q);
    cout << "the distance between two point is:" << distance(p, q) << endl;

    return 0;
}