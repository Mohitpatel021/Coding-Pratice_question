#include<iostream>
using namespace std;
int main(){
    int *p=new int (30);
    int*arr=new int[3];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
delete[] arr;
     
    cout<<"the value at address a is "<<(p)<<endl;
    cout<<"the value at arr[0] is "<<arr[0]<<endl;
    cout<<"the value at arr[1] is "<<arr[1]<<endl;
    cout<<"the value at arr[2] a is "<<arr[2]<<endl;
    return 0;
}