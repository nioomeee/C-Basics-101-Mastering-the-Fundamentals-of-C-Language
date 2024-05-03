#include <stdio.h>
 int main()
 {
    int n, i, count=0;
    printf("\nEnter the number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        if(n % i == 0)
        count++;
    }
    
    if(count == 2)
        {printf("\nThe number %d is prime", n);}
    else
        {printf("\nThe number %d isn't prime", n);}

    return 0;
 }