#include<stdio.h>
/// @brief 


int i,j;
float add(int i, int j)
{
    printf("\nEnter the 2 values to be added:");
    scanf("%d %d", &i, &j);
    int ans=i+j;
    return ans;
}
void main()
{
    
    printf("The answer is : %d", add(i,j));
    
}