#include<stdio.h>
float add(int i, int j)
{
    printf("Enter the value of the first number:");
    scanf("%d", &i);

    printf("Enter the value of the second number:");
    scanf("%d", &j);

    int ans= i+j;

    return ans;

}
int main()
{
    int i, j;
    int ans = add(i,j);

}