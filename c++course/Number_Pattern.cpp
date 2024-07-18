/*#include<stdio.h>
int main(){//.......half inverted pyramid  of numbers using user input in form of rows..........
    int i,j,rows;
printf("enter the number of rows");
scanf("%d",&rows);
for(i=rows;i>=1;--i){
    for(j=1;j<=i;++j){
        printf("%d",j);

    }printf("\n");
}
    return 0;
}*/


//==============it is a infinit number loop because of some problem===================

#include<stdio.h>
int main(){//.......half  pyramid of numbers using user input in form of rows..........
    int i,j,rows;
printf("enter the number of rows");
scanf("%d",&rows);
for(i=1;i<=rows;++i){
    for(j=1;j<=i;++j){
        printf("%d",j);

    }printf("\n");
}
    return 0;
}