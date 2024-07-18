#include <stdio.h>
#include <conio.h>
int main()
{
    int sal;
    float tax;
    printf("enter salary");
    scanf("%d", &sal);

    if (sal <= 10000)
    {
        printf("no tax");
    }
    else if ((sal > 10000) && (sal <= 20000))
    {
        tax = (0.10 * sal);
        printf("tax:%f", tax);
    }
    else if ((sal > 20000) && (sal <= 30000))
    {
        tax = (0.30 * tax);
        printf("tax:%f", tax);
    }
    else
    {
        tax = (0.50 * sal);
        printf("TAX:%f", tax);
    }

    return 0;
}

