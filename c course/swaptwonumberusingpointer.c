#include<stdio.h>
int main(){
    int *p,*q,temp;
int a=10,b=29;
p=&a;
q=&b;
temp=*p;
*p=*q;
*q=temp;
printf("%d\n%d",*p,*q);
return 0;









}