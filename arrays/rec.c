#include<stdio.h>
void Hw(int count);
int main()
{
    int n;
    printf("Enter the number of times you want to print hello: ");
    scanf("%d", &n);
    Hw(n);
}
void Hw(int count)
{
    if(count == 0){
        return;
    }
    printf("\nHello");
    Hw(count-1);
}