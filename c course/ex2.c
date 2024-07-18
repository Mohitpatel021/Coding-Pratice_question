#include <conio.h>
#include <stdio.h>
int main()
{
    int a[100], n, i, temp;
    printf("Enter the size of the array");
    scanf("%d", &n);
    printf("Enter the element of the array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element that we need to insert in the array");
    scanf("%d", &temp);
    n++;
    for (i = n; i > 1; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = temp;
    for (i = 0; i < n; i++)
    {
        printf("\n%d", a[i]);
    }

    return 0;
}