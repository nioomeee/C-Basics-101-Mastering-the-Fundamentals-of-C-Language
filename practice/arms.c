#include<stdio.h>

int main()
{
    int num, n, rem = 0, sum = 0;
    printf("Enter the number to check whether it's armstrong or not: ");
    scanf("%d", &num);

    n = num;

    while(n > 0)
    {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }

    if(num == sum)
        printf("\nArmstrong");
    else 
        printf("\nNot Armstrong");

    return 0;
}