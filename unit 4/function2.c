#include<stdio.h>
int i=10;
int add(int,int); /* function prototype for add */

void main()
{
	int i=5,j=20;
	int ans=add(i,j);
        printf("%d\n",ans);
}

int add(int i, int j)
{
	printf("\n %d",i);
	printf("\n %d",j);
	printf("\n");
	int ans=i+j;
	printf("%d",ans);
	printf("\n");
	printf("\n");
	return ans;
}