#include <conio.h>
#include <stdio.h>
#include <string.h>
int main()
{
    // 1...find the length of the string..........
    char str[] = "mohit", str2[] = "mohit";
    printf("%d", strlen(str));
    printf("\n");

    // 2...This function helps u to compare two string.....
    if (strcmp(str, str2) == 0)

    {
        printf("string are equal");
    }
    else
    {
        printf("Not equal");
    }
    printf("\n");

       // 3....This function helps u to reverse given string

    char str[] = "mohit";
    printf("%s", strrev(str));

    // 4...This function helps u to convert upper case to lower case string

    char str[] = "MOHIT";
    printf("%s", strlwr(str));

    // 5....This function helps u to convert lower case to upper case
    char str[] = "mohit";
    printf("%s", strupr(str));

    // ....This function helps u to concate two string
    char str[] = "mohit", str2[] = " patel";
    printf("%s", strcat(str, str2));

    // 7...this function help u to copy one string into another string
    char str[] = "mohit", str2[10];
    strcpy(str2, str);
    printf("%s", str);
    printf("\n");
    printf("%s", str2);
    return 0;
}