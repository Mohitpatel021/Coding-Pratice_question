#include<stdio.h>
int main()
{
    
    char input, alphabet='A';
    printf("Enter the uppercase charcter you want to print in the last row:");
    scanf("%C",&input);  
      for(int i=1;i<=(input-'A'+1);++i){
        for(int j=1;j<=i;++j){
            printf("%c",alphabet);
        }++alphabet;
        printf("\n");
    }return 0;
}