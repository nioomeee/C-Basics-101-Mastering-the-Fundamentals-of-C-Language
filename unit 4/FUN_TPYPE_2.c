#include<stdio.h>
void sum(int, int);

void main()
{
	int a,b;
	printf("\nEnter the first number:");
	scanf("%d",&a);
	printf("\nEnter the first number:");
	scanf("%d",&b);

	sum(a,b);       //passing values in variables
	//sum(10,5);   //passing values directly
}

void sum(int x, int y)   //catching values in variables
{
	int z;
	z = x + y;
	printf("The Sum : %d\n",z);
}

