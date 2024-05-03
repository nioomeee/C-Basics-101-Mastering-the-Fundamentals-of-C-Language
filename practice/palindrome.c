#include<stdio.h>
int main()
{
    int n, num, rev=0, rem;
    printf("Enter the number to check whether palindrome: ");
    scanf("%d", &n);

    num = n;
    while(n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (num == rev)
        printf("\nPalindrome");
    else
        printf("\nNot Palindrome");
    
    return 0;
}