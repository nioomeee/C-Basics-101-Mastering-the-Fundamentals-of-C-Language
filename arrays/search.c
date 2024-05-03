#include<stdio.h>
int main()
{
    int i, n, pos, a[99];
    printf("Enter the value till which you want the array: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("\nEnter the value of a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nEnter the position to be delted: ");
    scanf("%d", &pos);
    a[pos]=a[pos+1];

    for(i=0; i<n-1; i++)
    {
        printf("\na[%d]: %d", i, a[i]);
    }
    return 0;
}