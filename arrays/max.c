#include<stdio.h>
int main()
{
    int a[100], n, i, max;

    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    max = a[0];

    for(i =1; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i]; 
        }
    }

    printf("\nThe maximum element is: %d", max);
    
    return 0;

}