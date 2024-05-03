#include<stdio.h>
int Fibo(int n);
int main()
{
    int n; 
    printf("Enter the limit for fibonacci sequence: ");
    scanf("%d", &n);
    Fibo(n);
    return 0;
}

int Fibo(int n)
{

    int n1 = 0, n2 = 1, n3 = 0;
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
    {
        while (n3<= n)
        {   
            printf("%d \t", n3);
            n1 = n2;
            n2 = n3;
            n3 = n1 + n2;
        }
        return 0;
    }

}