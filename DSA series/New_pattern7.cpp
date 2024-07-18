#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=1,n;
    cout<<"enter number"<<endl;
    cin>>n;
    while(i<=n){
        int j=1,count=n-j+1;
        while(j<=n){
            cout<<count;
            count--;
            j++;
        }
        cout<<endl;
        i++;

    }



    return 0;
}



/*
321
321
321
*/