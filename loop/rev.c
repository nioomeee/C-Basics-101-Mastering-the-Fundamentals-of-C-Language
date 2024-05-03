#include <stdio.h>
int main()
{
    int n, rev=0, rem=0;
    printf("\nEnter the number to get it's reverse number: ");
    scanf("%d", &n);

    while(n>0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    printf("\nThe reverse of the number is: %d", rev);
    return 0;
}