#include <conio.h>
#include <stdio.h>
int main()
//............This array helps you to print array element in the form or matrix........................
{
    int i, j, arr[2][2];
    printf("enter the element of array");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {

            scanf(" %d", &arr[i][j]);
        }
    }
    printf("array element in form of matrix:-\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf(" %d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}