#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char s[100];
    int count=0, i;

    printf("Enter the string: ");
    gets(s);

    for(i= 0; s[i]!='\0'; i++)
    {
        
            count++;
    }

    printf("The length of the string is %s is %d",s, count );
    return 0;
}