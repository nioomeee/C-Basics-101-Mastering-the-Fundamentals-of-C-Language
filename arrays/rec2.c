#include <stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("Enter the natural numbers to sum: ");
    scanf("%d", &n);
    printf("\nThe sum of %d natural numbers is %d", n, sum(n));
}
int sum(int n)
{
    int sumn_1= sum(n-1);
    int sumn= sum(n-1)+ n;
    return sumn;
}