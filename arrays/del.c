#include<stdio.h>
int main()
{
    int n, i, pos, a[10];
    printf("Enter the number of values: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("Enter the value for a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the position to be deleted: ");
    scanf("%d", &pos);
    for(i=0; i<n-1; i++)
    {
        a[pos]=a[pos+1];
    }

    for(i=0; i<=n; i++)
    {
        printf("\nThe value for a[%d] id %d", i, a[i]);
    }
    return 0;
}