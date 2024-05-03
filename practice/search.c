#include<stdio.h>
int main()
{
    int a[100], n, val, i;
    printf("Enter the number of elements for the array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the value to be searched in the array: ");
    scanf("%d", &val);

    for(i = 0; i < n; i++)
    {
        if(a[i] == val)
        {    printf("%d is located at a[%d]", val, i);
            break;
        }    
        
    }
    return 0;
}