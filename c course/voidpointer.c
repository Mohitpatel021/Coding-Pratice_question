#include <stdio.h>
int main()
{
    void *p;
    int a = 10;
    char d = 'D';
    p = &a;
    p = &d;

    printf("%d\n", *(int *)p);
    printf("%c", *(char *)p);

    return 0;
}