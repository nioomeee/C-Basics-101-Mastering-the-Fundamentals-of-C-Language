#include<stdio.h>
int main()
{
    int i, j, s, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)//row
    {
        for(s=1; s<=n-i; s++) //to print spaces 
        {
            printf("  ");
        }

        for(j=1; j<=2*i-1; j++)//to print stars
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}