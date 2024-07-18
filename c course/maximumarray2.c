#include <conio.h>
#include <stdio.h>
int main()
{
    int a[20];
    printf("enter the element of array");
    for (int i = 0; i < 5; i++)
    {

        scanf("%d", &a[i]);

        // this loop is used for store minimum or maximum number in a[0]
        //  (int i = 0; i< 5; i++)
        //{ if we neeed to find greater number then simply chnge this sign(>)to this(<)
        if (a[0] < a[i])
        {
            a[0] = a[i];
        }
    }
    //}
    printf("%d :is maximum", a[0]);

    return 0;
}