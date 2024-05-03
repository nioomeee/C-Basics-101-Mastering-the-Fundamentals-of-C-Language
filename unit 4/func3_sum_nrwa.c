#include<stdio.h>
void sub(int,int);

int main()
{
	int a=10,b=20;
	float c=10.10;
	
	sub(b,a);
	sub(12,4);
	printf("\n");
	return 0;
}

void sub(int no1,int no2)
{
	int ans= no1-no2;
	
	printf("\n subtraction of %d and %d = %d",no1,no2,ans);
}















