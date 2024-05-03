#include<stdio.h>
int main()
{
    int i, j, n, num=1, sp;
    printf("\nEnter the number of rows: ");
    for(i=n; i>=0; i-- )
    scanf("%d", &n);
    
    {
        for(sp=1; sp<=n-1; sp++)
        {
           printf("  "); 
        }
            for(j=1; j<=i; j++)
            {
                printf(" %d", num);
                num++;
            }
        num=1;
        printf("\n");
    }
}