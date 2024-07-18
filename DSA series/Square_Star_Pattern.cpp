/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows"<<endl;
    cin>>n;
    int i=1;
    while(i<=n)
{
    int j=1;
    while(j<=n){
        cout<<"*";
        j++;
    }
    cout<<endl;
    i++;
}    return 0;
}*/
// For printing number pattern in square pattern
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows"<<endl;
    cin>>n;
    int i=1;
    while(i<=n)
{
    int j=1;
    while(j<=n){
        cout<<i;
        j++;
    }
    cout<<endl;
    i++;
}    return 0;
}
/*
OUTPUT--------
11111
22222
33333
44444
55555
*/