#include<stdio.h>

int sum();
float sub();
void main()
{
	int z;
	z = sum();

	printf("The Sum : %d\n",z);
	printf("The Sum : %d\n",sum());
	
}

int sum()
{
	int a,b,c;
	printf("\nEnter the first number:");
	scanf("%d",&a);
	printf("\nEnter the first number:");
	scanf("%d",&b);

	c = a + b;
	return c;
	
}

