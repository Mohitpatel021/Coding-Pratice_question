#include<bits/stdc++.h>
using namespace std;
void swap_Alternate_Element_reverse(int array[],int size){
    int start=0;
    //int end=1;
   while(start<size){
        swap(array[start],array[start+1]);
        start+=2;
       
        
    }
    
}
void printArray(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int array[6]={4,5,2,6,7,5};
    int arr[5]={1,2,3,4,5};

    swap_Alternate_Element_reverse(array,6);
    swap_Alternate_Element_reverse(arr,5);

    printArray(array,6);
    printArray(arr,5);

    return 0;
}