#include <conio.h>
#include <stdio.h>
int main()
{
    int a[3][3], j, i;

    printf("Enter the erlement of the array:-");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("printing your array in the form of matrix:-\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j <  3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
