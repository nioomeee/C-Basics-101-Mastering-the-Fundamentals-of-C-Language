#include<stdio.h>

int main()
{
    FILE *fp;
    char s[100];
    
    fp = fopen("10.txt","r+");

    fgets(s,100,fp);
    fclose(fp);

    fp = fopen("file.txt", "w+");

    fputs(s, fp);

    return 0;
}