#include <stdio.h>
// In this program we are complete more than 1 program ...............
// In this program we are done 3 different program using switch case.............
int main()
{
    int n, a, b, f = 1, ch;
    printf("enter choice");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("enter any number");
        scanf(" %d", &n);
        for (int i = 1; i <= n; i++)
        {
            printf("%d", i);
        }
        break;
    case 2:
        printf("enter two number");
        scanf(" %d%d", &a, &b);
        n = a + b;
        printf("%d", n);
        break;
    case 3:
        printf("enter number");
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            f = f * i;
        }
        printf("%d", f);
        break;

    default:
        printf("you've enterwrong choice");
    }
    return 0;
}