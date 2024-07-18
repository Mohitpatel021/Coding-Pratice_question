#include<bits/stdc++.h>
using namespace std;
void fib(int n){
    int a=0,b=1,temp;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        temp=a+b;
        cout<<temp<<" ";
        a=b;
        b=temp;
    }
    return;
}

int main(){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    fib(n);
    return 0;
}

/*
Using Recurrsion method
##Another approch to solve the fibbonacci series
#include <iostream>
using namespace std;
int fib(int n)
{
  if (n < 2)
  {

    return 1;
  }
  return fib(n - 2) + fib(n - 1);
}

int main()
{

  int a;
  cout << "enter the number" << endl;
  cin >> a;
  cout << "the term fibonacci sequence at position " << a << " is " << fib(a) << endl;
  return 0;
}
*/
