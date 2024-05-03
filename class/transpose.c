#include<stdio.h>
int main()
{
    int a[100][100], i, j, n;

    printf("Enter the number of rows and columns: ");
    scanf("%d", &n);

    for(i=0; i<n ; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<n ; i++)
    {
        for(j=i+1; j<n; j++)
        {
            a[i][j] = a[i][j] + a[j][i];
            a[j][i] = a[i][j] - a[j][i];
            a[i][j] = a[i][j] - a[j][i];
        }
    }

    printf("\nTranspose is: \n");

    for(i=0; i<n ; i++)
    {
        for(j=0; j<n; j++)
        {
            printf(" %d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;

}