#include <conio.h>
#include <stdio.h>
int main()
{
    int arr[100], i, n, pos, temp;
    printf("enter the size of the array:-");
    scanf("%d", &n);
    printf("Enter the element of the array:-");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the postion we need to insert element:-");
    scanf("%d", &pos);

    printf("Enter  the value that we want to insert in  the array:- ");
    scanf("%d", &temp);

    for (i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    n++;
    arr[pos] = temp;
    printf("The new array is shown below after inserting the value in the  gievm poaition of the rray:-");
    for (i = 0; i < n; i++)    {
        printf("\n%d ", arr[i]);
    }
    return 0;
}

