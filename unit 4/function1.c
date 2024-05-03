#include<stdio.h>
int add(); /* function prototype for add */
void add1();
void main()
{
	int ans,a=10,b=20;
	ans=add();
    
	printf("%d\n",ans);
	add1();
}

int add()
{
	int i=3,j=4;
	return i+j;
}

void add1()
{
	int a=10,b=20;
	int c=a+b;
	printf("%d",c);
}



