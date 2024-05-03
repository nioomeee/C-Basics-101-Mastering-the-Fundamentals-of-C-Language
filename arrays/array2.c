#include<stdio.h>
int main()
{
    int arr[200], n, i, val;
    printf("Enter the number of array elements: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("Enter the value of the element arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to be searched in the array: ");
    scanf("%d", &val);

    for(i=0; i<n; i++)
    {
        if(arr[i]==val)
        {
            printf("The value %d is situated at arr[%d]", val, i);
            break;
        }
    }

    return 0;
}