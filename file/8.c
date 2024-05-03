#include<stdio.h>

int main()
{
    char ch, s[100];
    FILE *fp;
    int i ,n;
    fp = fopen("file.txt", "r+");

    fgets(s, 100, fp);
    n = strlen(s);

    printf("The number of characters is: %d", n);

    return 0;
}