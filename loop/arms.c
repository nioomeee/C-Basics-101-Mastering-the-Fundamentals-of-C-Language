#include<stdio.h>
int main()
{
    int no, num, rem=0, sum=0;
    printf("\nEnter the number to check if it's armstrong or not:");
    scanf("%d", &no);
    no=num;
    while(no>0)
    {
        rem = no % 10;
        sum = sum + ( rem * rem * rem);
        no = no/10;

    }
    printf("Sum is %d", sum);
    if("num == sum")
        printf("\nIt's an armstrong number");
    else
        printf("\nIt's not an armstrong number");

}