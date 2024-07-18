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
    printf("Enter  the value that we want to insert in the ending of the array:- ");
    scanf("%d", &temp);
    n++;
    
    arr[n-1] = temp;
    printf("The new array is shown below after inserting the value at the ending  of the array:-");
    for (i = 0; i < n; i++)
    {
        printf("\n%d ", arr[i]);
    }
    return 0;
}