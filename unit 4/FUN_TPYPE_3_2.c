#include<stdio.h>
int sum(int, int);
float sub(int , int);

void main()
{
	int a,b,c;
	printf("\nEnter the first number:");
	scanf("%d",&a);
	printf("\nEnter the first number:");
	scanf("%d",&b);

	c = sum(a,b);

	printf("The Sum : %d\n",c);
	printf("The Sub : %f\n",sub(a,b));

}

int sum(int x, int y)
{
	int z ;
	z = x + y;
	return(z);
}

float sub(int x, int y)
{
	float z ;
	z = float(x + y);
	return(z);
}




