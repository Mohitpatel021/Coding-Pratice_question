// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main(){
    int i,n,index,num;
    int arr[100];
    cout<<"enter N"<<endl;
    
    cin>>n;
    
    for(i=0;i<n;i++){
        cout<<"enter element"<<i+1<<endl;
        cin>>arr[i];

    }
    cout<<"enter index  and number"<<endl;
    cin>>index>>num;
      n++;
   for(i=n;i>index;i--){
       arr[i]=arr[i-1];
       
   }
 
   arr[index]=num;
    for(i=0;i<n;i++){
       
        cout<<arr[i]<<endl;

    }
    
    
    return 0;
}