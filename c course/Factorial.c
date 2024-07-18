#include<stdio.h>
//......................find factorial of any number using c programming..................
int main(){
int factorial=1,n;
printf("enter the number ");
scanf("%d",&n);
for (int i = 1; i <= n; i++)
{
    factorial=factorial*i;

}printf("the factorial of %d is:%d",n,factorial);

    
    return 0;
}