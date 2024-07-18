#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i=1;
    cout<<"enter nummber"<<endl;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
           cout<<j;
           // cout<<n-j+1;
            j++;

        }
        cout<<endl;

        i++;
    }
    return 0;
}
/*
OUTPUT-2------FOR(COUT<<N-J+1)
54321
54321
54321
54321
54321

OUTPUT-1-----FOR(COUT<<J)

1234
1234
1234
1234





*/