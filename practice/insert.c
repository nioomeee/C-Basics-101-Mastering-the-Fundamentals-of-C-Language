#include<stdio.h>
int main()
{
    int n, i, val, pos, a[100], temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nEnter the position to be inserted: ");
    scanf("%d", &pos);//pos=1

    printf("\nEnter the value: ");
    scanf("%d", &val);//val=10

    temp = n;

    while(temp > pos)//3>1
    {
        a[temp] = a[temp - 1];//a[3]=a[2]
        temp--;//a[2]-- =a[1]
    }

    a[pos] = val;

    for(i = 0; i <= n; i++)
    {
        printf("\na[%d]: %d",i, a[i] );
    }
    return 0;

}