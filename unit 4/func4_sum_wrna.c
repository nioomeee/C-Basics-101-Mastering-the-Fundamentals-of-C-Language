#include<stdio.h>
int addition();//function declration
int sub();

int main()
{
	int add;
	add=addition(); 	//function calling
	printf("\n addition=%d",add);
	printf("\n subtraction=%d",sub());
	printf("\n");
	return 0;
}

//function defination
int addition()
{
	int no1=10,no2=20;
	int ans;
	
	ans=no1+no2;
	
	return ans;
}

int sub()
{
	int no1=10,no2=20;
	int ans;

	return (no1-no2);
}





