#include<iostream>
using namespace std;
int main(){
    int count=1;
int a,b,c,d,e;
cout<<"enter the numbers"<<endl;
cin>>a>>b>>c>>d>>e;
for (int i = 0; i < count; i++)
{
    ++count;
}

int sum=a+b+c+d+e;
cout<<"sum="<<sum<<endl;
float avg=sum/count;
cout<<"avg="<<sum/count<<endl;

    return 0;
} 