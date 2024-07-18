#include <stdio.h>
int main()
{
    float a, b, c;
    char ch;
    printf("enter first number");
    scanf(" %f", &a);
    printf("enter your choice");
    scanf(" %c", &ch);
    printf("enter second number");
    scanf(" %f", &b);
    switch (ch)
    {
    case '+':
        c = a + b;
        printf("output=%f", c);
        break ;
         case '-' : 
         c = a - b;
        printf("output=%f", c);
        break ;
         case '*' :
          c = a * b;
        printf("output=%f", c);
        break ; 
        case '/' :
         c = a / b;
        printf("output=%f", c);
        break ;
 default : 
 printf("you've entered wrong choice");
    }
    return 0;
}