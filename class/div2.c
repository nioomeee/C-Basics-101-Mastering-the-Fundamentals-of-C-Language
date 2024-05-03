#include<stdio.h>
int main()
{
    int i, j, n;
    float a[100][100];

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%f", &a[i][j]);
        }
    } 
    
    printf("Array is: \n");

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%.2f ", a[i][j]);
        }
        printf("\n");
    } 

    printf("\n\n");
    
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            a[i][j] = a[i][j]/2;
            if(a[i][j] == 0)
            {
                a[i][j]=-5;
            }
            printf(" %.2f \t",a[i][j]);
        }
        printf("\n");
    } 
    return 0;
}