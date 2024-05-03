#include<stdio.h>

int main()
{
    char str[100];

    printf("Enter your file: ");
    gets(str);
    FILE *fp = fopen(str,"r");
    fgets(str,100,fp);

    fclose(fp);

    fp = fopen("10.txt","a");
    fputs(str,fp);
    printf("The test is appended");
    fclose(fp);

    return 0;
}