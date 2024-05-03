#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    char name[100];
    char str[100];

    printf("ENter the file name: ");
    gets(name);
    
    fp = fopen(name, "w+");

    if(fp == 0)
    {
        printf("The file is not created");
    }


    printf("Enter the string you want to enter: ");
    gets(str);

    fputs(str,fp);


    return 0;
}