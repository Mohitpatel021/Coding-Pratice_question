#include<iostream>
using namespace std;
class A{
    int a,b;
    public:
    void show(int a,int b){
        //cout<<"enter two number"<<endl;
        //cin>>a>>b;
        cout<<a<<" "<<b<<endl;

    }
    void sum(int a,int b){
        //cout<<"enter two number "<<endl;
        //cin>>a>>b;
        cout<<"sum="<<a+b<<endl;

    }
};
int main(){
    A obj;
    obj.show(5,78);
    obj.sum(7,89);
    
    return 0;
}