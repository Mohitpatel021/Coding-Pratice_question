#include<iostream>
using namespace std;
int main(){
    int n,reverse_number=0,remainder;
    cout<<"enter the number"<<endl;
    cin>>n;
    while(n!=0){
    remainder=n%10;
    reverse_number=reverse_number*10+remainder;
    n=n/10;
    
    }

    cout<<"reverse_number="<<reverse_number<<endl;
    return 0;
}