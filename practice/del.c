#include<stdio.h>
int main()
{
    int a[101], n, val, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the index to be deleted: ");
    scanf("%d", &val);//val = 1

    while(val < n-1)// 1 < 3
    {
        a[val] = a[val + 1];
        val++;
    }

    i = 0;
    while(i < n - 1)
    {
        printf("a[%d]:%d\n",i, a[i]);
        i++;
    }
    return 0;
}