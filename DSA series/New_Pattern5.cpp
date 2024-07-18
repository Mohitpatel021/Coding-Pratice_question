#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=1,n;
    cout<<"enter number"<<endl;
    cin>>n;
    while(i<=n){
        int j=1,value=i;
        while(j<=i){
            cout<<value<<" ";
            value++;
            j++;

        }
        cout<<endl;
        i++;
    }
    return 0;
}

/*
output----


1 
2 3 
3 4 5 
4 5 6 7 
5 6 7 8 9 


*/
