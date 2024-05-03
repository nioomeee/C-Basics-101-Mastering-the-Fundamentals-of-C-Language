#include <stdio.h>
int main()
{
    int n1, n2=1,n3=0, limit;
    printf("\nENter limit: ");
    scanf("%d", &limit);

    while(n3<=limit)
    {
        n1=n2;
        n2=n3;
        printf("%d \t", n3);
        n3=n2+n1;
    }
    printf("\n");
}