#include <stdio.h>
int main()
{
    int a[20][20], b[20][20], sum[20], i, j, r, c;
    printf("Enter the number of rows and columns of the arrays to be added: ");
    scanf("%d %d", &r,&c );

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("\nEnter the element a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("\nEnter the element b[%d][%d]:", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nThe elements of the newly formed array by addition are:\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("\t%d", a[i][j]+b[i][j]);
        }
        printf("\n\n");
    }
}