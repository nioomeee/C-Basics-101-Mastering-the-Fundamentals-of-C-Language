#include<stdio.h>
int main()
{
    int a[10][10][10], n, sum, i, j, k;

    printf("Enter the number of rows and columns: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        for(j=0; j<=i; j++)
        {
            for(k=0; k<=j; k++)
            {
                printf("A[%d][%d][%d]: ", i, j, k);
                scanf("%d", &a[i][j][k]);
            }
        }
    }

    sum = a[0][0][0];

    for(i=1; i<n; i++)
    {
        for(j=0; j<=i; j++)
        {
            for(k=0; k<=j; k++)
            {
                sum = a[i][j][k] + sum;
            }
        }
    }

    
    printf("Sum is: %d", sum);
                

    return 0;

}