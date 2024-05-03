#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1;
    FILE *fp2;
    FILE *fp3;

    char s[100], t[300];

    fp1 = fopen("random.txt", "r+");

    fgets(s,100, fp1);
    fclose(fp1);

    fp2 = fopen("demo.txt", "r+");

    fgets(t, 300, fp2);
    fclose(fp2);

    fp3 = fopen("file.txt", "w+");
    if(fp3 == NULL)
    {
        printf("The file is not formed\n");
    }

    fputs(s, fp3);
    fputs(t, fp3);
    fclose(fp3);

    return 0;
}