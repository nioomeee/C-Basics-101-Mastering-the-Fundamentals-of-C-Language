#include<stdio.h>
int main()
{
    int i, j, n, sp,num;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(sp=1; sp<=n-i; sp++)
        {
            printf("\t ");
        }
        for(j=1 ; j<=i; j++)
        {
            printf("\t\t *");
        }
        printf("\n\n");
    }
}