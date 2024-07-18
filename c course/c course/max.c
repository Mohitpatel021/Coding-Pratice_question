#include <stdio.h>
#include <conio.h>
int main()
{
    int a[20];

    for (int i = 0; i < 5; i++)
    {
        printf("enter the element of array");
        scanf("%d", &a[i]);
    
    
    
    //this loop is used for store minimum or maximum number in a[0]
    // (int i = 0; i< 5; i++)
    //{ if we neeed to find greater number then simply chnge this sign(>)to this(<)
       if(a[0]>a[i]){
           a[0]=a[i];
     } }
    //}
    printf("%d :is minimum",a[0]);
    
    return 0;
}