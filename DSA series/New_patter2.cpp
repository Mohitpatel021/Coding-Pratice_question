#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i=1;
    cout<<"enter number"<<endl;
    cin>>n;
    int number=1;

    while(i<=n)
    {
        int j=1;
        while(j<=n){
            cout<<number<<" ";
            number++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
        return 0;
}

/*
OUTPUT---------


1 2 3 4 5 
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25

*/