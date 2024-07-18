#include <stdio.h>
int main()
{
    int n, remainder, reverse_number = 0;
    printf("enter the number");
    scanf("%d", &n);
    while (n > 0)
    {
        remainder = n % 10;
        reverse_number = reverse_number * 10 + remainder;
n=n/10;
       
    }
     printf("revrse_number:%d",reverse_number);
    return 0;
}
