#include<iostream>
using namespace std;
int main(){
    int n,i;
    float num[100],sum=0.0,avg;
cout<<"enter the number of data:"<<endl;
cin>>n;

for (int i = 0; i < n; i++)
{
    cout<<i+1<<".enter number:"<<endl;
    cin>>num[i];
    sum+=num[i];

}
avg=sum/n;
cout<<"avg="<<avg;
    return 0;
}
