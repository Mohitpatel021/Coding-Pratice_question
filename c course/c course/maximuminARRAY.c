#include <conio.h>
#include <stdio.h>
int main()
{
    //Find maimum number in the given array.....................
    int arr[5], i, max;
    printf("enter the element of that array:-");
    for (i = 0; i < 5; i++)
    {

        scanf("\n%d", &arr[i]);
    }
    max = arr[0];
    for (i = 0; i < 5; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("maximum number in this array is:- %d", max);
    return 0;
}
