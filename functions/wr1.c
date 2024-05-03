#include <stdio.h>
void main()
{
    int add(int, int);//declartion

    int i, j, sum;

    printf("\n enter the value of the 1st number:");
    scanf("%d", &i);
    
    printf("\n enter the value of the 2nd number:");
    scanf("%d", &j);

    sum=add(i,j); //calling
    
    printf("\n Sum is %d", add(i,j));

}

int add(int i, int j)//definition
{
    int sum=i+j;
    return sum;
}