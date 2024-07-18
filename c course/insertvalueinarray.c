#include <conio.h>
#include <stdio.h>
int main()
{
    int arr[100], i, n, temp;
    printf("enter the size of the array:-");
    scanf("%d", &n);
    printf("Enter the element of the array:-");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter  the value that we want to insert in the begninnig of the array:- ");
    scanf("%d", &temp);
    n++;
    for (i = n; i > 1; i--)
    {
       arr[i-1]= arr[i - 2] ;
    }
    arr[0] = temp;
    printf("The new array is shown below after inserting the value at the begnning of the array:-");
    for (i = 0; i < n; i++)
    {
        printf("\n%d ", arr[i]);
    }
    return 0;
}