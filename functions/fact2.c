#include<stdio.h>

int Fact(int n);

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("\nFactorial of %d is %d", n, Fact(n));
    return 0; 
}
int Fact(int n)
{
    if(n == 0 || n ==1)
    {
        return 1;
    }    
    else
    {
        return n * Fact(n - 1);
    }
}