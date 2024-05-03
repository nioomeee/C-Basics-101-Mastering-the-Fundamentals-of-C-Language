#include <stdio.h>
int sum(int n);

int main()
{
    int n;
    printf("Enter the no: ");
    scanf("%d",&n);
    printf("The sum of %d natural nos. is: %d", n, sum(n));
}

int sum(int n)
{
    if(n == 1)
    {
        return 1;
    }
    int sumn_1= sum(n-1); // for sum of n-1 nos
    int sumn = sumn_1+n; // for sum of n-1 + n
}