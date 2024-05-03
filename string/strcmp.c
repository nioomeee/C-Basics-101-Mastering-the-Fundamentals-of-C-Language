#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char str1[50], str2[50];
    printf("Enter 1st string: ");
    gets(str1);
    printf("\nEnter the 2nd string: ");
    gets(str2);

    n = strcmp(str1, str2);

     if(n==0)
    {
        printf("Both the strings are equal");
    }
    else if(n<0)
    {
        printf("The string %s is greater than %s", str2, str1);
    }
    else 
    {
        printf("%s is greater than %s", str1, str2);
    }
    
    return 0;
}