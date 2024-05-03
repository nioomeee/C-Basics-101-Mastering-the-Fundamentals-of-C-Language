#include <stdio.h>
int main()
{
    int a[100][100], n, i, j;
    printf("Enter the number of rows and columns: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
           printf("a[%d][%d]: ", i, j);
           scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i = j)
            {
                a[i][j] = a[i][j]; 
            }
           
            else
            {
                a[i][j]=0;
            }
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d \t", [i][j]);
    
        }
        printf("\n");
    }
    return 0;
}