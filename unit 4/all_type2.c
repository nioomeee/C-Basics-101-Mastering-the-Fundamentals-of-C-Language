#include<stdio.h>
int subtraction(); //wrna
int sub(int,int);//wrwa
 
 int subtraction()
 {
	 int no1=10,no2=5,ans;
	 ans=no1-no2;
	 return ans;
 }
 
 int sub(int a, int b)
 {
	return a-b;
 }
 
 int main()
 {
	 int s;
	 s=subtraction();
	 printf("\n subtraction=%d",s);
	 
	 s=sub(20,5);
	 printf("\n subtraction=%d",s);
	 
	 printf("\n subtraction=%d",sub(200,5));
	 
	 printf("\n");
	 return 0;
 }
 
 
 
 
 
 
 
 
 