#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n) {
   int i, key, j;
   for (i = 1; i < n; i++) {
       key = arr[i];
       j = i - 1;
       while (j >= 0 && arr[j] > key) {
           arr[j + 1] = arr[j];
           j = j - 1;
       }
       arr[j + 1] = key;
   }
}
int main() {
   int n;
   cout<<"enter n"<<endl;
   cin>>n;
   int arr[n];
   cout<<"enter your element"<<endl;
   for(int i=0;i<n;i++) cin>>arr[i];
   insertionSort(arr, n);
   cout<<"Sorted array: \n";
   for (int i=0; i < n; i++) cout<<arr[i]<<" ";
   return 0;
}
