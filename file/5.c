#include<stdio.h>
#include<ctype.h>
int main()
{
    FILE *fp1;
    int ch;
    char a[100];
    
    fp1=fopen("demo.txt", "r+");

    while ((ch = fgetc(fp1))!= EOF)
    {
        if(isupper(ch))
        {
            ch = tolower(ch);
        }
        if(islower(ch))
        {
            ch = toupper(ch);
        }
        printf("%c", ch);
    }
    fputc(ch,fp1);

    fclose(fp1);
    return 0;
}