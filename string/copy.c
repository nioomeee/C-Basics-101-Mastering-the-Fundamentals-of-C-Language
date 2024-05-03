#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1 = fopen("Prog1.txt", "r");
    FILE *fp2 = fopen("Prog2.txt", "r");

    FILE *fp3 = fopen("Prog3.txt", "w");

    if( fp1 == NULL || fp2 == NULL || fp3 == NULL)
    {
        printf("Cannot open the files");
    }
    char c;
    while ((c=fgetc(fp1))!=EOF)
    {
        fputc(c,fp3);
    }
    while((c=fgetc(fp2)))

}