#include <stdio.h>

void addNumbers()//declaration
{
    int a, b;
    printf("\nEnter the first number:");
    scanf("%d", &a);
    printf("\nEnter the second number:");
    scanf("%d", &b); 

    printf("\n The sum is: %d", a+b);

}//definition

void main()
{
    addNumbers(); //function calling
}