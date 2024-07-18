#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n<=1){
            return 1;
    }
    return n*factorial(n-1);
}
bool isEven(int n){
    if(n&1){
        //even number
        return 0;
    }
    //odd number
    return 1;
}
int main(){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    if(isEven(n)){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
    

    return 0;
}

