#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main()
{
    char c;
    printf("Enter the character to check: ");
    scanf("%c", &c);

    if(isalpha(c))
    {
        printf("The character entered is an alphabet\n");
        if(isupper(c))
        {
            printf("uppercase\n");
        }
        else
        {
            printf("lowercase\n");
        }
    }
    else if(isdigit(c))
    {
        printf("The character is a number");
    }
    else if(isspace(c))
    {
        printf("The character is a space");
    }
    else{
        printf("The character is unidentified");
    }
    return 0;
}