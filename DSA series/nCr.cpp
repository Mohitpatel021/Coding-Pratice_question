#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
void nCr(int n,int r){
 int numerator=factorial(n);
 int denomenator=factorial(r)*factorial(n-r);
    int ans=numerator/denomenator;
    cout<<ans;
}
int main(){
    int n,r;
    cout<<"enter two number"<<endl;
    cin>>n>>r;
    nCr(n,r);
    return 0;
}