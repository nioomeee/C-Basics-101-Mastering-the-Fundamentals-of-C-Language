#include<stdio.h>

float mark(float n);

int main()
{
    int s, m, sa, sum;
   
    printf("\nEnter the marks of science: ");
    scanf("%d", &s);   
    
    printf("\nEnter the marks of maths: ");
    scanf("%d", &m);   
    
    printf("\nEnter the marks of sanskrit: ");
    scanf("%d", &sa);

    sum= s+m+sa;

    printf("Your percentage is : %.2f \n", mark(sum));

}
float mark(float n)
{
    float marks=(n/300)*100;
    return marks;
}