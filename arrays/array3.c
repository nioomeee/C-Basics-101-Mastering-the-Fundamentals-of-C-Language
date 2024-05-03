#include<stdio.h>
int main()
{
    int a[99], n, i, pos;
    printf("Enter the limit of the array: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("Enter the value of a[%d]: ", i);
        scanf("%d", &a[i]);
    } 
    
    printf("Enter the position of array to be deleted: ");
    scanf("%d", &pos);

    for(i=0; i<n-1; i++)
    {
        a[pos]=a[pos+1];
    }
    for(i=0; i<n; i++)
    {
        printf("The value of a[%d] is %d", i, a[i]);
        printf("\n");
    }
    return 0;
}
