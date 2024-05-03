#include<stdio.h>
void fact(int);

void main()
{
	int no;
	printf("\n no::");
	scanf("%d",&no);
	fact(no);
}
void fact(int n)//n=6
{
	int i,ans=1;
	for(i=n;i>=1;i--)//n=6,i=5,6>=1
	{
		//int ans;
		ans=ans*i;//ans=30
	}
	printf("%d",ans);
}
