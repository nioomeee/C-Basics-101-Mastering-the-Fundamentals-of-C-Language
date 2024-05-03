#include<stdio.h>
int addition(int,int);//function declration
int sub(int,int);

int main()
{
	int no1=10,no2=20;
	int add;
	add=addition(no1,no2); 	//function calling
	printf("\n addition=%d",add);
	printf("\n subtraction=%d",sub(18,2));
	printf("\n");
	return 0;
}

//function defination
int addition(int no1,int no2)
{
	int ans;
	ans=no1+no2;
	return ans;
}

int sub(int no1,int no2)
{
	int ans;
	return (no1-no2);
}





