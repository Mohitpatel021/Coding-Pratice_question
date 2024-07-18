#include <stdio.h>
int main()
{
    int a, b, *p, *q, sum;
    printf("enter two number:");
    scanf("%d%d", &a, &b);
    p = &a;
    q = &b;
    sum = *p + *q;
    printf("sum of two number is : %d", sum);
    return 0;
}  