#include<stdio.h> 


#include<stdio.h>  
  
long factorial(int n)  
{  
  if (n == 0)  
    return 1;  
  else  
    return(n * factorial(n-1));  
}  
   
int main()  
{  
  int number;  
  long fact;  
  printf("Enter a number: ");  
  scanf("%d", &number);   //5
   
  fact = factorial(number);  
  printf("Factorial of %d is %ld\n", number, fact);  
  return 0;  
}  

//Normal Factorial
/*int main()    
{    
	int i,fact=1,number;    
	printf("Enter a number: ");    
	scanf("%d",&number);    
	for(i=1;i<=number;i++)
	{    
		fact=fact*i;    //fact=24
	}    
	printf("Factorial of %d is: %d",number,fact);    
	return 0;  
}  */
