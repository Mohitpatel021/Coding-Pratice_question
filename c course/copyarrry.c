#include <conio.h>
#include <stdio.h>
int main()
{
    int i, a[100], b[100], n;
    printf("enter the size of array:-");
    scanf("%d", &n);
    printf("enter the element of array:-");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("the element of the array a[100] is:-");
    for (i = 0; i < n; i++)
    {
        printf("\n%d ", a[i]);
    }
    printf("\nCopying your elemnet in another array............");
    for (i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    printf("\nYour element after copying in new array:-");
    for (i = 0; i < n; i++)
    {
        printf("\n%d ", b[i]);
    }
}