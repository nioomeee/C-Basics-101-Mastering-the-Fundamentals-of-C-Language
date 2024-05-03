#include<stdio.h>
int i=10;
float add(int,int); /* function prototype for add */

void main()
{
	int abc;
	int i=5,j=20;
	
    printf("%f\n",add(i,j));
}

float add(int i, int j)
{
	int ans=i+j;
    return ans;
}