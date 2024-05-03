#include<stdio.h>

int main()
{
    FILE *fp;
    char s[100];
    fp = fopen("random.txt", "r");
    fgets(s, 100, fp);
    printf("%s", s);
    fclose(fp);
    return 0;
}