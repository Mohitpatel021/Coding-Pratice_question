/*#include<stdio.h>
//****greatest among 10 number*******
int main(){
    int a[10],i,max;
    printf("enter the number");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
     }
      max=a[0];
    for ( i =1; i <10; i++)
    {
        if(a[i]>=max)
max=a[i];
    }

    printf("%d=max",max);
}*/

#include <iostream>
using namespace std;
int main()
{
    int a[100], n;
    cout << "enter the element of the arrys between (1 to 100)" << endl;
    cin >> n;
    for (int i = 0; i < n; i++){

        cout << "enter number" << i + 1 << ":" << endl;

    cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (a[0] < a[i])
            a[0] = a[i];
    }
    cout << "largest number" << a[0];
    return 0;
}