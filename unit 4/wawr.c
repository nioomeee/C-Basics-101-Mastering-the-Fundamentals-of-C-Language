#include<stdio.h>

void sum();
void sub();

void main()
{
	sub();
	sum();
	sum();
}

void sum()
{
	int n1=10,n2=5;
	printf("\n sum=%d",n1+n2);
}

void sub()
{
	int n1=10,n2=5;
	printf("\n sub=%d",n1-n2);
}