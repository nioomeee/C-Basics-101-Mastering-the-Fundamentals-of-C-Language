#include<stdio.h>
int Prime(int n);

int main()
{
    int n;
    printf("Enter the number to check whether prime or not: ");
    scanf("%d", &n);
    Prime(n);
    return 0;
}

int Prime(int n)
{
    int cnt;
    for(int i=1; i<=n; i++)
    {
        if(n % i == 0)
        {
            cnt ++;
        }
        if(cnt == 2)
            printf("%d is a prime number", n);
        else
            printf("%d is not a prime number", n);
            break;
    }
    
    return 0;
}