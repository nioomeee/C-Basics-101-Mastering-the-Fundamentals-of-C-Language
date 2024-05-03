#include<stdio.h>

int Prime(int i, int n);

int main()
{
    int n, i, start, end;
    printf("\nEnter the starting range: ");
    scanf("%d", &start);
    printf("\nEnter the ending range: ");
    scanf("%d", &end);

    for(int i=start; i<=end; i++)
    {
        if(calculatePrime(i)
    } 
}

int Prime(int i, int n)
{
    if(i<=1)
        {
            return 0;
        }
        for(i=2, i * i < n, i++)
        {
            if(n % i == 0)
            {
                return 0;
            }
            return 1;
        }
}