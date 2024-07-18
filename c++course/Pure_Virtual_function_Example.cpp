#include<iostream>
using namespace std;
class Base{
    protected:

    int a;
    public:
     void set_data(int a){
        this->a=a;
     }
    virtual void display()=0;
};
class Derived :public Base{
    protected:

    int x;
    public:
     void set_Data(int x){
        this->x=x;

     }
     void display(){
        cout<<"The value of x is :"<<x<<endl;
     }
};
class derived : public Base{
    protected:
    int y;
    public:
    void set_DATA(int y){
        this->y=y;

    }
    void display(){
        cout<<"The value of y is :"<<y<<endl;
    }
};
int main(){
    Base* tut[2];
    Derived obj1;
    obj1.set_Data(4);
    derived obj2;
    obj2.set_DATA(5);
    tut[0]=&obj1;
    tut[1]=&obj2;
    tut[0]->display();
    tut[1]->display();

    
    return 0;
}