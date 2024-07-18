#include <conio.h>
#include <stdio.h>
int main()
{
    int a[100], i, n, temp, pos;
    printf("Enter the size of the array");
    scanf("%d", &n);
    printf("Enter the element of the array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the position of the array");
    scanf("%d", &pos);
    printf("Enter the value of we need to insert");
    scanf("%d", &temp);
    n++;
    for (i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos] = temp;
    for (i = 0; i < n; i++)
    {
        printf("\n%d", a[i]);
    }

    return 0;
}