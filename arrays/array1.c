#include <stdio.h>
int main()
{
    int arr[100], i, pos, val, n;
    printf("\nEnter the number of array elements: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("Enter the value of arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the position to be inserted: ");
    scanf("%d", &pos);

    printf("\nEnter the value to be inserted: ");
    scanf("%d", &val);

    for(i=n; i>pos; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=val;

    for(i=0; i<n; i++)
    {
        printf("\nThe value of arr[%d] is %d", i, arr[i]);
    }
    return 0; 
}