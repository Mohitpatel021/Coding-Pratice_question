#include <stdio.h>
int main()
{

    int a, i, count = 0;
    printf("enter the number");
    scanf("%d", &a);
    for (i = 50; i <= a; i++)
    {
        if (a % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("%d",i);
    }
   
    return 0;
}