#include<stdio.h>
#include<conio.h>
int main()
{
    int n,temp, remainder, reverse_number = 0;
    printf("enter the number");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {

        remainder = n % 10;
        reverse_number = reverse_number + remainder*remainder*remainder;
        n = n / 10;
    }
    if (temp == reverse_number)
    {
        printf("armstrong");
    }
    else
    {
        printf("not armstrong");
    }
    return 0;
}