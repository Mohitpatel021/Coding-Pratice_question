#include <iostream>
using namespace std;
int main()
{
    int i, n, v,index;
    int arr[100];
    cout << "enter the value of n" << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout<<"enter  "<<i+1<<" element"<<endl;
        cin >> arr[i];
    }
    cout << "enter the value that we want to add in array " << endl;
    cin >> v;
    cout<<"enter index where want to enter the number"<<endl;
    cin>>index;
    n++;
    for (i = n; i >= index; i--)
    {
        arr[i]=arr[i-1];
        
      
    }
    arr[index]=v;
     for (i = 0; i < n; i++)
    {
       
       cout<< arr[i]<<endl;
    }
    
    return 0;
}