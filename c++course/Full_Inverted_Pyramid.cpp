#include<iostream>
using namespace std;
int main(){
    ///int k=0;
    //int rows;
    //cout<<"enter the number of rows:"<<endl;

    //cin>>rows;

    for (int i = 5; i>=1; i--){
        for (int j = 1; j <= 5-i; j++)
        {
          cout<<" ";
        }
        for(int  k =1 ; k <=(2*i-1); k++)
        {
            cout<<"*";
        }
        
    
    //while(k!=2*i-1){
      //  cout<<"*";
        //++k;
    //}
cout<<endl;

    }
    
    return 0;
}