#include <conio.h>
#include <stdio.h>
int main()
{
    int a[100], i, n, temp;
    printf("Enter the size of the element");
    scanf("%d", &n);
    printf("Enter the element of the array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the value that we need to insert in the array");
    scanf("%d", &temp);
    n++;
    a[n - 1] = temp;
    printf("This the new array\n");
    for (i = 0; i < n; i++)
    {
        printf("\n%d", a[i]);
    }

    return 0;
}