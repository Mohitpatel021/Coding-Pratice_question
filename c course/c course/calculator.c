#include<stdio.h>
int main(){
    int a,b,choice,add,mul,div,sub,remainder;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    printf("enter your choice");
    scanf("%d",&choice);
    if(choice==1){
        add=a+b ;
        printf("addition:%d",add);

    }
    else if(choice==2){
sub=a-b ;
printf("substraction:%d",sub);

    }
    else if(choice==3){
        mul=a*b;
        printf("multiplication:%d",mul);


    }
    else if(choice==4){
        div=a/b ;
        printf("division:%d",div);

    
    
    }
    else if(choice==5){
        remainder=a%b ;
        printf("reaminder:%d",remainder);


    }
   
    else{

printf("you have enterd wrong choice");

    }
    return 0;
}