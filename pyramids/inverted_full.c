#include<stdio.h>
int main()
{
    int i, j, n, s;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i=n; i>=1; i--)
    {
        for(s=0; s <= n-i; s++) //printing spaces
        {
            printf("  ");
        }
        for(j = 1; j <= 2 * i -1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}