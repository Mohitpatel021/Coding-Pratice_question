#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,i=1;
    cout<<"enter number"<<endl;

    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=i){
            //cout<<"*";
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}


/*
OUTPUT-----
1 
1 2
1 2 3
1 2 3 4
*/