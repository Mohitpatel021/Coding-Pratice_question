#include <conio.h>
#include <stdio.h>
int main()
{
    //find sum of array element and average of their element.......
    int sum = 0,avg, i, a[5];
    printf("enter array element:-\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
        avg=sum/5;
    }
    /*printf("Sum of  array element:-\n");
    for (i = 0; i < 5; i++)
    {
        ;
    }*/
    printf("sum=%d", sum);
    
    printf("\naverage=%d",avg);
    return 0;
}