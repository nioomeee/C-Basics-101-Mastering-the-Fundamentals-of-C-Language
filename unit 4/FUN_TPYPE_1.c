#include<stdio.h>
void sum();

void main()
{
	sum();
}

void sum()
{
	int a,b,c;
	printf("\nEnter the first number:");
	scanf("%d",&a);
	printf("\nEnter the first number:");
	scanf("%d",&b);
	c = a + b;
	printf("The Sum : %d\n",c);
}

