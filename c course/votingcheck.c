#include<stdio.h>
#include<conio.h>
int main(){
    int age;
    printf("enter age");
    scanf("%d",&age);
    if(age>=18){
        printf("eligible for voting");

    }else{
        printf("not eligible for voting");

    }
    return 0;
}