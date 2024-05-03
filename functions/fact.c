#include<stdio.h>
int fact(int n);
int main()
{
    int n; 
    printf("Enter the no. to calculate the factorial: ");
    scanf("%d", &n);
    printf("The factorial of %d is %d", n, fact(n));
    return 0;
}
int fact(int n)
{
    if(n == 1)
    {
        return 1;
    }
    int fn_1=fact(n-1);
    int fn=fn_1*n;
    return fn;
}