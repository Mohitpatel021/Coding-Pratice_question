#include <stdio.h>
int main()
{
    int arr[5], i, j, temp;
    printf("enter the element of array");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            // If we want to sort arrry in desecending order then simply chnge the insersation oerator(This ">" to This "<")
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }                                          
    }
    for (i = 0; i < 5; i++)
    {
        printf("\n%d ", arr[i]);
    }
    return 0;
}