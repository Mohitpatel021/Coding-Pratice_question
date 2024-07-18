#include <stdio.h>
int main()
{
    int choice;
    printf("nter your choice");
    scanf(" %d", &choice);
    switch (choice)
    {
    case 1:
        printf("monday");
        break;
    case 2:
        printf("tuesday");
        break;
    case 3:
        printf("wednesday");
        break;
    case 4:
        printf("thursday");
        break;
    case 5:
        printf("friday");
        break;
    case 6:
        printf("saturday");
        break;
    case 0:
        printf("sunday");
        break;
    default:
        printf("you've entered wrong choice");
    }

    return 0;
}