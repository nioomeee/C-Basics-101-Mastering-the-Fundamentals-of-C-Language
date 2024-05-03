#include<stdio.h>
//function declration
void add(); //nrna //nrnp
void sum(int,int);//nrwa

  
int main()
{
	int n1=100,n2=20;
	add();
	sum(n1,n2);
	sum(12,4);
	printf("\n");
	return 0;
}

//function defination
void add()
{
	int no1=10,no2=20;
	
	int ans=no1+no2;
	
	printf("\n addition=%d",ans);
	
}

void sum(int no1, int no2)
{
	int ans=no1+no2;
	printf("\n addition=%d",ans);	
}






