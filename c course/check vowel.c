#include<stdio.h>
#include<conio.h>

int main(){
    char ch;
    printf("enter charcter");
    scanf("%c",&ch);
    if(ch=='a'|| ch=='e'|| ch=='i' ||ch=='o'||ch=='u')
    {
        printf("vowel");

    }
    else{
        printf("not vowel");

    }
    return 0;
}