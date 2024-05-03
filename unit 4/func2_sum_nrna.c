#include<stdio.h>
void addition();//function declration
void sub();
void div();
void mul();
void modulo();


int main()
{
	//function calling
	addition();
	sub();
	
	printf("\n");
	return 0;
}

//function defination
void addition()
{
	int no1,no2,ans;
	printf("\n-------- for addition---------");
	
	printf("\n enter no1:");
	scanf("%d",&no1);
	printf("\n enter no2:");
	scanf("%d",&no2);
	
	ans= no1+no2;
	
	printf("\n addition of %d and %d = %d",no1,no2,ans);
}

void sub()
{
	int no1,no2,ans;
	printf("\n-------- for subtraction---------");
	
	printf("\n enter no1:");
	scanf("%d",&no1);
	printf("\n enter no2:");
	scanf("%d",&no2);
	
	ans= no1-no2;
	
	printf("\n subtraction of %d and %d = %d",no1,no2,ans);	
	
}










