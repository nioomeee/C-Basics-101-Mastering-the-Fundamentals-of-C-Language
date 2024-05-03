#include<stdio.h>



int main()
{
    int n, fact = 1;
    printf("\nEnter the number to find it's factorial: ");
    scanf("%d", &n);
    
    for ( int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("The Factorial of %d is %d", n, fact);
        
    return 0;
}



      
