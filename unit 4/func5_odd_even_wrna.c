#include<stdio.h>

int odd_even();

int main()
{
	int ans;
	ans=odd_even();
	if(ans==1)
	{
		printf("\n entered no is odd");
	}
	else
	{
		printf("\n entered no is even");
	}
}

int odd_even()
{
	int no;
	
	printf("\n enter a no:");
	scanf("%d",&no);
	
	if(no%2==0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	
}









