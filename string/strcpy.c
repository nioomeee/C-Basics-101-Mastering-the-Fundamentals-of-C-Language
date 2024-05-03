#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50], str2[50];
    printf("Enter 1st string: ");
    gets(str1);
    printf("\nEnter the 2nd string: ");
    gets(str2);

    strcpy(str1, str2);
    printf("The final string is %s", str1);
    return 0;
}