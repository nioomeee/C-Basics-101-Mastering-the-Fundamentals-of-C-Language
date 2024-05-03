#include<stdio.h>
int main()
{
    int i, j, n, num=1, sp;
    printf("\nEnter the number of rows: ");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++ )
    {
        for(sp=1; sp<=n-i; sp++)
        {
           printf("\t"); 
        }
            for(j=1; j<=i; j++)
            {
                printf("\t\t %d", num);
                num++;
            }
        num=1;
        printf("\n\n");
    }
}