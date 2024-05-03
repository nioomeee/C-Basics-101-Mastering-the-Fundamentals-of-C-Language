#include<stdio.h>
void mul(int);

void main()
{
	int a;
	printf("\nEnter the number:");
	scanf("%d",&a);
	
	mul(a);       //passing values in variables
	//sum(10,5);   //passing values directly
}

void mul(int x)   //catching values in variables
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("\n %d * %d =  %d",x,i,(x*i));
	}
}






