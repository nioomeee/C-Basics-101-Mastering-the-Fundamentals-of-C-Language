#include<stdio.h>

int main()
{
    char n, c;
    FILE *fp;

    printf("Enter the character: ");
    scanf("%c", &n);

    fp = fopen("random.txt","w");
    fputc(n, fp);

    fclose(fp);

    fp = fopen("random.txt", "r");

    c = fgetc(fp);

    printf("the entered no. is: %c", c);

    return 0;
}