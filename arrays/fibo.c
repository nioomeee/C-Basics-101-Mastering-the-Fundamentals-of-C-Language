#include <stdio.h>
int Fib(int n);
int main()
{
    int n;
    printf("enter the number till which you want the fibonaci sequence: ");
    scanf("%d", &n);
    printf("The fibonacci sequence of %d is: ", n);
    for(int i=0; i<n; i++)
    {
        printf("%d", Fib(i));
    }
    return 0;
}
int Fib(int n)
{
    int fibn;
    if(n<=0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        fibn=Fib(n-1)+Fib(n-2);
        return fibn;
    }
}