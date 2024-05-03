#include<stdio.h>
#include <math.h>
int main()
{
    double n; 
    double s;
    printf("Enter the number for squared value: ");
    scanf("%lf", &n);

    s =pow(n, 2);

    printf("The square of the %.0lf is %.0lf", n, s);

    return 0;
}