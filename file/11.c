#include<stdio.h>
#include<ctype.h>

int main()
{
    FILE *fp;
    char ch;
    printf("Enter the character: ");
    getc(ch);

    fp = fopen("demo.txt", "w+");
    fputc(ch,fp);
    fclose(fp);
    return 0;
}