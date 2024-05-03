#include<stdio.h>
int sum(int, int);

void main()
{
	int a,b,c;
	printf("\nEnter the first number:");
	scanf("%d",&a);
	printf("\nEnter the first number:");
	scanf("%d",&b);

	c = sum(a,b);

	printf("The Sum : %d\n",c);
}

int sum(int x, int y)
{
	int z ;
	z = x + y;
	return(z);
}

